# works

"""group anagrams"""


class Solution:
    """solution"""

    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """

        anagram_map = {}

        for s in strs:
            key = "".join(sorted(s))
            if key in anagram_map:
                anagram_map[key].append(s)
            else:
                anagram_map[key] = [s]

        return list(anagram_map.values())

        # strs_sort = []
        # for string in strs:
        #     strs_sort.append("".join(sorted(string)))
        #
        # out = [[]]
        # count = 0
        #
        # while strs:
        #     for index, _ in enumerate(reversed(strs)):
        #         string = strs_sort[index]
        #         if string == strs_sort[index]:
        #             out[count].append(strs[len(strs) - index - 1])
        #             strs.pop(len(strs) - index - 1)
        #
        # return out
