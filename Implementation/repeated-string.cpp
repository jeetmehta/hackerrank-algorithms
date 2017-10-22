#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <iomanip>

using namespace std;


int main(){
    string s;
    cin >> s;
    long n;
    cin >> n;
    
    long mod = (s.length() > 0) ? n % s.length() : 0;
    long count = 0;
    long remainder = 0;
   
    if (s == "a")
        count = n;
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (i >= n)
                break;

            if (s[i] == 'a')
            {
                if (i < mod) remainder++;
                count++;
            }
        }
        count = count * round(n / s.length()) + remainder;
    }
    
    cout << count << endl;
    return 0;
}