class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans;
        int start = 0;
        int highest = 0;
        int last_highest = 1;
        
        int len;
        len = s.length();
        
        if (len == 0)
        {return 0;}
        
        char char_array[len];
        for (int i = 0; i < len; i++)
        {
            char_array[i] = s[i];
        }
        
        for(int i = 1; i < len; i++)
        {
            for(int u = start; u < i; u++)
            {
                if(char_array[i] == char_array[u])
                {
                    if(last_highest > highest)
                    {
                        highest = last_highest;
                    }
                    last_highest = 0;
                    start = u + 1;
                }
            }
            last_highest = i + 1 - start;
        }
        
        if(highest == 0)
        {
            highest = last_highest;
        }
        if(last_highest > highest)
        {
            highest = last_highest;
        }
        
        return highest;
    }
};
