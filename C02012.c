#include<stdio.h>
#define ll long long
ll min(ll a, ll b){
    if(b < a) return b;
    return a;
}
int main(){
    ll n, m; scanf("%lld %lld", &n, &m);
    for(ll i = 1; i <= n; i++){
        ll init = i;
        for(ll j = 1; j <= m; j++){
            if(j <= i - 1){
                printf("%lld", init--);
            }
            else printf("%lld", init++);
        }
        printf("\n");
    }
    return 0;
}