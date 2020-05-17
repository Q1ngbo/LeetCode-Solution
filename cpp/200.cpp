#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid)
    {
        if (grid.size() == 0)
            return 0;
        int sum = 0;
        int m = grid.size() + 2;
        int n = grid[0].size() + 2;
        char** g = new char* [m];
        for (int i = 0; i < m; i++)
            g[i] = new char[n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
                    g[i][j] = '0';
                else
                    g[i][j] = grid[i-1][j-1];
            }
        }
        for (int i = 1; i < m-1; i++)
        {
            for (int j = 1; j < n-1; j++)
            {
                if (g[i][j] == '1')
                {
                    digui(g, i, j);
                    sum++;
                }
            }
        }
        return sum;
    }

    void digui(char** grid,int i,int j)
    {
        if (grid[i][j] == '0'||grid[i][j]=='x')
            return;
        else if(grid[i][j]=='1')
            grid[i][j] = 'x';
        digui(grid, i - 1, j);
        digui(grid, i + 1, j);
        digui(grid, i, j - 1);
        digui(grid, i, j + 1);
    }
};

int main()
{
    Solution so;
    vector<vector<char>> grid;
    grid.resize(4);
    char c;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> c;
            grid[i].push_back(c);
        }
    cout << so.numIslands(grid) << endl;

    return 0;
}