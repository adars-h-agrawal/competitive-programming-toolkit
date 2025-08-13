#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <limits>
using namespace std;


// ------------------- FAST I/O -------------------
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

// ------------------- TYPE ALIASES -------------------
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

// ------------------- CONSTANTS -------------------
const int MOD = 1e9+7;
const ll INF = 1e18;

// ------------------- DEBUG MACRO -------------------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

// ------------------- DEBUG FUNCTIONS -------------------
template<class T> void _print(T t) { cerr << t; }
template<class T, class V> void _print(pair<T,V> p) { cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}"; }
template<class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]"; }

// ------------------- MAIN -------------------
int main() {
    fast_io;

    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n;
        cin >> n; // size of array
        vi arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        ll sum = 0;
        for (int x : arr) sum += x;

        cout << sum << "\n"; // output the sum
    }

    return 0;
}
