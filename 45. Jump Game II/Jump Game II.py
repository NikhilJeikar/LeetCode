from typing import List


def jump(nums: List[int]) -> int:
    dist = [float('inf')] * len(nums)

    dist[0] = 0

    for i in range(len(nums)):
        for j in range(nums[i]):
            if i + j +1 >= len(nums):
                break
            if dist[i + j+1] > dist[i] + 1:
                dist[i+j+1] = dist[i] +1
    return dist.pop()


jump([2, 3, 1, 1, 4])
