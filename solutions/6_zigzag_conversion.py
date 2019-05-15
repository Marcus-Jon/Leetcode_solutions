class Solution(object):
    def convert(self, string, n):
        
        s = map(str, str(string))
        #s.pop(len(string) - 1)
        
        if len(s) == 1:
            return s[0]
        
        a = []
        b = []
        
        for i in range(0, n):
            a.append([''] * len(s))
                    
        x, i, j = 0, 0, 0
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

        for i in range(0, len(a)):
            for j in range(0, len(a[0])):
                if a[i][j] != '':
                    b.append(a[i][j])

        c = ''.join(b)
        
        return c
