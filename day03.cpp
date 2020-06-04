#define all(v) v.begin(),v.end()
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        auto abs_cmp = [] (vector<int> a,vector<int> b)
        {
            return a[1]-a[0]>b[1]-b[0];
        };
        int i, ans=0;
       int n=costs.size();
        sort(all(costs), abs_cmp);
        for(i=0;i<n;i++)
        {
            if(i<n/2)
                ans+=costs[i][0];
            else
                ans+=costs[i][1];
                
        }
        return ans;
        
        
    }
};
