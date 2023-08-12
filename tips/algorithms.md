# QUESTIONS:

## 1855_B. Longest Divisors Interval

Given a positive integer n, find the maximum size of an interval [l,r] of positive integers such that, for every i in the interval (i.e., l≤i≤r), n is a multiple of i.

```c++
40 > [4, 5] > 2
120> [1, 2, 3, 4, 5] > 5

void solve(int t) {
  int n; cin>>n;
  int ans=0;
  for(int i=1;i<=n;i++)
  {
      if(n%i==0)ans++;
      else break;
  }
  cout<<ans<<endl;
}
```

# 2D Prefix Sum:

O(R _ C _ R \* C):

```c++
vector<vector<int>> ar = {{1,2,3}, {5, 1, 2},{2, 4, 6}};
vector<vector<int>> ar2 = {{0, 0, 0}, {0, 0, 0},{0, 0, 0}};
g.assign(3, vector<int>(3));

for(int i=0; i<3; ++i){
    for(int j=0; j<3; ++j){
        int ans = 0;
        for(int i2=0; i2<=i; ++i2){
            for(int j2=0; j2<=j; ++j2){
                ans += ar[i2][j2];
            }
        }
        ar2[i][j] = ans;
    }
}
```

O(R \* C):

```c++
void prefixSum(int arr[3][3], int n) {
    //vertical prefixsum
    for (int j = 0; j < n; j++) {
        for (int i = 1; i < n; i++) {
            arr[i][j] += arr[i-1][j];
        }
    }
    //horizontal prefixsum
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            arr[i][j] += arr[i][j-1];
        }
    }
}
```


# binary search with index: 
```c++
int binary_search_find_index(const std::vector<int>& v, int data) {
    auto it = std::lower_bound(v.begin(), v.end(), data);
    if (it == v.end() || *it != data) {
        return -1;
    } else {
        std::size_t index = std::distance(v.begin(), it);
        return index;
    }
}
```