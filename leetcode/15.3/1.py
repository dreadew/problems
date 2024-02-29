class Solution:
	def check(self, s: str) -> bool:
		return s[::-1] == s

	def longestPalindrome(self, s: str) -> str:
		r_cur: int = 0
		i_cur: int = 0

		if (len(s) < 2):
			return s
		
		if (len(s) == 2):
			if (s[0] == s[1]):
				return s
			return s[0]

		for i in range(len(s)):
			for r in range(len(s) - 1, 0, -1):
				cur: str = s[i] + s[r]
				if (self.check(cur)):
					if (abs(i - r) > abs(i_cur - r_cur)):
						r_cur = r
						i_cur = i
		return s[i_cur:r_cur + 1]


s: str = input()
print(Solution().longestPalindrome(s))