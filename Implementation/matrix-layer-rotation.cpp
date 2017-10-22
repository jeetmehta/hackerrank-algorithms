#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print_grid(vector <vector <int>> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rotateArray(vector <vector <int>> arr, int n, int m, int numRotations)
{
    int numLayers = ceil(arr[0].size() / 2.0);
    //int numLayers = 1;
    
    for (int i = 0; i < numRotations; i++)
    {
        int startX = 0;
        int startY = 0;
        for (int j = 0; j < numLayers; j++)
        {
            //cout << "Layer: " << j << endl;
            int curX = startX;
            int curY = startY;
            int previous = arr[startX][startY + 1];
            
            // Column Down
            while (curX < n - j)
            {
                int temp = arr[curX][curY];
                arr[curX][curY] = previous;
                previous = temp;
                curX++;
            }
            curX--;
            curY++;
            //print_grid(arr);
            
            // Row Right
            while (curY < m - j)
            {
                int temp = arr[curX][curY];
                arr[curX][curY] = previous;
                previous = temp;
                curY++;
            }
            curX--;
            curY--;
            //print_grid(arr);
            
            // Column Up            
            while (curX >= j)
            {
                int temp = arr[curX][curY];
                arr[curX][curY] = previous;
                previous = temp;
                curX--;
            }
            curX++;
            curY--;
            //print_grid(arr);
            
            // Row Right
            while (curY >= j)
            {
                int temp = arr[curX][curY];
                arr[curX][curY] = previous;
                previous = temp;
                curY--;
            }
            //print_grid(arr);
            
            // Increment start positions to next layer
            startX++;
            startY++;
        }
    }
    print_grid(arr);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int m;
    int r;
    cin >> n >> m >> r;
    vector <vector <int>> arr(n, vector <int>(m));
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    rotateArray(arr, n, m, r);
    
    return 0;
}
