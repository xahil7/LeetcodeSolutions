class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i =0;
        int k =0;
        while(i<nums1.size() && k<nums2.size()){
            if(nums1[i]<nums2[k]) v.push_back(nums1[i++]);
            else v.push_back(nums2[k++]);
        }
        while(i<nums1.size()) v.push_back(nums1[i++]);
        while(k<nums2.size()) v.push_back(nums2[k++]);
        double ans = -1;
        int mid = (0 + v.size()-1)/2;
        if(v.size()%2==1){
            ans = v[mid];
        }
        else {
            ans = (double(v[mid]) + double(v[mid+1]))/2;
        }
        return ans;
    }
};