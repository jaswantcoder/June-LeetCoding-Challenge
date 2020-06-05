class Solution {
public:
    void reverseString(vector<char>& s) {
        char x;
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            x=s[i];
            s[i]=s[n-i-1];
          //  cout<<s[i];
            s[n-1-i]=x;
        }
        return ;
        
    }
};
