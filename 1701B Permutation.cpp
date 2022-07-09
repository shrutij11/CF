// B. Permutation

// Recall that a permutation of length n is an array where each element from 1 to n occurs exactly once.

// For a fixed positive integer d, let's define the cost of the permutation p of length n as the number of indices i (1≤i<n) such that pi⋅d=pi+1.

// For example, if d=3 and p=[5,2,6,7,1,3,4], then the cost of such a permutation is 2, because p2⋅3=p3 and p5⋅3=p6.

// Your task is the following one: for a given value n, find the permutation of length n and the value d with maximum possible cost (over all ways to choose the permutation and d). If there are multiple answers, then print any of them.

// Input
// The first line contains a single integer t (1≤t≤500) — the number of test cases.

// The single line of each test case contains a single integer n (2≤n≤2⋅105).

// The sum of n over all test cases does not exceed 2⋅105.

// Output
// For each test case, print the value d in the first line, and n integers in the second line — the permutation itself. If there are multiple answers, then print any of them.

// Example
// input
// 2
// 2
// 3
// output
// 2
// 1 2
// 3
// 2 1 3


/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
 
inline int power(int a, int b)
{
	int x = 1;
	while (b)
	{
		if (b & 1) x *= a;
		a *= a;
		b >>= 1;
	}
	return x;
}
 
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
 
const int N = 200005;
int a[N];
int b[N];
 
void solve() {
	 int n;
     cin >> n;
     vector<int> v(n+1);
     cout << 2 << endl;
     for(int i=1; i<=n; i++)
     {
         if(v[i] == 1) continue;
         for(int j=i; j<=n; j*=2)
         {
             v[j] = 1;
             cout << j << " ";
         }
     }
        cout << endl;
 
}
 
int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
	freopen("input.txt",  "r",  stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	clock_t z = clock();
 
	int t = 1;
	cin >> t;
	while (t--) solve();
 
	cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
 
	return 0;
}
