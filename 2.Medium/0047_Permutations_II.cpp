class Solution {
int factorial (int n){
    int f =1;
    for(int i=2;i<=n;i++){
        f *=i;
    }
    return f;
}
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> v;
        for(int i =0;i<factorial(nums.size());i++){
            v.insert(nums);
            next_permutation(nums.begin(),nums.end());
        }
        vector<vector<int>> a(v.begin(),v.end());
       
        return a;
    }
};