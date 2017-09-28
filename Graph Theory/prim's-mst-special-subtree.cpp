#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print_vector(vector <int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_graph(vector <vector <int>> graph)
{
    for (int i = 0; i < graph.size(); i++)
    {
        for (int j = 0; j < graph[i].size(); j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int get_sum(vector <int> arr)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    return sum;
}

int get_minimum_node(vector <int> keys, vector <int> mst)
{
    int min_value = 999999999;
    int min_index = 0;
    for (int i = 0; i < keys.size(); i++)
    {
        if (keys[i] >= 0 && keys[i] < min_value && (find(mst.begin(), mst.end(), i+1) == mst.end()))
        {
            min_index = i;
            min_value = keys[i];
        }
    }
    return min_index + 1;
}

void update_keys(vector <vector <int>> graph, vector <int> &keys, vector <int> mst, int node_num)
{
    vector <int> adjacent_nodes = graph[node_num - 1];
    
    for (int i = 0; i < adjacent_nodes.size(); i++)
    {
        if (adjacent_nodes[i] >= 0)
        {
            if (keys[i] == -1 && find(mst.begin(), mst.end(), i+1) == mst.end())
                keys[i] = adjacent_nodes[i];
            else if (keys[i] > adjacent_nodes[i] && find(mst.begin(), mst.end(), i+1) == mst.end())
                keys[i] = adjacent_nodes[i];
        }
            
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    // Initialize graph
    int n, m;
    cin >> n >> m;
    vector <vector <int>> graph(n, vector<int>(n, -1));

    // Populate graph
    for (int i = 0; i < m; i++)
    {
        int src, dest, weight;
        cin >> src >> dest >> weight;
        
        graph[src - 1][dest - 1] = weight;
        graph[dest - 1][src - 1] = weight;
    }
    
    // Read start node
    int start_node;
    cin >> start_node;
    
    // Initialize algorithm-related variables
    vector <int> mst_set;
    vector <int> key_values(n, -1);
    
    // Set key value of first node
    key_values[start_node - 1] = 0;
    
    // Prim's Algorithm
    while (mst_set.size() <= n)
    {
        
        // Get vertex with minimum weight that's not in mst
        int minimum_vertex = get_minimum_node(key_values, mst_set);

        // Include vertex in mst
        mst_set.push_back(minimum_vertex);
        
        // Update key values
        update_keys(graph, key_values, mst_set, minimum_vertex);
    }
    
    // Output
    cout << get_sum(key_values) << endl;
       
    return 0;
}