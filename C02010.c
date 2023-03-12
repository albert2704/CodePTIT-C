#include<stdio.h>
#define ll long long
ll min(ll a, ll b){
    if(b < a) return b;
    return a;
}
int main(){
    ll n, m; scanf("%lld %lld", &n, &m);
    for(ll i = 1; i <= n; i++){
        ll init = i, tmp = min(i - 1, m - 1);
        for(ll j = 1; j <= m; j++){
            if(j <= m - i) printf("%lld", init++);
            else{
                printf("%lld", init--);
                init = tmp;
                tmp--;
            }
        }
        printf("\n");
    }
}