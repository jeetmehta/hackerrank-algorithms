#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findMin(vector <int> arr)
{
    int minValue = 999999999;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < minValue)
            minValue = arr[i];
    }
    return minValue;
}

void print_vector(vector <int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void cutSticks(vector <int> arr)
{
    while (arr.size() != 0)
    {
        cout << arr.size() << endl;
        int minValue = findMin(arr);
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] - minValue == 0)
            {
                arr.erase(arr.begin() + i);
                i--;
            }
            else
                arr[i] -= minValue;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    cutSticks(arr);
    return 0;
}
