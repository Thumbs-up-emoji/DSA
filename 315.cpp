//still need to optimise this
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> counts(nums.size());
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<nums[i]) count++;
            }
            counts[i]=count;
        }
        return counts;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {-1};
    vector<int> op=solution.countSmaller(nums);
    for(int i=0; i<op.size(); i++){
        cout << op[i] << " ";
    }
    return 0;
}