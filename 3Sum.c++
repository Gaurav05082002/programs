class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> res;

        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue; // Skip duplicate values
            }
            
            int target = -nums[i];
            int lo = i + 1;
            int hi = n - 1;
            
            while (lo < hi) {
                int sum = nums[lo] + nums[hi];
                
                if (sum == target) {
                    res.push_back({nums[i], nums[lo], nums[hi]});
                    while (lo < hi && nums[lo] == nums[lo + 1]) lo++; // Skip duplicate values
                    while (lo < hi && nums[hi] == nums[hi - 1]) hi--; // Skip duplicate values
                    lo++;
                    hi--;
                } else if (sum < target) {
                    lo++;
                } else {
                    hi--;
                }
            }
        }

        return res;
    }
};
