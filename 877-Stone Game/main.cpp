#include <iostream>
#include <vector>

using namespace std;

/**
 *  fail to pass
 */
class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int front = 0,swear = (int)piles.size()-1;
        int AlexSum = 0, LeeSum = 0;
        while(front<swear){
            if(piles[front]>piles[swear]){
                AlexSum += piles[front];
                front++;
            } else{
                AlexSum += piles[swear];
                swear--;
            }
            if(piles[front]>piles[swear]){
                LeeSum += piles[front];
                front++;
            }else{
                LeeSum += piles[swear];
                swear--;
            }
        }
        return AlexSum > LeeSum;
    }
};

int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}