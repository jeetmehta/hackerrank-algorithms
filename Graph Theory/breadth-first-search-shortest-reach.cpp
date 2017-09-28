#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Define edge length as global variable
int edge_length = 6;

void print_vector(vector <int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Use BFS to get shortest reach to all other nodes in graph
void BFS_graph(vector <vector <int>> graph, int m, int n, int start)
{
    // Initialize queue and output container
    vector <int> container_queue;
    vector <int> distances = graph[start - 1];
    
    // Keep a track of all visited nodes and set start to 1
    vector <int> visited(m, -1);
    visited[start - 1] = 1;
    
    // Add all adjascent nodes into queue
    for (int i = 0; i < distances.size(); i++)
    {
        if (distances[i] != -1)
        {
            int node_num = i + 1;
            container_queue.push_back(node_num);
        }
    }
    
    // Perform BFS
    while (!container_queue.empty())
    {
        // Pick visited node and mark as visited
        int visit_node = container_queue.front();
        visited[visit_node - 1] = 1;
        
        // Get list of adjascent distances
        vector <int> adjascent = graph[visit_node - 1];
        
        // Add adjascent nodes as long as it's not in the container already, and hasn't been visited before
        for (int i = 0; i < adjascent.size(); i++)
        {
            if (adjascent[i] != -1 && 
                find(container_queue.begin(), container_queue.end(), i+1) == container_queue.end() && 
                visited[i] != 1)
            {
                container_queue.push_back(i+1);
                
                // Update distances -> need to get rid of the -1 since it's a sum
                if (distances[i] == -1)
                    distances[i] = 0;
                distances[i] += distances[visit_node - 1] + adjascent[i];
            }
        }
        
        // Pop container front element (done visiting)
        container_queue.erase(container_queue.begin());
    }
    
    // Output distances -> all except the start node
    distances.erase(distances.begin() + start - 1);
    print_vector(distances);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num_q, num_nodes, num_edges, start_node;
    cin >> num_q;
    for (int i = 0; i < num_q; i++)
    {
        // Read num of nodes and num of edges
        cin >> num_nodes >> num_edges;
        
        // Initialize graph
        vector <vector <int> > graph(num_nodes, vector <int>(num_nodes, -1)); 
        
        // Set edge values in graph
        for (int i = 0; i < num_edges; i++)
        {
            int edge_begin, edge_end;
            cin >> edge_begin >> edge_end;
            graph[edge_begin - 1][edge_end - 1] = edge_length;
            graph[edge_end - 1][edge_begin - 1] = edge_length;
        }
        
        // Read in start node
        cin >> start_node;
        
        // Get shortest distance to all other nodes via BFS
        BFS_graph(graph, num_nodes, num_edges, start_node);
    }
    
    return 0;
}