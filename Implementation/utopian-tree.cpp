#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getTreeHeight(int numCycles)
{
    int height = 1;
    for (int i = 0; i < numCycles; i++)
    {
        if ((i+1) % 2 != 0)
            height *= 2;
        else
            height += 1;
    }
    return height;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << getTreeHeight(n) << endl;
    }
    
    return 0;
}