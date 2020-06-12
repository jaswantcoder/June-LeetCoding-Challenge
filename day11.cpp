class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,z=0,ones=0,twos=0;
        for(auto it:nums)
        {
            if(it==0)
                z++;
            else if(it==1) ones++;
            else twos++;
        }
        for(i=0;i<nums.size();i++)
        {
            if(z>0)
              {  nums[i]=0;z--;}
            else if(ones>0) {nums[i]=1;ones--;}
            else {nums[i]=2;twos--;}
        }
        return;
    }
};
