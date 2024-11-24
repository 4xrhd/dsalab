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

    // Initialize the graph with 0 (no edge) and 0 for diagonal (self-loops)
    int graph[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            graph[i][j] = 0; // 0 means no edge
        }
    }

    // Input edges and update adjacency matrix
    for (int i = 0; i < E; ++i) {
        int x, y;
        cout << "Enter Edge " << (i + 1) << " (as two space-separated node indices): ";
        cin >> x >> y;

        // Check if indices are within bounds
        if (x >= 0 && x < N && y >= 0 && y < N) {
            graph[x][y] = 1;
            graph[y][x] = 1; // Comment this line for directed graphs
        } else {
            cout << "Invalid edge! Node indices should be between 0 and " << (N - 1) << ". Try again." << endl;
            --i; // Re-take this edge input
        }
    }

    // Print the adjacency matrix
    cout << "Graph representation as adjacency matrix:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
