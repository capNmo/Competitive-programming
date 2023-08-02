# set precision in c++

```c++
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
cout.precision(10);
cout.setf(ios::fixed);
```

# Note:
- assing 2d vector: 
```c++
std::vector<std::vector<int> > fog(
    ROW_COUNT,
    std::vector<int>(COLUMN_COUNT, 4));

//OR: 

vector<vector<int>> g;

//then: 

g.assign(n, vector<int>());

```
- we can use `cin>>` for `bitset`
- bitset to decimal `to_ulong()`
- sort vector of pairs:   
```c++
std::sort(v.begin(), v.end(), [](auto &left, auto &right) {
    return left.first < right.first;
});
```
- to get `1111...1111` in bitmask just use `-1`
- to do something with max element of array use this: 
```c++
#define all(v) v.begin(), v.end()

*max_element(all(a))
```
- aslo REMEMBER when you nedd some max element or some min element you can use sort then remove elements from sorted array.

# Question Models:

- **Preprocess:** Make a `set` then check if value is in that set or not. like this: `if(set.count(value))`

# Error's:

> some thing like this means over flow! use `long long` .. or `uint_64` or ...

```c++
Output
4.06096e+013 20189
Answer
40609587931575 20189
Checker Log
wrong output format Expected integer, but "4.06096e+013" found
```
