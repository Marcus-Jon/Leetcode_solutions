class Solution(object):
    def lengthOfLongestSubstring(self, s):

        start = 0
        highest = 0
        last_highest = 1
        string_list = map(str, str(s))

        if s == '':
            return 0

        for i in range(1, len(string_list)):
            for u in range(start, i):
                if string_list[i] == string_list[u]:
                    if last_highest > highest:
                        highest = last_highest
                    last_highest = 0
                    start = u + 1

            last_highest = i + 1 - start

        if highest == 0:
            highest = last_highest
        elif last_highest > highest:
            highest = last_highest

        return highest
