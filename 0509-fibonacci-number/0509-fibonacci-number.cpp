#define vvi vector<vector<int>>
class Solution {
public:
    vvi mul(vvi &A, vvi &B){
        vvi C(2,vector<int>(2,0));
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                for(int k=0;k<2;k++){
                    C[i][j] += A[i][k]*B[k][j];
                }
            }
        }
        return C;
    }
    vvi power(vvi a, int n){
        vvi res = {{1,0},{0,1}};
        while(n){
            if(n&1) res = mul(res,a);
            a = mul(a,a);
            n>>=1;
        }
        return res;
    }
    int fib(int n) {
        if(n==0) return 0;
        vvi T = {{1,1},{1,0}};
        vvi res = power(T,n-1);
        return res[0][0];
    }
};