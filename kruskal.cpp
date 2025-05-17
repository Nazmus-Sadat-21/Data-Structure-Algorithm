#include <iostream>

using namespace std;

const int MAX_EDGES = 100;
const int MAX_VERTICES = 100;

struct Edge {
    int u, v, weight;
};

// Manual sorting function (Bubble Sort)
void sortEdges(Edge edges[], int m) {
    for (int i = 0; i < m - 1; ++i) {
        for (int j = 0; j < m - i - 1; ++j) {
            if (edges[j].weight > edges[j + 1].weight) {
                Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

// Disjoint Set Union (Union-Find)
int parent[MAX_VERTICES];
int rankSet[MAX_VERTICES];

void makeSet(int n) {
    for (int i = 0; i < n; ++i) {
        parent[i] = i;
        rankSet[i] = 0;
    }
}

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]); // Path compression
    return parent[x];
}

bool unite(int x, int y) {
    int xr = find(x);
    int yr = find(y);
    if (xr == yr) return false;

    if (rankSet[xr] < rankSet[yr])
        parent[xr] = yr;
    else if (rankSet[xr] > rankSet[yr])
        parent[yr] = xr;
    else {
        parent[yr] = xr;
        rankSet[xr]++;
    }
    return true;
}

int kruskalMST(int n, Edge edges[], int m) {
    sortEdges(edges, m);
    makeSet(n);

    int mstWeight = 0;
    cout << "Edges in MST:\n";
    for (int i = 0; i < m; ++i) {
        if (unite(edges[i].u, edges[i].v)) {
            cout << edges[i].u << " - " << edges[i].v << " : " << edges[i].weight << "\n";
            mstWeight += edges[i].weight;
        }
    }
    return mstWeight;
}

int main() {
    int n, m;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;

    Edge edges[MAX_EDGES];
    cout << "Enter each edge (u v weight):\n";
    for (int i = 0; i < m; ++i) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    int totalCost = kruskalMST(n, edges, m);
    cout << "Total cost of MST: " << totalCost << "\n";

    return 0;
}
