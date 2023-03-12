#include<stdio.h>
#define ll long long
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
    if(sum(a) > sum(b)){
        ll tmp = a;
        a = b;
        b = tmp;
    }
    printf("%lld %lld\n", a, b);
    return 0;
}