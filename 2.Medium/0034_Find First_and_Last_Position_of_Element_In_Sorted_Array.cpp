class Solution {
private:
    int firstOcc(vector<int> nums, int target){
        int i = 0, k = nums.size()-1;
        int mid = i + (k-i)/2;
        
        int ans = -1;
        while(i<=k){
            if(nums[mid]<target){
                i = mid+1;
            }
            else if(nums[mid]==target){
                k= mid-1;
                ans = mid;
            }
            else {
                k = mid-1;
            }
            mid = i + (k-i)/2; 
        }
        return ans;
    }
    
    
    int lastOcc(vector<int> nums, int target){
        int i = 0, k = nums.size()-1;
        int mid = i + (k-i)/2;
        
        int ans = -1;
        while(i<=k){
            if(nums[mid]==target){
                i = mid+1;
                ans = mid;
            }
            else if(nums[mid]>target) k= mid-1;
            else {
                i = mid +1;
            }
            mid = i + (k-i)/2;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        if(firstOcc(nums,target)==-1 && lastOcc(nums,target)==-1){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        else{
            ans.push_back(firstOcc(nums,target));
            ans.push_back(lastOcc(nums,target));
        }
        
        return ans;
    }
};