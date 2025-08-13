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

        for(int num : nums)
        {
            if(hasharr[num]==1)
            {
                if(num==0)
                {
                    if(hasharr[num+1]==0)
                        result.push_back(num);
                }
                else if(hasharr[num-1]==0 && hasharr[num+1]==0)
                    result.push_back(num);
            }
            
        }
        return result;
    }
};