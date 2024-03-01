#include<iostream>
#include <bits/stdc++.h>
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

pair<int,int> min_max(int l,int r){
    if(l==r){
        return make_pair(arr[l],arr[l]);
    }else if(r==l+1){
        return (arr[l]<arr[r]?make_pair(arr[l],arr[r]):make_pair(arr[r],arr[l]));
    }else{
        int md=(l+r)/2;
        pair<int,int> left_result = min_max(l,md);
        pair<int,int> right_result = min_max(md+1,r);
        int min_val = min(left_result.first,right_result.first);
        int max_val = max(left_result.second,right_result.second);
        return make_pair(min_val,max_val);
    }
}
void solve() {
int n; cin >>n;
for (int i = 0; i < n; i++)
{
    cin >>arr[i];
}
pair<int,int>mn_mx=min_max(0,n-1);
cout<<mn_mx.first<<" "<<mn_mx.second;
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
