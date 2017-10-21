#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int numInputs;
    cin >> numInputs;
    char inputs[numInputs];
    
    int level = 0;
    int previousLevel = 0;
    int valleys = 0;
    
    for (int i = 0; i < numInputs; i++)
    {
        cin >> inputs[i];
        
        previousLevel = level;
        if (inputs[i] == 'U')
            level++;
        else
            level--;
        
        if (level == 0 && previousLevel < 0)
            valleys++;
    }
    cout << valleys << endl;
    return 0;
}