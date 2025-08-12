class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        auto it = max_element(nums.begin(), nums.end());
        int maxele = *it;
        vector<int> hasharr(maxele+2, 0);
        vector<int> result;

        for(int i=0; i<nums.size(); i++)
        {
            hasharr[nums[i]]++;
        }
        for (int i = 0; i <= maxele; i++) {
            if (hasharr[i] == 1) {
                bool leftEmpty  = (i == 0) || (hasharr[i-1] == 0);
                bool rightEmpty = (i == maxele) || (hasharr[i+1] == 0);
                if (leftEmpty && rightEmpty)
                    result.push_back(i);
            }
        }
        return result;
    }
};