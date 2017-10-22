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

int getMinDistance(vector <int> arr)
{
    int minDistance = arr.size() + 1;
    unordered_map <int, int> values;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (values.find(arr[i]) != values.end())
        {
            if (abs(i - values[arr[i]]) < minDistance)
                minDistance = abs(i - values[arr[i]]);
            values[arr[i]] = i;
        }
        else
            values.insert(make_pair(arr[i], i));
    }
    return (minDistance == arr.size() + 1) ? -1 : minDistance;
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
    cout << getMinDistance(A) << endl;
    return 0;
}