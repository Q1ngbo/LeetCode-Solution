#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
	string longestPalindrome(string s)
	{
		int re[4] = { 0,0,0,0 };
		int m = 0;
		while (s[re[2]])
		{
			re[3] = re[2];
			re[1] = re[2] - 1;
			while (s[re[3]] == s[re[2]])
				re[3]++;
			re[2] = re[3];
			while (re[1] >= 0 && s[re[3]] && s[re[1]] == s[re[3]])
			{
				re[1]--;
				re[3]++;
			}
			if (re[3] - re[1] - 1 > re[0])
			{
				m = re[1] + 1;
				re[0] = re[3] - re[1] - 1;
			}
		}

		if (re[0])
		{
			string s2;
			for (int i = m; i < m + re[0]; i++)
				s2.push_back(s[i]);
			return s2;
		}
		else
			return "";
	}
};

int main()
{
	Solution so;
	string s;
	cin >> s;
	cout << so.longestPalindrome(s);

	return 0;
}