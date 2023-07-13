
class Solution{
    public:
    //You need to complete this fucntion
    int mod = 1e9 + 7;
    long long power(int N,int R)
    {
        if(R == 0)
            return 1;
        long long base = power(N, R/2) % mod;  
        if(R%2 == 0)
            return (base*base) % mod;
        else
            return (N * ((base*base)%mod) % mod);
    }

};