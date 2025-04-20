class Solution(object):
    def expressiveWords(self, s, words):

        num = 0
        is_stretchy = False

        for word in words:
            for index, _ in enumerate(word):
                if ( word[index] == s[index] ): continue
                elif ( word[index-1] = s[index] ): continue

            if is_stretchy: num += 1
            is_stretchy = False

        return num


s = input()
words = input()

words = words.split(',')

sol = Solution()
num = sol.expressiveWords(s, words)

print(num)
