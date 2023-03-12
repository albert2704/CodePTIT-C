#include<stdio.h>
#define ll long long
ll check(ll n){
    while(n){
        if(n % 10 % 2 != 0) return 0;
        n /= 10;
    }
    return 1;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        if(n % 2 == 0 && check(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}