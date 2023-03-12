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
    ll a; scanf("%lld", &a);
    for(ll i = 1; i <= a; i++){
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