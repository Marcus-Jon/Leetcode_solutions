class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        length = len(s)
        ans = []
        
        num = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        rom = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]
        
        i = 0
        while i != (length):
            for j in range(0, 13):
                if rom[j] == s[i]:
                    if rom[j] == "I" or rom[j] == "X" or rom[j] == "C":
                        if i != (length - 1) and rom[j - 2] == s[i + 1]:
                            ans.append(num[j - 1])
                            i += 1
                        elif i != (length - 1) and rom[j - 4] == s[i + 1]:
                            ans.append(num[j - 3])
                            i += 1
                        else:
                            ans.append(num[j])
                    else:
                        ans.append(num[j])
            i += 1
        
        ans_num = 0
        for i in range(0, (len(ans))):
            ans_num += ans[i]
        
        return ans_num
