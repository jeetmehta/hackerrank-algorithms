#include <bits/stdc++.h>

using namespace std;

int sum(vector <int> arr)
{
    int output = 0;
    for (int i =0; i < arr.size(); i++)
    {
        output += arr[i];
    }
    return output;
}

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        vector <int> window(s.begin() + i, s.begin() + i + m);
        if (sum(window) == d) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}