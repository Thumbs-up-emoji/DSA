#include <bits/stdc++.h>
#include "DSA_Vector.cpp"
using namespace std;

int search(DSA_Vector& v,int n){
    int low=0,high=v.Size()-1;
    int mid=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(n==v.GetElement(mid)) return mid;
        else if(n<v.GetElement(mid)) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int search_recursive(DSA_Vector& v,int l, int h, int n);

int main(){
    DSA_Vector vec;
    int target=3;
    int res1=search(vec,target);
    int res2=search_recursive(vec, 0, vec.Size()-1, target);
    cout<<res1<<endl<<res2;
    return 0;
}

int search_recursive(DSA_Vector& v,int l, int h, int n){
    if(l>h) return -1;
    int mid=l+h;
    mid/=2;
    if(n==v.GetElement(mid)) return mid;
    else if(n<v.GetElement(mid)){
        h=mid-1;
        return search_recursive(v, l, h, n );
    }
    else{
        l=mid+1;
        return search_recursive(v,l,h,n);
    } 
}