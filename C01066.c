#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    ll a, b, c; scanf("%lld %lld %lld", &a, &b, &c);
    if(a >= b) a = b;
    if(a >= c) a = c;
    printf("%lld\n", a); 
    return 0;
}