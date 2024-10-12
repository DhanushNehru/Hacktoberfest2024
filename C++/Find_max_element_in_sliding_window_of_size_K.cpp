#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> max_elements;
    deque<int> dq;

    for (int i = 0; i<nums.size(); i++) {
        if (!dq.empty() && dq.front() < i - k + 1) {
            dq.pop_front();
        }

        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }

        dq.push_back(i);
        if (i >= k - 1) {
            max_elements.push_back(nums[dq.front()]);
        }
    }
    return max_elements;
}

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = maxSlidingWindow(nums, k);

    cout << "Max elements in each sliding window: ";
    for (int max : result) {
        cout << max << " ";
    }
    cout << endl;

    return 0;
}
