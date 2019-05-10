class Solution(object):
    def longestPalindrome(self, s):
           
        string_list = map(str, str(s))
        
        self.longest = 0
        self.longest_string = ''
        
        def center(l, r):
            left_pointer = l
            right_pointer = r
            
            while left_pointer >= 0 and right_pointer < len(string_list) and string_list[left_pointer] == string_list[right_pointer]:
                left_pointer -= 1
                right_pointer += 1
            if right_pointer - left_pointer - 1 > self.longest:
                self.longest = right_pointer - left_pointer - 1
                self.longest_string = string_list[left_pointer + 1:right_pointer]
        
        for i in range(0, len(string_list)):
            center(i, i)
            center(i, i + 1)
        
        self.longest_string = ''.join(map(str, self.longest_string))
        return self.longest_string
   
