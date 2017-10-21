#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getNumDays(int n)
{
    int total = 5;
    int peopleThatLiked = 0;
    int totalPeopleLiked = 0;
    
    for (int i = 1; i <= n; i++)
    {
        peopleThatLiked = total / 2;
        totalPeopleLiked += peopleThatLiked;
        total = peopleThatLiked * 3;
    }
    return totalPeopleLiked;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    cout << getNumDays(n) << endl;
    return 0;
}