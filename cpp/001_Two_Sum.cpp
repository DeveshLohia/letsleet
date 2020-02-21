class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;

        unordered_map<int,int> map;

        int n = nums.size();

        for(int i=0; i<n; i++)
        {
            unordered_map<int, int>::const_iterator it =  map.find(nums[i]);

                if(it != map.end())
                {
                    ans.push_back((it)->second);
                    ans.push_back(i);
                    return ans;
                }

            map[target - nums[i]] = i;
          
        }
        
        return ans;
    }
};