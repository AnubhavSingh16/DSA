class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int reach = 0;
        for(int i = 0 ;i < nums.size() ;i++){
            if(reach<i){
                return false;
            }
            reach = max(reach,i+nums[i]);
        }
        return true;
    }
};