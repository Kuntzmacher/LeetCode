class Solution:
    def computeArea(self, ax1, ay1, ax2, ay2, bx1, by1, bx2, by2):
        x1 = max(ax1, bx1)
        x2 = min(ax2, bx2)
        y1 = max(ay1, by1)
        y2 = min(ay2, by2)

        aa = (ay2 - ay1) * (ax2 - ax1)
        ab = (by2 - by1) * (bx2 - bx1)

        if bx1 > ax2 or ax1 > bx2 or by1 > ay2 or ay1 > by2:
            ax = 0
        else:
            ax = (y2 - y1) * (x2 - x1)

        return aa + ab - ax
