#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int get_max(vector <int> heights)
{
    int max = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        if (heights[i] > max)
            max = heights[i];
    }
    return max;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    // your code goes here
    int max = get_max(height);
    int output = (max - k) > 0 ? (max - k) : 0;
    cout << output << endl;
    return 0;
}