#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x!=0&&x%10==0)){
            return false;
        }
        if(!x){
            return true;
        }
        int reverseNumber=0,cx=x;
        while(x>0){
            reverseNumber = reverseNumber*10 +x%10;
            x=x/10;
        }
        return reverseNumber == cx;
    }
};

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}