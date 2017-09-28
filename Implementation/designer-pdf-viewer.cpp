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

using namespace std;


int main(){
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    string word;
    cin >> word;
    int max_height = 0, max_letter_index = 0, asci_offset = 97;
    for (int char_asci : word)
    {
        if (h[char_asci - asci_offset] > max_height)
            max_height = h[char_asci - asci_offset];
    }
    cout << max_height * word.length() << endl;
    return 0;
}