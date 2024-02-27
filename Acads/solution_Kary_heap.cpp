#include<bits/stdc++.h>
using namespace std;

void maxHeapify(vector<int>& A, int i, int k)
{
    int largest = i;
    for(int j = k*i+1; j < A.size() && j<=k*i + k; j++)
    {
        if(A[j] > A[largest])
        {
            largest = j;
        }
    }
    if(largest != i)
    {
        swap(A[i], A[largest]);
        maxHeapify(A, largest, k);
    }
}

void solve(vector<int>& A, int k) 
{
    int n = A.size();
    for(int i = (n-1)/k; i>=0; i--)
        maxHeapify(A, i, k); 
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
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        solve(v, k);
        for(int i=0; i<n; i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
}