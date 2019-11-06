// work in progress
class Solution {
public:
    string intToRoman(int num) {
        int mult = 1;
        int len = 1;
        int tmp = num;
        string result = "";
        /*
        int conv[13] = {{1000, "M"},
                      {900, "CM"},
                      {500, "D"},
                      {400, "CD"},
                      {100, "C"},
                      {90, "XC"},
                      {50, "L"},
                      {40, "XL"},
                      {10, "X"},
                      {9, "IX"},
                      {5, "V"},
                      {4, "IV"},
                      {1, "I"}};
        */
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
        

        
        return result;
        
    }
};
