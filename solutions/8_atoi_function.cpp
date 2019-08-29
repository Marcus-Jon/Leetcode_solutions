class Solution {
public:
    double myAtoi(string str) {
        int sign = 1;

        if(str.length() == 0)
        {
            return 0;
        }

        string num_str;
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == ' ')
            {
                if(num_str.length() != 0)
                {
                    i = str.length();
                }
            }
            else if(str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
            {
                if(i > 0)
                {
                    if((str[i - 1] >= '0' && str[i - 1] <= '9'))
                    {
                        i = str.length();
                    }
                }
                sign = -1;
            }
            else if(str[i] == '+' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
            {
                if(i > 0)
                {
                    if((str[i - 1] >= '0' && str[i - 1] <= '9'))
                    {
                        i = str.length();
                    }
                }
            }
            else if(str[i] >= '0' && str[i] <= '9')
            {
                num_str += str[i];
            }
            else
            {
                if(num_str.length() == 0)
                {
                    return 0;
                }
                else
                {
                    i = str.length();
                }
            }
        }

        double x = 0;
        for(int i = 0; i < num_str.length(); i++)
        {
            x *= 10;
            x = x + (num_str[i] - '0');

        }
        if(sign == 1)
        {
            if(x > INT_MAX)
            {
                return INT_MAX;
            }
            else
            {
                return x;    
            }
        }
        else
        {
            x *= -1;
            if(x < INT_MIN)
            {
                return INT_MIN;
            }
            else
            {
                return (x);
            }
        }
    }
};
