#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
ll min(ll a, ll b){
    if(a < b) return a;
    return b;
}
int main(){
    ll n; scanf("%lld", &n);
    ll a[n][2];
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < 2; j++){
            scanf("%lld", &a[i][j]);
        }
    }
    ll min1 = 1e9, min2 = 1e9;
    for(ll i = 0; i < n; i++){
        min1 = min(min1, a[i][0]);
        min2 = min(min2, a[i][1]);
    }
    printf("%lld\n", min1 * min2);
}