class Solution(object):
    def convert(self, string, n):
        
        s = map(str, str(string))
        s.pop(len(string) - 1)
        print s
        print n
        
        a = []
        for i in range(0, n):
            a.append(['-'] * (len(s) / 2))
        
        x = 0
        i = 0
        j = 0
        while i != len(a[0]) and x != len(s):
            while j != n and x != len(s):
                a[j][i] = s[x]
                j += 1
                x += 1
            i += 1
            j -= 2
            while j > 0 and x != len(s):
                a[j][i] = s[x]
                j -= 1
                x += 1
                i += 1
            j = 0
                
        print a[0]
        print a[1]
        print a[2]
