class Solution {
public:
    int myAtoi(string str) {
        cout << str << endl;
        cout << str.length() << endl;

        if(str.length() == 0)
        { // return 0 if the length of the string is zero.
            return 0;
        }

        string num_str; // create new string for the numbers.
        for(int i = 0; i < str.length(); i++)
        {   
            if(str[i] == ' ')
            {
                if(num_str.length() != 0)
                {
                    i = str.length();
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

        int x = 0;
        // convert the number string to integers.
        for(int i = 0; i < num_str.length(); i++)
        {
            x *= 10;
            x = x + (num_str[i] - '0');

        }
        return x;
    }
};
