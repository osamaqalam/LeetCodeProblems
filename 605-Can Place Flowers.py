class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        count = 0
        modifiedIndex = -1
        for i in range(len(flowerbed)):
            if flowerbed[i] == 0:
                flowerbed[i] = 1
                modifiedIndex = i
                count += 1
            if i != 0 and flowerbed[i-1]==1:
                flowerbed[modifiedIndex] = 0
                count -= 1
        if count >= n:
            return True
        else:
            return False