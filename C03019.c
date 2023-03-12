#include<stdio.h>
#define ll long long
#include<math.h>
ll check_reverse(ll n){
    ll tmp = n;
    ll res = 0;
    ll sum = 0;
    while(tmp){
        res = res * 10 + tmp % 10;
        sum += tmp % 10;
        tmp /= 10;
    }
    if(res == n && sum % 10 == 0) return 1;
    return 0;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll a = pow((double)10, (double)n);
        ll b = pow((double)10, (double)n - 1);
        ll cnt = 0;
        for(ll i = b; i < a; i++){
            if(check_reverse(i)) ++cnt;
        }
        printf("%lld\n", cnt);
    }
    return 0;
}