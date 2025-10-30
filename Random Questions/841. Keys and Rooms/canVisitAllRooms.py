class Solution:
    def canVisitAllRooms(self, rooms):
        """
        :type rooms: List[List[int]]
        :rtype: bool
        """

        keys = [0] * len(rooms)
        keys[0] = 1

        while 1 in keys:

            for i in range(len(rooms)):

                if keys[i] == 1:

                    keys[i] = -1

                    for j in rooms[i]:

                        if keys[j] == 0:
                            keys[j] = 1

        if 0 in keys:
            return False
        else:
            return True
