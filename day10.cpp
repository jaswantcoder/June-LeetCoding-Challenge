class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0,m,j=nums.size()-1;
        while(i<=j)
        {
               m=i+(j-i)/2;
            if(nums[m]==target)
            {
                return m;
            }
           
            if(nums[m]<target)
            {
                i=m+1;
            }
            else j=m-1;
            
        }
       
   
       if(i>m) return i;
        return m;
        
    }
};
