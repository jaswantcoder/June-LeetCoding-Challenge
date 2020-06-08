#define fastIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 

class Solution {
public:
    int change(int amount, vector<int>& coins) {
	fastIO;
     
        vector<int> dp(amount+1,0);
        dp[0]=1;
        for(auto it:coins)
        {
            for(int i=it;i<=amount;i++)
            {
                dp[i]+=dp[i-it];
            }
        }
        return dp[amount];
        
    }
};
