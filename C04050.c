#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
int main(){
    ll n, m; scanf("%lld %lld", &n, &m);
    ll cnt1[1000] = {0};
    ll cnt2[1000] = {0};
    ll a[n];
    ll b[m];
    for(ll i = 0 ; i < n; i++){
        scanf("%lld", &a[i]);
        cnt1[a[i]]++;
    }
    for(ll i = 0 ; i < m; i++){
        scanf("%lld", &b[i]);
        cnt2[b[i]]++;
    }
    for(ll i = 1; i < 1000; i++){
        if(cnt1[i] && cnt2[i]) printf("%lld ", i);
    }
    printf("\n");
    for(ll i = 1; i < 1000; i++){
        if(cnt1[i] && cnt2[i] == 0) printf("%lld ", i);
    }
    printf("\n");
    for(ll i = 1; i < 1000; i++){
        if(cnt1[i] == 0 && cnt2[i]) printf("%lld ", i);
    }
    printf("\n");
    return 0;
}