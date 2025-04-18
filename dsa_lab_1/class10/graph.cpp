//undirected

#include<iostream>
using namespace std;

int main() {
    int N, E;
    
    cout << "Enter the number of nodes: ";
    cin >> N;

    cout << "Enter the number of edges: ";
    cin >> E;

    int graph[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) {
                graph[i][j] = 0;
            } else {
                graph[i][j] = -1;
            }
        }
    }

    for (int i = 0; i < E; ++i) {
        int x, y;
        cout << "Enter edge " << (i + 1) << " ( give x ,y): ";
        cin >> x >> y;

        if (x >= 0 && x < N && y >= 0 && y < N) {
            graph[x][y] = 1;
            graph[y][x] = 1; 
        } else {
            cout << "Invalid edge!" << (N - 1) << ". try again." << endl;
            --i; 
        }
    }

   
    cout << "graph representation as adjacency matrix:" << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
