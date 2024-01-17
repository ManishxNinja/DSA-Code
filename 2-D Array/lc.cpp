class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int lastd = INT_MIN;
        int i = 0;
        for(int j = 0;j<nums.size()-1;j++){
            if(nums[j] == nums[j+1] && nums[j] != lastd){
                lastd = nums[j];
                nums[i] = nums[j];
                j = j+1;
                i++;

                 
            }
            else{
                if(nums[j] != lastd){
                    nums[i] = nums[j];
                    i++;
                }
                j++;
            }

        }
        if(nums[nums.size()-1] != lastd) 
        {
            nums[i] = nums[nums.size()-1];
        }
        return i+1;
        
        
        
    }
};