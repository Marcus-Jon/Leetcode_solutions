class Solution {
public:
    bool isPalindrome(int x) {
        bool is_pal;
        if(x < 0)
        {
            return false;
        }
        int y;
        int len = 1;
        int z = x;
        if(x > 0)
        {
            for(len = 0; z > 0; len++)
            {
                z = z/10;
            }
        }
        if(len == 1)
        {
            return true;
        }

        int pal_num[len];
        
        for(int i = 0; i < len; i++)
        {
            y = x % 10;
            pal_num[i] = y;
            x = x / 10;
        }
        
        int left_val = 0;
        int right_val = (len - 1);
        
        while(left_val < right_val)
        {
            if(pal_num[left_val] == pal_num[right_val])
            {
                is_pal = true;
            }
            else if(pal_num[left_val] != pal_num[right_val])
            {
                is_pal = false;
                break;
            }
            left_val++;
            right_val--;
        }
        
        return is_pal;
    }
};
