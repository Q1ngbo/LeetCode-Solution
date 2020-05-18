#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
	{
		int i = 0, j = 0, n1 = nums1.size(), n2 = nums2.size();
		int m = nums1.size() + nums2.size();
		vector<int>re;
		while (true)
		{
			if (i == n1)
			{
				re.push_back(nums2[j]);
				j++;
			}
			else if (j==n2)
			{
				re.push_back(nums1[i]);
				i++;
			}
			else if (nums1[i] < nums2[j])
			{
				re.push_back(nums1[i]);
				i++;
			}
			else if (nums1[i] > nums2[j])
			{
				re.push_back(nums2[j]);
				j++;
			}
			else if (nums1[i] == nums2[j])
			{
				re.push_back(nums1[i]);
				i++;
				if (re.size() == m / 2 + 1)
				{
					if (m % 2 == 0)
						return ((double)re[m / 2 - 1] + (double)re[m / 2]) * 0.5;
					else
						return (double)re[m / 2];
				}
				re.push_back(nums2[j]);
				j++;
			}
			if (re.size() == m / 2+1)
			{
				if (m % 2 == 0)
					return ((double)re[m / 2 - 1] + (double)re[m / 2]) * 0.5;
				else
					return (double)re[m / 2];
			}
		}
	}
};