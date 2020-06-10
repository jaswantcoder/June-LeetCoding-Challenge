class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n=s.size(),m=t.size(),i,j;
        s=" "+s;
        t=" "+t;
        vector<vector<int>> a(n+1,vector<int>(m+1,0));
        for(i=0;i<=n;i++)
        a[i][0]=0;
        for(i=0;i<=m;i++)
            a[0][i]=0;
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            {
                if(s[i]==t[j])
                {
                    a[i][j]=1+a[i-1][j-1];
                }
                else
                {
                    a[i][j]=max(a[i][j-1],a[i-1][j]);
            }
            }
        if(a[n][m]==n)
            return true;
        return false;
        
    }
};
