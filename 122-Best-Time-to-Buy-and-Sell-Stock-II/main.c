#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int max=0;
    int i;
    int t;

    for(i=1;i<pricesSize;i++){
        t=prices[i]-prices[i-1];
        max=max+(t>0?  t:0);
    }

    return max;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}
//2.00000
-2147483648