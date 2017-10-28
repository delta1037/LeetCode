#include <stdio.h>
#include <limits.h>

int integerReplacement(int n) {
    int res=0;
    if (n == 1){
        return res;
    }
    if (n == 3)
    {
        res += 2;
        return res;
    }
    if (n == INT_MAX){
        return 32;
    }

    if (n & 1)
    {
        res ++;
        if ((n + 1) % 4 == 0){
            res+=integerReplacement(n + 1);
        }else{
            res+=integerReplacement(n - 1);
        }

    }else
    {
        res ++;
        res+=integerReplacement(n / 2);
    }

    return res;

}
int main() {
  int result=integerReplacement(100000000);
  printf("%d",result);
  return 0;
}