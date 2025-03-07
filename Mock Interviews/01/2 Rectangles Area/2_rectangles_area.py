class Solution(object):
    def computeArea(self, ax1, ay1, ax2, ay2, bx1, by1, by2):
        ix, iy = intersectionRect(ax1, ay1, ax2, ay2, bx1, by1, bx2, by2)

        if ( ( ax1==bx1 ) and ( ax2==bx2 ) and ( ay1==by1 ) and ( ay2==by2 ) )\
        or ( ax1==ax2 ) or ( ay1==ay2 ) or ( bx1==bx2 ) or ( by1==by2 ):
            intersection_area = computeRect(ax1, ay1, ax2, ay2)
        elif ( ( ix != -1 ) and ( iy != -1 ) ):
            intersection_area = ix * iy

        else: intersection_area = 0

        a_area = computeRect(ax1, ay1, ax2, ay2)
        b_area = computeRect(bx1, by1, bx2, by2)

        # return a_area+b_area-intersection_area
        print(a_area+b_area-intersection_area)
        print(a_area,b_area,intersection_area)

def computeRect(x1, y1, x2, y2):
    return ( ( y2 - y1 ) * ( x2 - x1 ) )

def intersectionRect( ax1, ay1, ax2, ay2, bx1, by1, bx2, by2 ):

    x = -1
    y = -1

    if ( ( ax1 < bx1 ) and ( ax2 > bx1 ) ):

        x = bx1 - ax1

    if ( ( bx1 < ax1 ) and ( bx2 > ax1 ) ):

        x = ax1 - bx1

    if ( ( ay1 < by1 ) and ( ay2 > by1 ) ):

        y = ay2 - ay1

    if ( ( by1 < ay1 ) and ( by2 > ay1 ) ):

        y = by2 - ay1

    print(x, y)

    return x, y




ax1 = int(input())
ay1 = int(input())
ax2 = int(input())
ay2 = int(input())
bx1 = int(input())
by1 = int(input())
bx2 = int(input())
by2 = int(input())

sol = Solution()
sol.computeArea(ax1, ay1, ax2, ay2, bx1, by1, by2)
