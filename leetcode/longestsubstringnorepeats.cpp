class Solution {
 public:
	 int lengthOfLongestSubstring(std::string s) {
		 bool container[128];
		 int counter = 0;
		 int current_max = 0;
		 //char focus;
		 for (int i = 0; i < s.size(); ++i)
		 {
			 for (int j = 0; j < 128; j++)
			 {
				 container[j] = false;
			 }
			 for (int j = i; j < s.size() && !container[s[j]]; ++j)
			 {
				 container[s[j]] = true;
				 counter++;
			 }
			 if (counter > current_max)
				 current_max = counter;
             counter = 0;
		 }
		 return current_max;
	 }
 };
