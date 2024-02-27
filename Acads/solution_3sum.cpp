#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums) 
{
        
    int count = 0;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for(int i =0; i+2<n; i++)
    {
        int j = i+1;
        int k = n-1;
        while(j < k)
        {
            if(nums[i] + nums[j] + nums[k] == 0)
            {
                count++;
                j++;
                k--;
                while(j<n &&(nums[j] == nums[j-1]))
                    j++;
                while(k>=0 &&(nums[k] == nums[k+1]))
                    k--;
            }
            else if(nums[i] + nums[j] + nums[k] < 0)
                j++;
            else
                k--;
        }
        while(i+1<n && (nums[i] == nums[i+1]))
            i++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        cout<<solve(v)<<endl;
    }
}