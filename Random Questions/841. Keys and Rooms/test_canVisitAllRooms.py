from canVisitAllRooms import Solution


def test_one():
    rooms = [[1], [2], [3], []]
    sol = Solution()
    assert True == sol.canVisitAllRooms(rooms)


def test_two():
    rooms = [[1,3], [3,0,1], [2], [0]]
    sol = Solution()
    assert False == sol.canVisitAllRooms(rooms)


def test_three():
    rooms = [[4,1,3],[],[2,3],[1,4],[2]]
    sol = Solution()
    assert True == sol.canVisitAllRooms(rooms)
