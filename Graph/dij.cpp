#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(ElogV)
// Space Complexity: O(V)

// It is a greegy algorithm that finds the shortest path from a source node to all other nodes in a weighted graph.

class CustomComparator
{
public:
    bool operator()(pair<int, int> &p1, pair<int, int> &p2)
    {
        return p1.second > p2.second;
    }
};

int Dijkrastra(unordered_map<int, vector<pair<int, int>>> &graph)
{
    int n = graph.size();
    int src = 0;
    int dist[n];
    fill(dist, dist + n, INT_MAX);
    int prev[n] = {-1};
    priority_queue<pair<int, int>, vector<pair<int, int>>, CustomComparator> minHeap;
    dist[0] = 0;
    minHeap.push({0, 0});

    while (!minHeap.empty())
    {
        pair<int, int> p = minHeap.top();
        minHeap.pop();
        int node = p.first;
        int d = p.second;

        for (pair<int, int> edge : graph[node])
        {
            int nextNode = edge.first;
            int nextDist = edge.second;
            if (dist[node] + nextDist < dist[nextNode])
            {
                dist[nextNode] = d + nextDist;
                prev[nextNode] = node;
            }
            minHeap.push({nextNode, dist[nextNode]});
        }
    }

    int currNode = n - 1;
    string path = to_string(currNode) + " >- ";
    while (currNode != src)
    {
        path += to_string(prev[currNode]) + " >- ";
        currNode = prev[currNode];
    }

    path = path.substr(0, path.size() - 4);
    reverse(path.begin(), path.end());

    cout << "The Shortest path is " << path << endl;

    return dist[n - 1];
}

int main()
{
    unordered_map<int, vector<pair<int, int>>> graph;
    graph[0].push_back({1, 5});
    graph[0].push_back({2, 11});
    graph[1].push_back({3, 7});
    graph[1].push_back({4, 8});
    graph[2].push_back({5, 9});
    graph[2].push_back({4, 13});
    graph[3].push_back({5, 13});
    graph[4].push_back({5, 6});
    graph[5].push_back({-1, 1000});

    cout << "The min Distance from src to dist is: " << Dijkrastra(graph) << endl;

    return 0;
}