class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
         for( int i = 0; i < n; i++)
         {
            if( nums[i] > nums [(i+1)%n])
            {
                count++;
            }
         }
         return count<=1;
    }
};



OR 

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] > nums[i]){
                cnt++;
            }
        }
        if(nums[n-1] > nums[0]) 
        cnt++;
        return cnt<=1;
    }
};