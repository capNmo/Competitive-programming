# DataStructures: 
### TREE: 
there is a nice and simple implementation of tree:    
lets assume input is like this: 
> input:    
> 1 2    
> 3 4   
> 5 3   
> 3 2   
```c++
vector<vector<int>> g;
g.assign(n, vector<int>());

for(int i=0; i<4; ++i){
    int u, v;
    cin >> u >> v;
    u--;v--; // becase in codeforces it starts index with 1.
    g[u].push_back(v);
    g[v].push_back(u);
}
```  

❓🙋‍♂️ count number of leaf that each node can reach.

```c++
vector<vector<int>> g;
vector<int> leafCount;

void dfs(int root, int prev){
    if(g[root].size() == 1 && g[root][0] == prev)
    {
        leafCount[root] = 1;
    }
    else{
        for(auto n: g[root]){
            if(n != prev){
                dfs(n, root);
                leafCount[root] += leafCount[n];
            }
        }
    }
}
```