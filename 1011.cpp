//explanation:
//It simulates the process of loading the items onto the ship day by day. It iterates over the weights vector, and for each weight, it checks if adding it to the current day's weight (daywt) would exceed mid. If it would, it starts a new day and resets daywt to the current weight. Otherwise, it adds the weight to daywt.
//After going through all the weights, if daywt is greater than 0, it increments day because there are still some weights left to be shipped on a new day. Then, it checks if the number of days day is greater than the given days. If it is, it means that the current guess mid for the ship's weight capacity is too small, so it sets l to mid + 1. Otherwise, it means that the current guess mid is large enough, so it sets r to mid - 1.

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
}