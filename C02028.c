#include<stdio.h>
#define ll long long

int main(){
    ll a;
    scanf("%lld", &a);
    ll tmp = a;
    ll tmp1 = -1;
    for(ll i = 1; i <= a; i++){
        tmp1 += 2;
        ll x = tmp1;
        for(ll j = 1; j <= tmp; j+= 1){
            printf("%c",(char)(x + 64));
            x += 2;
        }
        tmp -= 1;
        printf("\n");
    }
    return 0;
}