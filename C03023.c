#include<stdio.h>
#include<math.h>
#define ll long long
ll check(ll n){
    ll tmp = n;
    ll res = 0;
    while(tmp){
        res = res * 10 + tmp % 10;
        tmp /= 10;
    }
    if(res == n) return 1;
    return 0;
}
ll check1(ll n){
    while(n){
        if(n % 10 == 9) return 0;
        n /= 10;
    }
    return 1;
}
int main(){
    ll n;
    scanf("%lld", &n);
    ll cnt = 0;
    for(ll i = 2; i < n; i++){
        if(check(i) && check1(i)){
            printf("%lld ", i);
            ++cnt;
        }
    }
    printf("\n%lld", cnt);
    return 0;
}