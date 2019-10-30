class Solution {
public:
    int maxArea(vector<int>& height) {
        int right_ptr = height.size() - 1;
        int left_ptr = 0;
        int largest_container = 0;
        
        while(left_ptr < right_ptr)
        {
            if((right_ptr - left_ptr) * std::min(height[left_ptr], height[right_ptr]) > largest_container)
            {
                largest_container = (right_ptr - left_ptr) * std::min(height[left_ptr], height[right_ptr]);
            }
            if(height[left_ptr] > height[right_ptr])
            {
                right_ptr--;
            }
            else
            {
                left_ptr++;
            }
        }
        
        return largest_container;
    }
};
