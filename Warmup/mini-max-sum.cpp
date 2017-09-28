#include <bits/stdc++.h>

using namespace std;

long int sum_array(vector <int> arr, int size)
{
    long int sum = 0;
    for (int j = 0; j < size; j++)
    {
        sum += arr[j];
    }
    return sum;
}

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    long int sum = 0, max_sum = 0, min_sum = 999999999999999999;
    for (int i = 0; i < 5; i++)
    {
        long int value = arr[i];
        arr.erase(arr.begin() + i);
        sum = sum_array(arr, arr.size());
        
        if (sum > max_sum)
            max_sum = sum;
        
        if (sum < min_sum)
            min_sum = sum;
        
        arr.insert(arr.begin() + i, value);
    }
    cout << min_sum << " " << max_sum << endl;
    return 0;
}