#include <bits/stdc++.h>
using namespace std;


vector<int> twoSums(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size()- 1;

    while (left < right) {
        int curr_sum = nums[left] + nums[right];

        if (curr_sum == target) {
            return {left, right};
        } else if (curr_sum < target) {
            ++left;
        } else {
            --right;
        }
    }

    return {};
}


int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int target = 6;
    vector<int> result = twoSums(nums, target);

    if (result.empty()) {
        cout << "No pair found\n";
    } else {
        cout << "Indices: " << result[0] << " " << result[1] << '\n';
        cout << "Values: " << nums[result[0]] << " " << nums[result[1]] << '\n';
    }

    return 0;
}
