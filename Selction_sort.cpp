/*
You see, power, real power doesnt come to those who were born strongest or fastest or smartest.
No. It comes to those who will do anything to achieve it .
*/
#include <bits/stdc++.h>
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"

#define int long long
#define ld long double
#define ull unsigned long long
#define uld unsigned long double
#define all(X) (X).begin(), (X).end()
#define rall(X) (X).rbegin(), (X).rend()
#define el '\n'
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define IsON(n, k) ((n >> k) & 1)
using namespace std;
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int MOD = 1e9 + 7;
const double ebs = 1e-6;

void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

const int N = 1e6;
int arr[N];

void Selction_Sort(int n){
    int mn_idx=0;
    for (int i = 0; i < n-1; i++)
    {
            for (int j = i+1; j < n; j++)
            {
                if(arr[j] < arr[mn_idx]){
                    mn_idx=j;
                }
            }
            if(mn_idx !=i){
                swap(arr[i], arr[mn_idx]);
            }
            
    }
    
}
void solve() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    Selction_Sort(n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
}


signed main() {
    fast();
    int _ = 1;
    //cin >> _;
    while (_) {
        solve();
        _--;
        cout << el;
    }
    return 0;
}