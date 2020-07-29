class Stack:

    def __init__(self):
        self.stack = []

    def push(self, val):
        self.stack.append(val)

    def pop(self):
        return self.stack.pop()

    def top(self):
        return self.stack[-1]


if __name__ == '__main__':
    stack = Stack()

    stack.push(1)
    stack.push(2)
    print(stack.top())
    print(stack.pop())
    print(stack.top())
    print(stack.pop())