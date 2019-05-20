class Solution(object):
    def reverse(self, n):
        if n > (2 ** 31 - 1) or n < (-2 ** 31):
            return 0
        neg = False
        if n < 0:
            m = map(str, str(n))
            m.remove('-')
            n = ''.join(m)
            n = int(n)
            neg = True

        r = 0
        while n > 0:
            r *= 10
            r += n % 10
            n /= 10
        
        if r > (2 ** 31 - 1) or r < (-2 ** 31):
            return 0
        elif neg == True:
            return (r * -1)
        else:
            return r
