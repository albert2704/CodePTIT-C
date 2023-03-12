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
    if(res == n && sum % 10 == 8) return 1;
    return 0;
}
ll check_six(ll n){
    while(n){
        if(n % 10 == 6) return 1;
        n /= 10;
    }
    return 0;
}
int main(){
    ll a, b;
    
    scanf("%lld %lld", &a, &b);
    if(a > b){
        ll tmp = a;
        a = b;
        b = tmp;
    }
    for(ll i = a; i <= b; i++){
        if(check_reverse(i) && check_six(i)) printf("%lld ", i);
    }
    return 0;
}