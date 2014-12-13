

class MinStack:
    _stack = None
    _min_idxs = None

    def __init__(self):
        self._stack = []
        self._min_idxs = []

    # @param x, an integer
    # @return an integer
    def push(self, x):
        self._stack.append(x)
        if not self._min_idxs or self._stack[self._min_idxs[-1]] > x:
            self._min_idxs.append(len(self._stack)-1)


    # @return nothing
    def pop(self):
        if self._min_idxs and self._min_idxs[-1] == len(self._stack) - 1:
            self._min_idxs.pop()
        self._stack.pop()


    # @return an integer
    def top(self):
        if not self._stack:
            return None
        return self._stack[-1]

    # @return an integer
    def getMin(self):
        if not self._stack:
            return None
        return self._stack[self._min_idxs[-1]]



def main():
    stack = MinStack()

    stack.push(-1)
    print stack.getMin()
    print stack.top()
    stack.push(50)
    stack.push(4)
    stack.push(-4)
    print stack.getMin()
    print stack.top()
    stack.pop()
    stack.pop()
    print stack.getMin()
    stack.pop()
    stack.pop()
    print stack.getMin()

if __name__ == '__main__':
    main()
