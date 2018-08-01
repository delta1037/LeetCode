#include <iostream>
#include <vector>
using namespace std;
struct Interval {
  int start;
  int end;
  Interval() : start(0), end(0) {}
  Interval(int s, int e) : start(s), end(e) {}
};
/**
 * fail to pass
 */
class Solution {
 public:
  vector<Interval> merge(vector<Interval>& intervals) {
      unsigned long iterSize = intervals.size();
      if(0 == iterSize){
          return intervals;
      }

      int swear=0;
      Interval iter;
      vector<Interval> res;
      for(unsigned long i = 0; i<iterSize;i++){
          iter.start = intervals[i].start;
          swear = intervals[i].end;
          ++i;
          while(i<iterSize && intervals[i].start<=swear){
              swear = intervals[i].end;
              i++;
          }
          iter.end = swear;
          res.push_back(iter);
      }

      return res;

  }
};
int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}