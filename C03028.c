#include<stdio.h>
#define ll long long
ll tohop(ll k, ll n){
    ll res = 1;
    for(ll i = 0; i < k; i++){
        res *= n - i;
        res /= i + 1;
    }
    return res;
}
int main(){
    ll n; scanf("%lld", &n);
    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= i; j++){
            if(i == 1 || j == i || j == 1) printf("%d ", 1);
            else printf("%lld ", tohop(j - 1 , i - 1));
        }
        printf("\n");
    }
}