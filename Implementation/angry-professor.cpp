#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool classCancelled(vector <int> a, int k)
{
    int numPresent = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (numPresent >= k)
            return false;
        
        if (a[i] <= 0)
            numPresent++;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        if (classCancelled(a, k))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}