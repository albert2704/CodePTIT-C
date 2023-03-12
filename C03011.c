#include<stdio.h>
#define ll long long
#include<math.h>
ll factorial(ll n){
    ll fac = 1;
    for(ll i = 1; i <= n; i++){
        fac *= i;
    }
    return fac;
}
int main(){
    ll a, b; scanf("%lld %lld", &a, &b);
    if(a > b){
        ll tmp = a;
        a = b;
        b = tmp;
    }
    for(ll i = a; i <= b; i++){
        ll sum = 0;
        ll tmp = i;
        while(tmp){
            sum += factorial(tmp % 10);
            tmp /= 10;
        }
        if(sum == i && sum != 0) printf("%lld ", i);
    }
    return 0;
}