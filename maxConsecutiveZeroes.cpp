class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt=0;
        int maxi=-1;
        
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                maxi=max(maxi,cnt);
                cnt=0;
            }
        }
        maxi=max(maxi,cnt);
        return maxi;
    }
};
