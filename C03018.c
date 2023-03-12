#include<stdio.h>
#define ll long long
#include<math.h>
ll F[15];
void fibo(){
    F[0] = 0;
    F[1] = 1;
    for(ll i = 2; i <= 10; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}
ll check(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    if(n > 1) return 1;
    return 0;
}
ll sum(ll n){
    ll res = 0;
    while(n){
        res += n % 10;
        n /= 10;
    }
    return res;
}
int main(){
    ll a, b; scanf("%lld %lld", &a, &b);
    if(a > b){
        ll tmp = a;
        a = b;
        b = tmp;
    }
    fibo();
    for(ll i = a; i <= b; i++){
        for(ll j = 0; j <= 10; j++){
            if(check(i) && sum(i) == F[j]) printf("%lld ", i);
        }
    }
    return 0;
}