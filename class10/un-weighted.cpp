#include<iostream>
using namespace std;

int main() {
    int N, E;
    
    // Input number of nodes
    cout << "Enter the number of nodes: ";
    cin >> N;

    // Input number of edges
    cout << "Enter the number of edges: ";
    cin >> E;

    // Initialize the graph with -1 for no edge and 0 for diagonal (self-loops)
    int graph[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) {
                graph[i][j] = 0; // Weight of self-loop is 0
            } else {
                graph[i][j] = -1; // -1 represents no edge
            }
        }
    }

    // Input edges and update adjacency matrix with weights
    for (int i = 0; i < E; ++i) {
        int x, y, weight;
        cout << "Enter Edge " << (i + 1) << " (as two space-separated node indices and weight): ";
        cin >> x >> y >> weight;

        // Check if indices are within bounds
        if (x >= 0 && x < N && y >= 0 && y < N) {
            graph[x][y] = weight;
            graph[y][x] = weight; // Comment this line for directed graphs
        } else {
            cout << "Invalid edge! Node indices should be between 0 and " << (N - 1) << ". Try again." << endl;
            --i; // Re-take this edge input
        }
    }

    // Print the adjacency matrix
    cout << "Graph representation as weighted adjacency matrix:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
