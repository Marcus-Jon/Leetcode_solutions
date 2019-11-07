class Solution {
public:
    string intToRoman(int num) {
        int mult = 1;
        int len = 1;
        int tmp = num;
        string result = "";
        
        int ints[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string roman[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        if(num > 0)
        {
            for (len = 0; tmp > 0; len++)
            {
                tmp = tmp/10;
            }
        }

        int arr[len] = {};

        for(int i = (len - 1); i >= 0; i--)
        {
            tmp = num % 10;
            tmp = tmp * mult;
            mult = mult * 10;

            arr[i] = tmp;

            num = num / 10;
        }

        for(int i = 0; i < len; i++)
        {
            while(arr[i] != 0)
            {
                for(int j = 0; j < 13; j++)
                {
                    if(arr[i] == 0)
                    {
                        break;
                    }
                    if(arr[i] >= ints[j])
                    {
                        result = result + roman[j];
                        arr[i] = arr[i] - ints[j];
                        j = -1;
                    }
                }
            }
        }

        return result;

    }
};
