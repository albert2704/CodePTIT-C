#include<stdio.h>
#include<math.h>
#define ll long long
ll check_reverse(ll n){
    ll t = n;
    ll res = 0;
    while(t){
        if(t % 2 == 0) return 0;
        res = res * 10 + t % 10;
        t /= 10;
    }
    if(res == n) return 1;
    return 0;
}
ll check_odd(ll n){
    ll sum = 0;
    while(n){
        sum += n % 10; 
        n /= 10;
    }
    if(sum % 2 != 0) return 1;
    return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        if(check_reverse(n) && check_odd(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}