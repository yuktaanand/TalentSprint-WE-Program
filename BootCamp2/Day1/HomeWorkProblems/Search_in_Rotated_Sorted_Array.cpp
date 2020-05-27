#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int binary_search(vector<int>& nums, int target, int low, int high){
 
        if(low > high)
            return -1;
 
        int mid=low+(high-low)/2;
 
        if(nums[mid]==target)
            return mid;
 
        if(nums[mid]>=nums[low]){
            if(nums[mid]>=target && nums[low]<=target)
                return binary_search(nums, target, low, mid-1);
            else
                return binary_search(nums, target, mid+1, high);
        }
        else{
            if(nums[mid]<=target && nums[high]>=target)
                return binary_search(nums, target, mid+1, high);
            else
                return binary_search(nums, target, low, mid-1);
        }
 
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return binary_search(nums, target, 0, n-1);
 
    }
};
 
int main() { 
 
    int n;
    cin>>n;
    vector<int>nums;
    int x;
    for(int i=0;i<n;i++){
    	cin>>x;
    	nums.push_back(x);
    }
    int target;
    cin>>target;
    Solution obj;
    cout<<obj.search(nums,target);
} 