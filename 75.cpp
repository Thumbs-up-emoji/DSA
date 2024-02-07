class Solution {
public:
    void swap(int* a, int* b) {
    int temp = *a; // store the value of a in temp
    *a = *b; // assign the value of b to a
    *b = temp; // assign the value of temp to b
}
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int c0=0;
        int c1=0;
        int c2=n-1;
        while(c1<=c2){
            if(nums[c1]==0){
                swap(&nums[c0],&nums[c1]);
                c0++;
                c1++;
            }
            else if(nums[c1]==1){
                c1++;
            } 
            else if(nums[c1]==2){
                swap(&nums[c2],&nums[c1]);
                c2--;
            }
        }
    }
};