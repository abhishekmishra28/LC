#define ll long long
#define vvi vector<vector<ll>>

class Solution {
public:
    vvi mul(vvi &a, vvi &b){
        vvi C(2,vector<ll>(2,0));
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                for(int k=0;k<2;k++){
                    C[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        return C;
    }

    vvi power(vvi a,int n){
        vvi res = {{1,0},{0,1}};
        while(n){
            if(n&1){
                res = mul(res,a);
            }
            a = mul(a,a);
            n>>=1;
        }
        return res;
    }

    int climbStairs(int n) {
        if(n==0) return 1;

        vvi T = {{1,1},{1,0}};
        vvi res = power(T,n);

        return (int)res[0][0];
    }
};