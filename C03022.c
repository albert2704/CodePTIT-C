#include<stdio.h>
#include<math.h>
#define ll long long
ll check(ll n){
    for(ll i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    if(n > 1) return 1;
    return 0;
}
ll check1(ll n){
    ll sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    if(sum % 5 == 0) return 1;
    return 0;
}
int main(){
    ll n;
    scanf("%lld", &n);
    ll cnt = 0;
    for(ll i = 2; i <= n; i++){
        if(check(i) && check1(i)){
            printf("%lld ", i);
            ++cnt;
        }
    }
    printf("\n%lld", cnt);
    return 0;
}