
class Solution {
  public:
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        int ans=0;
       for(int i=1;i<prices.size();i++){
           ans=ans+max(0,prices[i]-prices[i-1]);
       }
       return ans;
    }
};