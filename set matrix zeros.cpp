#include <bits/stdc++.h> 
#include <vector>
void setZeros(vector<vector<int>> &matrix)
{
	int m = matrix.size();
    int n = matrix[0].size();
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == 0)
            {
                for(int x= 0; x<m; x++)
                {
                    if(matrix[x][j] != 0)
                    matrix[x][j] = -1;
                }
                for(int y=0;y < n ; y++)
                {
                    if(matrix[i][y] != 0)
                    matrix[i][y] = -1;
                }
            }
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == -1)
                matrix[i][j] = 0;
        }
    }
    
}
