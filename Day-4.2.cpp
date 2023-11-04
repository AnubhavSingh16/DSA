
/*
238. Product of Array Except Self
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans;
        long long int sum = 1;
        long long x;
        int count = 0;
        
        if(nums.size() == 2){
            ans.push_back(nums[1]);
            ans.push_back(nums[0]);
            return ans;
        }
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0){
                count++;
            }
            if(nums[i] != 0){
                sum = sum*nums[i];
            }
        }
         
        for(int i = 0 ; i < nums.size() ; i ++){
            
            if(count == 0){
                x = sum/nums[i];
                ans.push_back(x); 
            }
            else if(count == 1){
                if(nums[i] != 0){
                    ans.push_back(0);
                }
                else{
                    ans.push_back(sum);
                }
            }
            else if(count > 1){
                ans.push_back(0);
            }
        }
        return ans;
    }
};