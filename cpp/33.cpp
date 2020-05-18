#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> num;
    int tar;
    int solve(int m,int n){
        if(m==n)
        {
            if(num[m]==tar)
                return m;
            else
                return -1;
        }
        int mid=(m+n)/2;
        int t;
        if(num[m]<num[mid]){
            if(num[m]<=tar&&tar<=num[mid])
                t=solve(m,mid);
            else
                t=solve(mid+1,n);
        }
        else{
            if(num[mid+1]<=tar&&tar<=num[n])
                t=solve(mid+1,n);
            else
                t=solve(m,mid);
        }
        return t;
    }
    int search(vector<int>& nums, int target){
        if(nums.size()==0)
            return -1;
        for(int i=0;i<nums.size();i++)
            num.push_back(nums[i]);
        tar=target;
        return solve(0,nums.size()-1);
    }
};

int main()
{
    vector<int>a;
    int n,m;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        a.push_back(m);
    }
    Solution so;
    cout<<so.search(a,3)<<endl;

    system("pause");
    return 0;    
}