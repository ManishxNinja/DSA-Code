#include<bits/stdc++.h>
using namespace std;

void dfs(int ind, int vis[], vector<int> adj[], int V, vector<int>& ans) {
    vis[ind] = 1;
    ans.push_back(ind);

    for (auto it : adj[ind]) {
        if (!vis[it]) {
            dfs(it, vis, adj, V, ans);
        }
    }
}

vector<int> bfs(vector<int> adj[],int v){
    int vis[v] = {0};
    vector<int> ans;
    queue<int> q;
    vis[0] = 1;
    q.push(0);

    while(!q.empty()){
        int a = q.front();
        q.pop();
        ans.push_back(a);

        for(auto it : adj[a]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return ans;
}

void addEdge(vector <int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printAns(vector <int> &ans) {
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}

int main() {
    // vector<vector<int>> adj
    // {
    //     {1, 0, 1},
    //     {0, 1, 0},
    //     {1, 0, 1}
    // };
    // vector<int> adjl[3]; // Change size to 3
    // for (int i = 0; i <= 2; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         if (i != j && adj[i][j] == 1) {
    //             adjl[i].push_back(j);
    //             adjl[j].push_back(i);
    //         }
    //     }
    // }
    // vector<int> ans;
    // int vis[3] = {0};
    // dfs(0, vis, adjl, 3, ans);
    // for (auto it : ans) {
    //     cout << it << " ";
    // }
    // cout << "Manish";

    // for bfs
    cout<<endl;

    vector <int> adj1[6];
    
    addEdge(adj1, 0, 1);
    addEdge(adj1, 1, 2);
    addEdge(adj1, 1, 3);
    addEdge(adj1, 0, 4);

    vector <int> ans2 = bfs(adj1,5);
    printAns(ans2);

    return 0;
}
