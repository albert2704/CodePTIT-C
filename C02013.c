#include<stdio.h>
#define ll long long
ll max(ll a, ll b){
    if(b > a) return b;
    return a;
}
int main(){
    ll n, m; scanf("%lld %lld", &n, &m);
    if(n >= m){
        for(ll i = n; i >= 1; i--){
            ll init = i;
            for(ll j = 1; j <= m; j++){
                if(j <= i - 1) printf("%lld", init--);
                else{
                    printf("%lld", init++);
                }
            }
            printf("\n");
        }
    }
    else{
        for(ll i = 1; i <= n; i++){
            ll init2 = m - i + 1;
            for(ll j = 1; j <= m; j++){
                if(j <= m - i) printf("%lld", init2--);
                else printf("%lld", init2++);
            }
            printf("\n");
        }
    }
}