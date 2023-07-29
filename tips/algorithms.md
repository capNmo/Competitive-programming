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
