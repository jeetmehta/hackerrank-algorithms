#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int pos_num = 0, neg_num = 0, zero_num = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos_num++;
        else if (arr[i] < 0)
            neg_num++;
        else
            zero_num++;
    }
    cout << float(pos_num) / float(n) << endl << float(neg_num) / float(n) << endl << float(zero_num) / float(n) << endl;
    return 0;
}