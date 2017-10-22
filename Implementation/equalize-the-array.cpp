#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int getDeletions(vector <int> arr)
{
    unordered_map <int, int> values;
    int maxCount = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (values.find(arr[i]) == values.end())
            values.insert(make_pair(arr[i], 1));
        else
        {
            values[arr[i]]++;
            if (values[arr[i]] > maxCount)
                maxCount = values[arr[i]];
        }
    }
    return arr.size() - maxCount;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << getDeletions(arr) << endl;
    return 0;
}