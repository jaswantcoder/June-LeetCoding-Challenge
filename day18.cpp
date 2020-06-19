class Solution {
public:
    int hIndex(vector<int>& citations) {
        int i, n=citations.size();
      for(i=0;i<n;i++){
        if(n-i<=citations[i])
            return n-i;
      }
        return 0;
        
    }
};
