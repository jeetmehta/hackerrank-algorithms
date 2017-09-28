#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int primary_sum = 0;
    int secondary_sum = 0;
    for (int i = 0; i < n; i++)
    {
        int secondary_col_idx = n - i - 1;
        for (int j = 0; j < n; j++)
        {
            if (i==j)
                primary_sum+=a[i][j];
            if (j == secondary_col_idx)
                secondary_sum+=a[i][j];
        }
    }
    cout << abs(primary_sum - secondary_sum) << endl;
    return 0;
}