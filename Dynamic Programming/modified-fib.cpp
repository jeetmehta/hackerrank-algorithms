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

long int modifiedFib(int t_0, int t_1, int n, vector <long double> &storage)
{
    if (n <= 0)
        return t_0;
    else if (n == 1)
        return t_1;
    else
    {
        if (storage[n] == -1)
        {
            storage[n] = modifiedFib(t_0, t_1, n-2, storage) + pow(modifiedFib(t_0, t_1, n-1, storage), 2);
        }
    }
    return storage[n];
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t_0, t_1, t_n;
    cin >> t_0 >> t_1;
    cin >> t_n;
    
    vector <long double> storage(t_n + 1, -1);
    storage[0] = t_0;
    storage[1] = t_1;
    
    cout << modifiedFib(t_0, t_1, t_n - 1, storage) << endl;
    
    return 0;
}