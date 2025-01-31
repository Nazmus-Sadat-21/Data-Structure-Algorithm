#include <iostream>
using namespace std;

const int MAX_VERTICES = 100; // Maximum number of vertices

// Graph representation using an adjacency matrix
int graph[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];

// Queue implementation for BFS
int queue[MAX_VERTICES];
int front = -1, rear = -1;

void enqueue(int node) {
    if (rear == MAX_VERTICES - 1) {
        cout << "Queue overflow!" << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    queue[++rear] = node;
}

int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue underflow!" << endl;
        return -1;
    }
    return queue[front++];
}

bool isEmpty() {
    return front == -1 || front > rear;
}

void BFS(int start, int vertices) {
    enqueue(start);
    visited[start] = true;

    while (!isEmpty()) {
        int node = dequeue();
        cout << node << " ";

        // Visit all neighbors
        for (int i = 0; i < vertices; i++) {
            if (graph[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                enqueue(i);
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

    cout << "BFS starting from node 0: ";
    BFS(0, vertices);
    cout << endl;

    return 0;
}
