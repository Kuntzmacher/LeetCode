# works
"""report spam"""


class Solution:
    """solution"""

    def reportSpam(self, message, bannedWords):
        """
        :type message: List[str]
        :type bannedWords: List[str]
        :rtype: bool:
        """

        bannedWords = set(bannedWords)
        count = 0
        for word in message:
            if word in bannedWords:
                count += 1
                if count >= 2:
                    return True

        return False
