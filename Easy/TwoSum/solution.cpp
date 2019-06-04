class Solution 
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            vector<int> result;
    
            for(int i = 0; i < (int)(nums.size()); i++)
            {
                for(int j = i + 1; j < (int)(nums.size()); j++)
                {
                    if(nums[i] + nums[j] == target)
                    {
                        result.push_back(i);
                        result.push_back(j);
                
                        i = (int)(nums.size());
                        j = (int)(nums.size());
                    }  
                }
            }
        
            return result;
            
            }
};
