class Solution {
public:
    int maxProduct(int n) {
        int ma = 0 ;
        int mi = 0 ;
        while(n > 0){
            int digit = n % 10;
            if(digit > ma){
                mi = ma;
                ma = digit;
            }else if (digit >  mi){
                mi = digit;
            }
            n/=10;
        }
        return ma * mi;
    }
};