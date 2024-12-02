class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n,i;
        n=nums.size();
        int arr[n];
        int rig[n];
        arr[0]=1;
        rig[n-1]=1;
        for(i=1;i<n;i++){
        arr[i]=nums[i-1]*arr[i-1]; 
         }
        for(i=1;i<n;i++){
         rig[n-(i+1)]=nums[n-i]*rig[n-i];
        }
        for(i=0;i<n;i++){
          nums[i]=arr[i]*rig[i];
        }
        return nums;
    }
};