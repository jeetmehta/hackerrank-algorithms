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
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector <int> arr(n);
    unordered_map <int, int> values;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        values.insert(make_pair(arr[i], i + 1));
    }
    
    for (int j = 0; j < n; j++)
    {
        cout << values[values[j + 1]] << endl;
    }
    
    return 0;
}