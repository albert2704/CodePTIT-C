#include<stdio.h>
#define ll long long
int main(){
    ll n; scanf("%lld", &n);
    ll cnt = 0;
    while(n){
        ++cnt;
        n /= 10;
    }
    printf("%lld\n", cnt);
    return 0;
}