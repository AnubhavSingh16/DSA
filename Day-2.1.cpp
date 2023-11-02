/* 
    169. Majority Element
    
    INTUTUION - 
    
    (Method-1) Simply find max freq element and return it, as it is mentioned that there
    is atleast 1 majority element.

    (Method-2) using map, if map.second> n/2 --> return map.first. 
*/



class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int count = 0;
        int max = 0;
        int ans;

        if( (nums.size() == 1 ) || (nums.size() == 2)){
            ans = nums[0];
            return ans;
        }
        
        for(int i = 0 ; i < nums.size() ; i ++){
            if(nums[i] == nums[i+1]){
                count++;
            }
            else if(nums[i] != nums[i+1]){
                if(count > max){
                    max = count;
                    ans = nums[i];
                }
                count = 0;
            }
        }
        return ans;   
    }
};


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        n = n/2;
        for(auto x: m){
            if(x.second > n){
                return x.first;
            }
        }
        return 0;
    }
};