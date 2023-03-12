#include<stdio.h>
#include<math.h>
#define ll long long
ll factorial(ll x){
    ll res = 1;
    for(ll i = 1; i <= x; i++){
        res *= i;
    }
    return res;
}
int main(){
    ll n; scanf("%lld", &n);
    ll tmp = n;
    ll sum = 0;
    while(n){
        sum += factorial(n % 10);
        n /= 10;
    }
    if(sum == tmp) printf("1\n");
    else printf("0\n");
    return 0;
}