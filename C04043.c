#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}
ll check(ll a[], ll n){
    for(ll i = n - 1; i >= 2; i--){
        ll l = 0, r = i - 1;
        while(l < r){
            if(a[l] + a[r] == a[i]) return 1;
            else if(a[l] + a[r] < a[i]) ++l;
            else --r;
        }
    }
    return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll a[n];
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }
        qsort(a, n, sizeof(long long), cmp);
        for(ll i = 0; i < n; i++){
            a[i] = a[i] * a[i];
        }
        if(check(a, n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}