# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None
class Stack:

    def __init__(self):
        self.stack = []

    def push(self, val):
        self.stack.append(val)

    def pop(self):
        return self.stack.pop()

    def top(self):
        return self.stack[-1]

    def empty(self):
        if len(self.stack) == 0:
            return 1
        else:
            return 0

    def depth(self) -> int:
        return len(self.stack)


class Solution:
    def reverseKGroup(self, head: ListNode, k: int) -> ListNode:

        if k == 1:
            return head

        p = ListNode()
        h = ListNode()
        stack = Stack()
        fh = False

        while head != None:
            for i in range(0, k):
                stack.push(head)
                head = head.next
            if stack.depth() < k:
                break
            top = stack.top()
            while not stack.empty():
                p.next = stack.pop()
                p = p.next
                if not fh:
                    h.next = p
                    fh = True
            p.next = top
            p = p.next

        return h.next

