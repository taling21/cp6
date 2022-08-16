#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
int t[4*(100000 + 1)];
int max(int a, int b){
    if (a>b) return a;
    return b;
}
int min(int a, int b){
    if (a<b) return a;
    return b;
}
void build(int a[], int v, int tl, int tr) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm);
        build(a, v*2+1, tm+1, tr);
        t[v] = t[v*2] + t[v*2+1];
    }
}
int sum(int v, int tl, int tr, int l, int r) {
    if (l > r) 
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm))
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r);
}
int main (){
    int n,t,k,ans = 0,i,p,prev,curr,start,end;
    cin >> n >> t >> k;
    int arr[n];
    for (i=0;i<n;i++) cin >> arr[i];
    cin >> prev;
    build(arr,1,0,n-1);
    for (p=0;p<t;p++){
        cin >> curr;
       start = min(prev,curr);
       end = max(prev,curr);
        k = k - (sum(1,0,n-1,start,end) - arr[start]);
        if (k>=0) {ans++;
        prev = curr;
        }

        else break;
    }
    cout << ans << endl;
    

}