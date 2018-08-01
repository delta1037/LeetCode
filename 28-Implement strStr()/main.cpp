#include <iostream>

using namespace std;

class Solution {
 public:
    int strStr(string haystack, string needle) {
        int hayStackSize = (int)haystack.size();
        int needleSize = (int)needle.size();
        if(needleSize==0){
            return 0;
        }
        for(int i=0;i<hayStackSize-needleSize+1;i++){
            if(haystack[i]==needle[0]&&haystack.substr(i,needleSize)==needle){
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    std::cout << "Hello, World!" << std::endl;
    return 0;
}