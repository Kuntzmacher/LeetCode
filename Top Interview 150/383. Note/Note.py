note = input("")
magazine = input("")

class Solution(object):
    def canConstruct(self, note, magazine):

        note_dict = make_dict(note)
        mag_dict = make_dict(magazine)

        for key in note_dict.keys():
            # print(key, note_dict[key], mag_dict[key], note_dict[key] < mag_dict[key])
            if key not in mag_dict:
                print("false")
                return False
            if note_dict[key] > mag_dict[key]:
                print("false")
                return False

        print("true")
        return True



def make_dict(string):

    dictionary = { }

    for letter in string:
        if letter not in dictionary:
            dictionary[letter] = 0
        dictionary[letter] += 1

    return dictionary


sol = Solution()
sol.canConstruct(note, magazine)
