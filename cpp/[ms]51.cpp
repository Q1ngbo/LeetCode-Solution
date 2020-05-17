#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int sum=0;
    void guibin(vector<int>&a, int i,int j)
    {
        if(j==i)
            return;
        if(j-i==1)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
                sum++;
            }
            return;
        }
        int m=(i+j)/2;
        guibin(a,i,m);
        guibin(a,m+1,j);
        int ii=i,jj=m+1;
        int* tem=new int[j-i+1],t=0;
        while (true)
        {
            if(ii>m&&jj>j)
                break;
            else if(ii>m&&jj<=j)
                tem[t++]=a[jj++];
            else if(jj>j&&ii<=m)
                tem[t++]=a[ii++];
            else if(a[ii]>a[jj])
            {
                sum+=(m-ii+1);
                tem[t++]=a[jj++];
            }
            else if(a[ii]<a[jj])
                tem[t++]=a[ii++];
            else if(a[ii]==a[jj])
                tem[t++]=a[ii++];
        }
        int tt=0;
        for(int mm=i;mm<=j;mm++)
            a[mm]=tem[tt++];
        delete[] tem;
    }
    int reversePairs(vector<int>& nums) 
    {
        if(nums.size()<2)
            return 0; 
        guibin(nums,0,nums.size()-1);
        return sum;
    }
};

int main()
{
    vector<int>nums;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        nums.push_back(m);
    }
    Solution so;
    cout << so.reversePairs(nums)<<endl;
    system("pause");
    return 0;
}