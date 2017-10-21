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

int pickMaxNumbers(vector <int> arr)
{   
    sort(arr.begin(), arr.end());
    if (arr[arr.size() - 1] == arr[0])
        return arr.size();
    
    int currentLength = 1;
    int currentLowestVal = arr[arr.size() - 1];
    int maxLength = 0;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < currentLowestVal) currentLowestVal = arr[i];
       
        if (arr[i+1] - currentLowestVal <= 1)
            currentLength++;
        else
        {
            currentLowestVal = arr[i+1];
            if (currentLength > maxLength) maxLength = currentLength;
            currentLength = 1;
        }
    }
    
    return maxLength;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    cout << pickMaxNumbers(a) << endl;
    return 0;
}