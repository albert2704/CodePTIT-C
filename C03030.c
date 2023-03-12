#include<stdio.h>
#include<math.h>
#define ll long long
ll check(ll n){
    ll tmp = n;
    while(tmp){
        ll a = tmp % 10;
        ll b = tmp / 10 % 10;
        if(a < b){
            return 0;
            break;
        }
        tmp /= 10;
    }
    return 1;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll a = pow(10, n - 1), b = pow(10, n);
        for(ll i = a; i < b; i++){
            if(check(i) != 0) printf("%lld ", i);
        }
        printf("\n");
    }
    return 0;
}