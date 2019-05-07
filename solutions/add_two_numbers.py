# Definition for singly-linked list.
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        x = []
        y = []

        x_val = l1
        y_val = l2

        while x_val != None:
            x.append(x_val.val)
            x_val = x_val.next
        while y_val != None:
            y.append(y_val.val)
            y_val = y_val.next
        x.reverse()
        y.reverse()

        x = int(''.join(map(str, x)))
        y = int(''.join(map(str, y)))

        total = x + y
        list = map(int, str(total))

        list.reverse()

        l3 = None

        for i in range(0, len(list)):
            new_node = ListNode(list[i])
            if l3 == None:
                l3 = new_node
                current = l3
            elif current.next == None:
                current.next = new_node
            current = new_node

        return l3
