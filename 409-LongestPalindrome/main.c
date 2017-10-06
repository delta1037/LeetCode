#include <stdio.h>
#include <malloc.h>

int longestPalindrome(char* s) {
    int* big=(int*)malloc(26* sizeof(int));
    int* little=(int*)malloc(26* sizeof(int));
    int i;
    for(i=0;i<26;i++){
        big[i]=0;
        little[i]=0;
    }
    i=0;
    while(s[i]!='\0'){
        if(s[i]>96){
            little[s[i]-'a']++;
        }
        else{
            big[s[i]-'A']++;
        }
        i++;
    }
    int sum=0;
    int max=0;
    for(i=0;i<26;i++){
        //printf("%d,%d\n",little[i],big[i]);
        if(little[i]%2==0){
            sum+=little[i];
        }
        else{
            max=1;
            sum=sum+(little[i]-1);
        }

        if(big[i]%2==0){
            sum+=big[i];
        }
        else{
            max=1;
            sum=sum+(big[i]-1);
        }
    }
    //printf("%d,%d\n",sum,max);

    return sum+max;
}
int main() {
    //65-90
    //97-122
    //"civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth"
    char s[50]="ivilwartestingwhetherthatnaptionoranynar";
    int re=longestPalindrome(s);
    printf("%d",re);
    return 0;
}