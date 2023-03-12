#include<stdio.h>
#define ll long long
#include<math.h>
ll check(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0; 
    }
    if(n > 1) return 1;
    return 0;
}
ll max(ll a, ll b){
    if(b > a) return b;
    return a;
}
int main(){
    ll n; scanf("%lld", &n);
    ll a[n][n];
    ll max_fre  = -1;
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < n; j++){
            scanf("%lld", &a[i][j]);
        }
    }
    for(ll i = 0; i < n; i++){
        ll cnt = 0;
        for(ll j = 0; j < n; j++){
            if(check(a[i][j])) ++cnt;
        }
        max_fre = max(max_fre, cnt);
    }
    for(ll i = 0; i < n; i++){
        ll cnt = 0;
        for(ll j = 0; j < n; j++){
            if(check(a[i][j])) ++cnt;
        }
        if(cnt == max_fre){
            printf("%lld\n", i + 1);
            for(ll k = 0; k < n; k++){
                if(check(a[i][k]))
                    printf("%lld ", a[i][k]);
            }
            break;
        }
    }
    return 0;
}