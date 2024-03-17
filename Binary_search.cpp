#include <bits/stdc++.h>
#include<iostream>
#include<utility>
#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
#define ll long long
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
const ll MOD = 1e9 + 7;
const double ebs = 1e-6;
void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
const int N=1e5;
int arr[N];
void solve() {
    int n,k;
    cin >>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
            cin >>arr[i];
    }
    int l=0 ,r=n;
    while (l<=r)
    {
        int md = l+(r-l)/2;
        if(arr[md]==k){
            cout<<md+1;
            return;
        }else if(arr[md]>k){
            r=md-1;
        }else{
            l=md+1;
        }
    }
}
int main() {
    fast();
    int _ = 1;
    //cin>>_;
    while (_) {
        solve();
        _--;
        cout<<el;
    }
    return 0;
}
