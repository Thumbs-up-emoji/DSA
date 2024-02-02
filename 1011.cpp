#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int r = accumulate(weights.begin(),weights.end(),0);
        int l = *max_element(weights.begin(),weights.end());

        while(l<=r){
            int mid = l+r;
            mid/=2;
            int day=0,daywt=0;
            for(auto x:weights){
                if(daywt+x>mid){
                    daywt=x;
                    day++;
                }
                else daywt+=x;
            }
            if(daywt>0) day++;
            if(day>days) l=mid+1;
            else r=mid-1;
        }
        return l;
    }
};

int main(){
    Solution sol;
    vector<int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout << sol.shipWithinDays(weights, days) << endl;
    return 0;