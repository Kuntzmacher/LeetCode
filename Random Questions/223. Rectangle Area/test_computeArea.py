from computeArea import Solution


def test_1():
    ax1 = -3
    ay1 = 0
    ax2 = 3
    ay2 = 4
    bx1 = 0
    by1 = -1
    bx2 = 9
    by2 = 2
    sol = Solution()
    assert 45 == sol.computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2)


def test_2():
    ax1 = -2
    ay1 = -2
    ax2 = 2
    ay2 = 2
    bx1 = -2
    by1 = -2
    bx2 = 2
    by2 = 2
    sol = Solution()
    assert 16 == sol.computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2)


def test_3():
    ax1 = -2
    ay1 = -2
    ax2 = 2
    ay2 = 2
    bx1 = 3
    by1 = 3
    bx2 = 4
    by2 = 4
    sol = Solution()
    assert 17 == sol.computeArea(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2)
