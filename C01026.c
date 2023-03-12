#include<stdio.h>
#define ll long long
#include<math.h>
ll check(ll x){
    for(ll i = 2; i < sqrt(x); i++){
        if(x % i == 0) return 0;
    }
    if(x > 1) return 1;
    else return 0;
}
int main(){
    ll n;
    scanf("%lld", &n);
    while(n--){
        ll x; scanf("%lld", &x);
        if(check(x)) printf("%s\n", "YES");
        else printf("%s\n", "NO");
    }
    return 0;
}