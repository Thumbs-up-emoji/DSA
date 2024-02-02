#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(target<nums[0]) return -1;
        int n=nums.size();
        if(target>nums[n-1]) return -1;
        n/=2;
        if(nums[n]==target) return n;
        else if(nums[n]<target)
        {
            vector<int> next(nums.begin() + n + 1, nums.end());
            int res = search(next, target);
            return res == -1 ? -1 : res + n + 1;
        }
        else if(nums[n]>target)
        {
            vector<int> next(nums.begin(), nums.begin() + n);
            return search(next, target);
        }
        return -2;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-1,0,3,5,9,12};
    int target =9;
    int result = solution.search(nums, target);
    cout << "The target is at index: " << result << endl;
    return 0;
}