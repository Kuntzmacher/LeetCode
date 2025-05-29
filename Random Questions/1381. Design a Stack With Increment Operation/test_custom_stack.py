"""
a custom stack with an increment operation
"""

from CustomStack import CustomStack


class TestCustomStack:
    """testing"""

    def setup_method(self):
        """setup stack"""
        self.stack = CustomStack(3)

    def test_push(self):
        """test push"""
        self.stack.push(0)
        self.stack.push(1)
        self.stack.push(2)
        assert self.stack.stack == [0, 1, 2]
        assert self.stack.push(3) == -1
        assert self.stack.stack == [0, 1, 2]

    def test_pop(self):
        """test pop"""
        assert self.stack.pop() == -1
        self.stack.push(0)
        self.stack.push(1)
        self.stack.push(2)
        assert self.stack.pop() == 2
        assert self.stack.pop() == 1
        assert self.stack.pop() == 0
        assert self.stack.pop() == -1

    def test_increment(self):
        """test increment"""
        self.stack.push(0)
        self.stack.increment(1, 1)
        assert self.stack.stack == [1, -1, -1]
        self.stack.increment(3, 1)
        assert self.stack.stack == [2, -1, -1]
        self.stack.increment(3, 3)
        assert self.stack.stack == [5, -1, -1]
        self.stack.push(1)
        self.stack.increment(5, 2)
        assert self.stack.stack == [7, 3, -1]

    def test_stack(self):
        """testing the stack"""
        stack = CustomStack(3)
        stack.push(1)
        stack.push(2)
        assert stack.pop() == 2
        stack.push(2)
        stack.push(3)
        stack.push(4)
        stack.increment(5, 100)
        stack.increment(2, 100)
        assert stack.pop() == 103
        assert stack.pop() == 202
        assert stack.pop() == 201
        assert stack.pop() == -1
