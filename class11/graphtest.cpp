#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// bfs
void bfs(const vector<vector<int>>& graph, int start) {
    vector<bool> visited(graph.size(), false); 
    queue<int> q;                              //qq
    q.push(start);
    visited[start] = true;

    cout << "BFS Result: ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " "; // print  current node

        // visil all
        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

int main() {
    //adjancency
    vector<vector<int>> graph = {
        {1, 2,4},    //0
        {2,3,4},    // 1
        {1,0,3},    //  2
        {1,2,4},       // 3
        {0,1,3,5},    // 4
        {4}        //5
    };

    int startNode = 0;
    bfs(graph, startNode);

    return 0;
}   