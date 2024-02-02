#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=searchLow(nums,target);
        int right=searchHigh(nums,target);
        return {left,right};
    }
    int searchLow(vector<int>& nums, int target){
        int low=0, high=nums.size()-1;
        while(low<=high){
            int mid=low+high;
            mid/=2;
            if(nums[mid]==target){
              if(mid==0||nums[mid-1]!=target){
                return mid;
              }
            else high=mid-1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
        }
        return -1;
    }
    int searchHigh(vector<int>& nums, int target){
        int low=0, high=nums.size()-1;
        while(low<=high){
            int mid=low+high;
            mid/=2;
            if(nums[mid]==target){
              if(mid==nums.size()-1||nums[mid+1]!=target){
                return mid;
              }
            else low=mid+1;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
        }
        return -1;
    }
};

int main(){
    Solution solution;
    vector<int> nums={1};
    int target=1;
    vector<int> output=solution.searchRange(nums,target);
    for(int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }
    return 0;
}