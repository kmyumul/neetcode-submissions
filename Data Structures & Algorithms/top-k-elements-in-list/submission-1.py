class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = {}
        for num in nums:
            if not num in count:
                count[num] = 0
            else:
                count[num] += 1
        ordered = sorted(count.items(), key=lambda x: x[1], reverse=True)
        result = []
        for i in range(k):
            result.append(ordered[i][0])
        return result