"""test group anagrams"""

from group_anagrams import Solution


def test_1():
    """test"""
    strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
    expected = [["bat"], ["nat", "tan"], ["ate", "eat", "tea"]]
    sol = Solution()
    result = sol.groupAnagrams(strs)

    sorted_expected = sorted([sorted(group) for group in expected])
    sorted_result = sorted([sorted(group) for group in result])

    assert sorted_expected == sorted_result


def test_2():
    """test"""
    strs = [""]
    out = [[""]]
    sol = Solution()
    assert sol.groupAnagrams(strs) == out


def test_3():
    """test"""
    strs = ["a"]
    out = [["a"]]
    sol = Solution()
    assert sol.groupAnagrams(strs) == out
