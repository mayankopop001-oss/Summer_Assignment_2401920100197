class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp,j;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                 j=i;
                break;
            }
        }
            for(int i=j+1;i<nums.size();i++)
            {
                if(nums[i]!=0)
                {
                    temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    j++;
                }

            }
        
        
    }
};