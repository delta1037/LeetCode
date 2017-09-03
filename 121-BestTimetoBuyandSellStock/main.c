#include <stdio.h>


int maxProfit(int* prices, int pricesSize) {
    int m;
    int i,j;

    int maxprofit=0;

    for(i=0;i<pricesSize;i++){
        for(j=i+1;j<pricesSize;j++){
            m=prices[j]-prices[i];
            if(m>maxprofit){
                maxprofit=m;
            }
        }
    }
    return maxprofit;
}
int main() {
    int a[6]={7, 1, 5, 3, 6, 4};
    int result=0;
    result=maxProfit(a,6);
    printf("%d",result);
    return 0;
}