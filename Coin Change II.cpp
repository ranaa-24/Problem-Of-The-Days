// using codebix yt chennel approach

//recursion (TLE)

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        //recursion 
        int result = helper(amount, coins, 0); // 0 is the index
        return  result;
    }
    
private : 
    int helper(int amount, vector<int>& coins, int idx){
        if(amount == 0) return 1;
        if(amount < 0 || idx == coins.size()) return 0;

        int result = 0;
        for(int i=idx; i<coins.size(); i++){
             // consider- coins = {5,1}, and i is in 0th index and the amount is 2, its just not possible to get that amount
            if(amount >= coins[i]){ 
                result += helper(amount - coins[i],coins, i);   // index is starting from current 
            }
        }
        return result;
    }
};

// memonization

