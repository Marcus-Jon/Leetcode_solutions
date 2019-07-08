class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x = 0;
        bool end = false;
        int num_size = nums.size();
        int current;
        std::vector<int> vec_of_ans;
        
        while (!end)
        {
            for (int i = 0; i < num_size; i++)
            {
                current = nums[i];
                for (int j = i + 1; j < num_size; j++)
                    if ((current + nums[j]) == target)
                    {
                        end = true;
                        
                        vec_of_ans.push_back(i);
                        vec_of_ans.push_back(j);
                    }
            }
        }
        return vec_of_ans;
    }
};
