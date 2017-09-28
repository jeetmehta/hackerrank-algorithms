#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;

void swap(int * ar, int i, int j)
{
    int temp = ar[i];
    ar[i] = ar[j];
    ar[j] = temp;
}

void print_array(int * ar, int ar_size)
{
    for (int i = 0; i < ar_size; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

void insertionSort(int ar_size, int *  ar)
{
    for (int i = 1; i < ar_size; i++)
    {
        int value = ar[i];
        for (int j = 0; j < i; j++)
        {
            if (value < ar[j])
                swap(ar, i, j);
        }
        print_array(ar, ar_size);
    }
}

int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }
   insertionSort(_ar_size, _ar);
   
   return 0;
}