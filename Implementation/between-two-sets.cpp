#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int gcd(int a,int b) {
    int temp;
    while(b > 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcd_vector(vector <int> arr)
{
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        result = gcd(result, arr[i]);
    }
    return result;
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

int getTotalX(vector <int> a, vector <int> b) {
        
    // LCM
    int lcm_a = accumulate(a.begin(), a.end(), 1, lcm);
    
    // GCD
    int gcd_b = gcd_vector(b);
    
    int output = 0;
    int orig_lcm = lcm_a;
    
    // Check how many multiples of LCM divide cleanly into GCD
    while (lcm_a <= gcd_b)
    {
        if (gcd_b % lcm_a == 0) output++;
        lcm_a += orig_lcm;
    }

    return output;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}