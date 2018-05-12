#include <iostream>
#include <vector>
using namespace std;
struct Interval {
  int start;
  int end;
  Interval() : start(0), end(0) {}
  Interval(int s, int e) : start(s), end(e) {}
};
class Solution {
 public:
  vector<Interval> merge(vector<Interval>& intervals) {
    int i=1;
    while(i<intervals.size()){
      if(intervals[i].start<intervals[i-1].end){

      }
    }

  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}