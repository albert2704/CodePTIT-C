#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
ll max(ll a, ll b){
    if(b > a) return b;
    return a;
}
ll min(ll a, ll b){
    if(a > b) return b;
    return a;
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll a[n];
        ll sum1 = 0, sum2 = -1e10;
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
            sum1 += a[i];
            sum2 = max(sum1, sum2);
            if(sum1 < 0) sum1 = 0;
        }
        printf("%lld\n", sum2);
    }
    return 0;
}