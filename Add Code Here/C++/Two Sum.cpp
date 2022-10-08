class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> v;
        int start = 0;
        int end = nums.size()-1;

        for(int i=0; i<nums.size(); i++){
            
            int j=i+1;
            while(j<nums.size()){
                
                if(nums[i] + nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
                j++;
            }
        }
        return v;
    }
};
