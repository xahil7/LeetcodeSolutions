class Solution {
public:
    bool isPalindrome(int x) {
        long long int n = x;
        long long int rev = 0;
        if(n<0){
            return false;
        }
        while(n>0){
            long long int digit = n%10;
            rev = rev*10 + digit;
            n /=10;
        }
        if(rev == x){
            return true;
        }
        return false;
    }
};