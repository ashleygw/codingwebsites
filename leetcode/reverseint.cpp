class Solution {
public:
	static int reverse(int x) {
		long long ret = 0;
		int cur = 0;
		int prev = 0;
		while (x != 0)
		{
			cur = x % 10;
			ret = ret * 10 + cur;
			x /= 10;
			if (ret > 2147483647 || ret < -2147483648)
				return 0;
		}
			return ret;
	}
};
