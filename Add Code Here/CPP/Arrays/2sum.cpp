/**
* Author :- @ashish5kmax
* Problem link :- https://leetcode.com/problems/two-sum/

* Approch :-
   1) We nned to find out the sum of two elements equals target if it is then we return vector of both indexes.
   2) For doing that we use a unordered_map which stores the info of current elements.
   3) If target-nums[i] is present in maps that means it is possible to form sum of 2 numbers == target.
   4) Hence we return then and there both indexes.
   5) If not we return {-1,-1} that is no such index is found.

* Time Complexity :-
  O(NlogN) can be reduce to constant O(N) if some hash vector is used maybe

* Space Complexity :-
  O(N)
**/ 
// ----------------- Header Files --------------------------
#include <iostream> // input and output
#include <vector> // for vector class
#include <unordered_map> // for map

using namespace std;

vector<int> two_sum(vector<int>&nums, int target) {
  unordered_map<int,int>m;
  int n = nums.size();
  
  for(int i=0;i<n;i++) {
    if(m.find(target-nums[i])!=m.end()) {
      return {m[target-nums[i]], i};
    }
    m[nums[i]] = i;
  }

  return {-1,-1};
}

// --------------------Main function------------------------
int main() {
  // you can add your custom inputs too.
  vector<int>nums = {2,7,11,15};
  vector<int>soln;

  // you can add your custom target
  int target = 9;
  
  soln = two_sum(nums, target); 
  cout<<soln[0]<<","<<soln[1]<<endl;
  return 0;
}
