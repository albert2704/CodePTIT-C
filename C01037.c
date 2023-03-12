#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);
    if(b < a){
        ll tmp = a;
        a = b;
        b = tmp;
    }
    ll n = b - a + 1;
    
    printf("%lld\n", n * (a + b) / 2);
    return 0;
}