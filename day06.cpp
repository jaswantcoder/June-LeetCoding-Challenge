#define fi first 
#define se second
#define all(v) v.begin(),v.end()
#define mp make_pair

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& v) {
        int i,n=v.size();
        sort(all(v), [] (vector<int> v1, vector<int> v2) { return v1[0]<v2[0] || (v1[0]==v2[0] && v1[1]>v2[1]); });
        reverse(all(v));
        
        list<pair<int,int>> l;
        list<pair<int,int>> :: iterator it=l.begin();
        for(i=0;i<n;i++)
        {
                 it = l.begin();
            advance(it,v[i][1]);
            l.insert(it,mp(v[i][0],v[i][1]));
        }
    it=l.begin();
        for(i=0;i<n;i++)
        {
            v[i][0]=(*it).fi;
            v[i][1] = (*it).se;
            it++;
        }
        return v;
   
        
    }
};
