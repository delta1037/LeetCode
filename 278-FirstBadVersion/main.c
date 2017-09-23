#include <stdio.h>

// Forward declaration of isBadVersion API.

int firstBadVersion(int n) {
    int num[10]={1,1,1,1,1,1,1,1,0,0};
    int left=1;
    int right=n;
    int mid=0;
    while(left<right){
        mid=left+(right-left)/2;
        if(!num[mid]){
            left=mid+1;
        }else{
            right=mid;
        }
    }
    return left;
}
int main() {
    int re=firstBadVersion(10);
    printf("%d",re);
    return 0;
}