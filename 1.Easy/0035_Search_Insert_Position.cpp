class Solution {
private:
    int binarySearch(vector<int> nums, int target ){
        int s =0, e = nums.size()-1;
        int mid = s + (e-s)/2;
        
        while(s<=e){
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) s = mid +1; 
            else e = mid -1;
            mid = s + (e - s)/2;
        }
        return -1;
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if(binarySearch(nums, target)== -1){
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            return binarySearch(nums,target);
        }
        else return binarySearch(nums,target);
    }
};