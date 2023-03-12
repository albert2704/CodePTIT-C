#include<stdio.h>
#define ll long long
#include<math.h>
ll check(ll n){
    ll first = 0, last = n % 10;
    ll tmp = n;
    ll a = n / 10;
    ll b = 0;
    while(tmp){
        if(tmp / 10 == 0) first = tmp;
        tmp /= 10; 
    }
    if(first != 2 * last && last != 2 * first){
        return 0;
    }
    while(a / 10 != 0){
        b = b * 10 + a % 10;
        a /= 10;
    }
    ll res = b;
    ll tmp2 = 0;
    while(res){
        tmp2 = tmp2 * 10 + res % 10;
        res /= 10;
    }
    if(tmp2 != b) return 0;
    return 1;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        if(check(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}