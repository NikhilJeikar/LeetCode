from typing import List


def trap(height: List[int]) -> int:
    ref = []
    for index, i in enumerate(height):
        ref.append((index, i))

    def sort(param):
        return param[1]

    area = 0
    ref.sort(key=sort)
    while len(ref) > 2:
        P1 = ref.pop()
        P2 = ref.pop()
        ref.append(P2)
        hei = P2[1]
        width = max(P1[0], P2[0]) - min(P1[0], P2[0]) - 1
        area += hei * width
        for i in range(min(P1[0], P2[0]) + 1, max(P1[0], P2[0])):
            if height[i] >= 0:
                if height[i] > P2[1]:
                    area -= P2[1]
                else:
                    area -= height[i]
            else:
                area -= P2[1]

        for i in range(min(P1[0], P2[0]) + 1, max(P1[0], P2[0])):
            height[i] = -1
    return area

trap([0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1])
trap([4,2,0,3,2,5])
