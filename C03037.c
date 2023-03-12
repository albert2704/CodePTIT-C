#include<stdio.h>
#include<math.h>
#define ll long long
ll check(ll n){
    if(n == 2 || n == 3 || n == 5 || n == 7) return 1;
    return 0;
}

int main(){
    ll cnt[100] = {0};
    ll n; scanf("%lld", &n);
    ll tmp = 0;
    while(n){
        if(check(n % 10)) ++cnt[n % 10];
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    while(tmp){
        if(cnt[tmp % 10] != 0){
            printf("%lld %lld\n", tmp % 10, cnt[tmp % 10]);
            cnt[tmp % 10] = 0;
        }
        tmp /= 10;
    }
    return 0;
}