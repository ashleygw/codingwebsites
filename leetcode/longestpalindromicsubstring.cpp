class Solution {
public:
	static string longestPalindrome(string s) {
		if (s.length() == 0)
		{
			return "";
		}
		if (s.length() == 1) {
			return s;
		}

		int i = 0, size = s.size();
		string largest = s.substr(0,1);
		string cur = largest;
		for (i = 0; i < size; i++)
		{
			cur = findPalindrome(s, i, i);
			if (cur.size() > largest.size())
				largest = cur;
			cur = findPalindrome(s, i, i + 1);
			if (cur.size() > largest.size())
				largest = cur;
		}
		return largest;
	}
	static string findPalindrome(string &s, int start, int end)
	{
		int size = s.length() - 1;
		while (start >= 0 && end <= size && s[start] == s[end])
		{
			start--;
			end++;
		}
		return s.substr(start + 1, end - start - 1);
	}
};
