class SolutionBruteForce {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0 ; i < nums.size(); i++)
        {
            for(int j = 1; j < nums.size(); j++)
            {
                if (nums[i]+nums[j]==target)
                    return {i,j};
            }
        }
        return {};
    }
};

class SolutionTwoPass{
    public:
    vector<int>twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> hash;
    for(int i = 0; i< nums.size(); i++)
    {
        hash[nums[i]] = i;
    }

    for(int i = 0; i< nums.size(); i++)
    {
        int comp = target - nums[i];
        if (hash.find(comp) != hash.end() && hash[comp] != i)
        {
            return {i, hash[comp]};
        }
    }
    return {};
}
};

class Solution{
    public:
    vector<int>twoSum(vector<int>& nums, int target)
{
    unordered_map<int, int> hash;
    for(int i = 0; i< nums.size(); i++)
    {
        int comp = target - nums[i];

        if( hash.find(comp) != hash.end())
        {
            return {i, hash[comp]};
        }

        hash[nums[i]] = i;
    }

    return {};
}
};
