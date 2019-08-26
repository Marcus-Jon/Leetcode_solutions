class Solution {
public:
    int myAtoi(string str) {
        cout << str << endl;
        cout << str.length() << endl;
        
        if(str = '')
        {
            return 0;
        }
        
        string num_str;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] >= '0' && str[i] <= '9')
            {
                num_str += str[i];
            }
        }
        
        int x = 0;
        for(int i = 0; i < num_str.length(); i++)
        {
            x *= 10;
            x = x + (num_str[i] - '0');

        }
        return x;
    }
};
