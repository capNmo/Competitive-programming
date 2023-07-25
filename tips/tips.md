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
