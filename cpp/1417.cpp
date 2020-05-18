#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string reformat(string s) 
    {
		int num_n = 0, num_c = 0;
		for (int i = 0; i < s.length(); i++)
		{
			if (('0' <= s[i]) && (s[i] <= '9'))
				num_n++;
			else
				num_c++;
		}
		if (num_n >= num_c)
		{
			if (('0' > s[0]) || (s[0] > '9'))
				for (int i = 1; i < s.length(); i++)
				{
					if (('0' <= s[i]) && (s[i] <= '9'))
					{
						char t = s[0];
						s[0] = s[i];
						s[i] = t;
						break;
					}
				}
		}
		else
		{
			if (('0' <= s[0]) && (s[0] <= '9'))
				for (int i = 1; i < s.length(); i++)
				{
					if (('0' > s[i]) || (s[i] > '9'))
					{
						char t = s[0];
						s[0] = s[i];
						s[i] = t;
						break;
					}
				}
		}
		bool flag = true;
        for (int i = 0; i < s.length()-1; i++)
        {
			flag = false;
			if (('0' <= s[i]) && (s[i] <= '9'))
			{
				for (int j = i + 1; j < s.length(); j++)
				{
					if ((s[j] > '9') || (s[j] < '0'))
					{
						char t = s[i + 1];
						s[i + 1] = s[j];
						s[j] = t;
						flag = true;
						break;
					}
				}
			}
			else
			{
				for (int j = i + 1; j < s.length(); j++)
				{
					if ((s[j] <= '9') && (s[j] >= '0'))
					{
						char t = s[i + 1];
						s[i + 1] = s[j];
						s[j] = t;
						flag = true;
						break;
					}
				}
			}
			if (!flag)
				return "";
        }
		return s;
    }
};

int main()
{
	Solution so;
	string s;
	cin >> s;
	cout << so.reformat(s) << endl;

    return 0;
}