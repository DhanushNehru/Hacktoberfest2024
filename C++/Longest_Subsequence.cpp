#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int binarySearch(int val, const std::vector<int>& pref) {
        int ans = 0, i = 0, j = pref.size() - 1, mid;
        while (i <= j) {
            mid = i + (j - i) / 2;
            if (pref[mid] <= val) {
                ans = mid;
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        return ans;
    }

    std::vector<int> answerQueries(std::vector<int>& nums, std::vector<int>& queries) {
        std::sort(nums.begin(), nums.end());
        std::vector<int> pref(1, 0), ans;
        for (const auto& val : nums) {
            pref.push_back(pref.back() + val);
        }
        for (const auto& val : queries) {
            int mx = binarySearch(val, pref);
            ans.push_back(mx);
        }
        return ans;
    }
};

int main() {
    Solution sol;
    std::vector<int> nums = {4, 2, 1};      // Example input
    std::vector<int> queries = {3, 10};     // Example queries

    std::vector<int> result = sol.answerQueries(nums, queries);
    for (int res : result) {
        std::cout << res << " ";
    }
    std::cout << std::endl;

    return 0;
}
