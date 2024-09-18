class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        charSet = set()
        left = 0
        maxL = 0

        for right in range(len(s)):
            if s[right] not in charSet:
                charSet.add(s[right])
                maxL = max(maxL, right-left + 1)

            else:
                while s[right] in charSet:
                    charSet.remove(s[left])
                    left = left+1
                charSet.add(s[right])

        return maxL               
        