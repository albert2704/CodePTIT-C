#include<stdio.h>
#define ll long long
int main(){
    ll a;
    scanf("%lld", &a);
    for(ll i = 1; i <= 10; i++){
        printf("%lld ", a * i);
    }
    return 0;
}