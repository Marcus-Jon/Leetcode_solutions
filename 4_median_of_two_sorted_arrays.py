class Solution(object):
    def findMedianSortedArrays(self, n, m):

        if len(m) < len(n):
            n, m = m, n

        start = 0
        end = (len(n))

        while start <= end:

            part_n = (start + end) / 2
            part_m = ((len(n) + len(m) + 1) / 2) - part_n

            if part_n < len(n) and m[part_m - 1] > n[part_n]:
                start = part_n + 1

            elif part_n > 0 and n[part_n - 1] > m[part_m]:
                end = part_n - 1

            else:
                if part_n == 0:
                    left = m[part_m - 1]
                elif part_m == 0:
                    left = n[part_n - 1]
                else:
                    left = max(n[part_n - 1], m[part_m - 1])
                
                if (len(n) + len(m)) % 2 != 0:
                    return left
                                
                if part_n == len(n):
                    right = m[part_m]
                elif part_m == len(m):
                    right = n[part_n]
                else:
                    right = min(n[part_n], m[part_m])

                return ((left + right) * 1.0) / 2
