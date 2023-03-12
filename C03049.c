#include<stdio.h>
#define ll long long
#include<math.h>
ll check_even(ll n){
    ll cnt_even = 0;
    ll cnt_odd = 0;
    while(n){
        if(n % 10 % 2 == 0) ++cnt_even;
        else ++cnt_odd;
        n /= 10;
    }
    if(cnt_odd > cnt_even) return 1;
    return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        if(n % 2 != 0 && check_even(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}