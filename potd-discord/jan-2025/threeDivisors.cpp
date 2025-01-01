// source: https://leetcode.com/problems/three-divisors/
class Solution {
public:
    bool isThree(int n) {
        if(n<4) return false;
        int ans=sqrt(n);
        if(ans*ans != n) return false;

        // ans must be prime
        for(int i=2;i<=sqrt(ans);i++){
            if(ans%i==0) return false;
        }
        return true;
    }
};

