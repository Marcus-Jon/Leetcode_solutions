class Solution(object):
    def longestPalindrome(self, s):

        string_list = map(str, str(s))
        print string_list
        current_longest = 0

        for i in range(0, len(string_list)):
            longest_string = ''
            longest_list = []
            found = False
            sv = string_list[i]
            sv_value = i
            for j in range((i + 1), len(string_list)):
                if string_list[j] == sv:
                    end_pos = j
                    break
            while found == False:
                for x in range(sv_value, (end_pos + 1)):
                    longest_list.append(string_list[x])
                print longest_list
                start_pos_long = 0
                end_pos_long = (len(longest_list) - 1)

                while found == False:
                    if start_pos_long == end_pos_long:
                        current_longest = len(longest_list)
                        found = True
                    elif longest_list[start_pos_long] == longest_list[end_pos_long]:
                        start_pos_long += 1
                        end_pos_long -= 1
                    else:
                        break

#-------------------------------------------------------------------------------
# Second Atttempt
class Solution(object):
    def longestPalindrome(self, s):

        string_list = map(str, str(s))
        print string_list

        longest = 0
        longest_string = ''

        def expand_around_center(l, r):
            left_pointer = l
            right_pointer = r

            while left_pointer >= 0 and right_pointer < len(string_list) and string_list[left_pointer] == string_list[right_pointer]:
                left_pointer -= 1
                right_pointer += 1
            if right_pointer - left_pointer - 1 > longest:
                longest = right_pointer - left_pointer - 1
                longest_string = string_list[left_pointer + 1:right_pointer]
