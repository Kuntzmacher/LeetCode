"""tests"""

from report_spam import Solution


def test1():
    """test1"""
    message = ["hello", "world", "leetcode"]
    bannedWords = ["world", "hello"]
    sol = Solution()
    assert sol.reportSpam(message, bannedWords)


def test2():
    """test2"""
    message = ["hello", "programming", "fun"]
    bannedWords = ["world", "programming", "leetcode"]
    sol = Solution()
    assert not sol.reportSpam(message, bannedWords)


def test3():
    """test2"""
    message = ["s", "a", "aj", "ps", "h", "ou", "e", "i", "x"]
    bannedWords = ["j", "a", "b", "fa", "z", "a", "no", "ih", "nq"]
    sol = Solution()
    assert not sol.reportSpam(message, bannedWords)
