#include<stdio.h>
#define ll long long
#include<math.h>
ll giam(ll a){
    ll cnt = 0;
    ll res = a;
    while(a){
        ll tmp = pow(10, cnt);
        if(a % 10 == 6){
            res -= tmp;
        }
        a /= 10;
        ++cnt;
    }
    return res;
}
ll tang(ll b){
    ll cnt = 0;
    ll res = b;
    while(b){
        ll tmp = pow(10, cnt);
        if(b % 10 == 5){
            res += tmp;
        }
        b /= 10;
        ++cnt;
    }
    return res;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll x1, x2; scanf("%lld %lld", &x1, &x2);
        printf("%lld %lld\n", giam(x1) + giam(x2), tang(x1) + tang(x2));
    }
    return 0;
}