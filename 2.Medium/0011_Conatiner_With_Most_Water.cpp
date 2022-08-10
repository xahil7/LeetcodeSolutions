class Solution {
public:
    int maxArea(vector<int>& nums) {
        int s =0,e = nums.size()-1;
        long long int max_area = (nums.size()-1) * min(nums[s], nums[e]);
        int i =1;
        if(nums.size()==2){
            return max_area;
        }
        while(s<e){
            if(nums[s]<nums[e]){
                s++;
                long long int area = (e-s) * min(nums[s], nums[e]) ;
                if(max_area< area){
                    max_area = area;
                }
            }
            else{
                e--;
                long long int area = (e-s) * min(nums[s], nums[e]) ;
                if(max_area< area ){
                    max_area =  (e-s) * min(nums[s], nums[e]) ;
                }
            }
            
        }
        return max_area;
    }
};