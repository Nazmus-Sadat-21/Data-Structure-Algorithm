#include <iostream>
using namespace std;

const int MAX_VERTICES = 100; // Maximum number of vertices

// Graph representation using an adjacency matrix
int graph[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];

// Stack implementation for DFS
int stack[MAX_VERTICES];
int top = -1;

void push(int node) {
    stack[++top] = node;
}

int pop() {
    return stack[top--];
}

bool isEmpty() {
    return top == -1;
}

void DFS(int start, int vertices) {
    push(start);
    visited[start] = true;

    while (!isEmpty()) {
        int node = pop();
        cout << node << " ";

        // Visit all neighbors
        for (int i = 0; i < vertices; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                push(i);
            }
        }
    }
}

int main() {
    int vertices = 5;
    // Initialize graph and visited array
    for (int i = 0; i < vertices; i++) {
        visited[i] = false;
        for (int j = 0; j < vertices; j++) {
            graph[i][j] = 0;
        }
    }

    // Example graph (adjacency matrix)
    graph[0][1] = 1;
    graph[0][2] = 1;
    graph[1][3] = 1;
    graph[2][4] = 1;

    cout << "DFS starting from node 0: ";
    DFS(0, vertices);
    cout << endl;

    return 0;
}
