#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print_vec(vector <string> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
    

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size;
    cin >> size;
    vector <int> indexes(size);
    vector <string> sorted_words;
    vector <string> letters(size);
    
    for (int i = 0; i < size; i++)
    {
        cin >> indexes[i] >> letters[i];
    }
    
    for (int i = 0; i < 100; i++)
    {
        int num_count = count(indexes.begin(), indexes.end(), i);
        vector <int>::iterator start = indexes.begin();
        for (int j = 0; j < num_count; j++)
        {
            
            if (start != indexes.end())
            {
                vector <int>::iterator test = find(start, indexes.end(), i);
                if (test != indexes.end())
                {
                    int index = distance(indexes.begin(), test);
                    string value;
                    if (index < indexes.size() / 2)
                        value = "-";
                    else
                        value = letters[index];
                    sorted_words.push_back(value);
                    start = test + 1;
                }
                else
                    break;
            }
            else
                break;
        }
    }

    print_vec(sorted_words);    
    return 0;
}