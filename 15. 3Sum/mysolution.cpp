class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> results;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum < 0)
                    j++;
                else if(sum > 0)
                    k--;
                else{
                    results.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(nums[j]==nums[j-1] && j<k)
                        j++;

                }

            }


        }
        return results;
    }
};
