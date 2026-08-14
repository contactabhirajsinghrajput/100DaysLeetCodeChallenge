class Solution {
public:
    int fib(int n) {
        if(n==0)return 0;
        if(n==1)return 1;

        int p2=0;
        int p1=1;
        int curr=0;

        for(int i=2;i<=n;i++){
            curr=p1+p2; //f(n)=f(n-1)+f(n-2)
            p2=p1;
            p1=curr;
        }
        return curr;
    }

};