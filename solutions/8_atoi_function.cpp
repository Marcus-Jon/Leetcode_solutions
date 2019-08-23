class Solution {
public:
    int myAtoi(string str) {
        cout << str << endl;
        cout << str.length() << endl;

        int x = 0;
        for(int i = 0; i < str.length(); i++)
        {
            x *= 10;
            x = x + (str[i] - '0');

        }
        return x;
    }
};
