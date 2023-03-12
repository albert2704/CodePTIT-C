#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    ll n; scanf("%lld", &n);
    ll odd = 0;
    ll even = 0;
    while(n){
        if(n % 2 == 0) ++odd;
        else ++even;
        n /= 10;
    }
    printf("%lld %lld\n", even, odd);
    return 0;
}