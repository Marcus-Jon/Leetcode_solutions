class Solution(object):
    def longestPalindrome(self, s):
           
        string_list = map(str, str(s))
        print string_list
        longest = 'x'
        found = False
        
        for i in range(0, len(string_list)):
            sv = string_list[i]
            for j in range((i + 1), len(string_list)):
                if string_list[j] == sv:
                    end_pos = j
            while found = False:
                
            print sv
            print end_pos
        
