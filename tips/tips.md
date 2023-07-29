# set precision in c++

```
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
cout.precision(10);
cout.setf(ios::fixed);
```

# Note:

- we can use `cin>>` for `bitset`
- bitset to decimal `to_ulong()`
- sort vector of pairs:   
```
std::sort(v.begin(), v.end(), [](auto &left, auto &right) {
    return left.first < right.first;
});
```
- to get `1111...1111` in bitmask just use `-1`
- to do something with max element of array use this: 
```
#define all(v) v.begin(), v.end()

*max_element(all(a))
```
- aslo REMEMBER when you nedd some max element or some min element you can use sort then remove elements from sorted array.

# DataStructures: 
### TREE: 
there is a nice and simple implementation of tree:    
lets assume input is like this: 
> input:    
> 1 2    
> 3 4   
> 5 3   
> 3 2   
```
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
now it is bidirectional tree. we have a simple array that each index of array looks to nodes connected to it.

- detect a node is **leaf** or not? its count is **one**  
# Question Models:

- **Preprocess:** Make a `set` then check if value is in that set or not. like this: `if(set.count(value))`

# Error's:

> some thing like this means over flow! use `long long` .. or `uint_64` or ...

```
Output
4.06096e+013 20189
Answer
40609587931575 20189
Checker Log
wrong output format Expected integer, but "4.06096e+013" found
```
