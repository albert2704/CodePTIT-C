#include<stdio.h>
#define ll long long
#include<math.h>

int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll cnt = 0;
        while(n >= 1000){
            n -= 1000;
            ++cnt;
        }
        while(n >= 500){
            n  -= 500;
            ++cnt;
        }
        while(n >= 200){
            n -= 200;
            ++cnt;
        }
        while(n >= 100){
            n -= 100;
            ++cnt;
        }
        while(n >= 50){
            n -= 50;
            ++cnt;
        }
        while(n >= 20){
            n -= 20;
            ++cnt;
        }
        while(n >= 10){
            n -= 10;
            ++cnt;
        }
        while(n >= 5){
            n -= 5;
            ++cnt;
        }
        while(n >= 2){
            n -= 2;
            ++cnt;
        }
        while(n >= 1){
            n -= 1;
            ++cnt;
        }
        printf("%lld\n", cnt);
    }
}