class Solution {
int factorial (int n){
    int f =1;
    for(int i=2;i<=n;i++){
        f *=i;
    }
    return f;
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        for(int i =0;i<factorial(nums.size());i++){
            v.push_back(nums);
            next_permutation(nums.begin(),nums.end());
        }
        return v;
    }
};