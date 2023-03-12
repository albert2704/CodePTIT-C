#include<stdio.h>
#define ll long long

int main(){
    ll a;
    scanf("%lld", &a);
    ll tmp = a;
    for(ll i = 1; i <= a; i++){
        for(ll j = tmp - 1; j > 0; j--){
            printf("~");
        }
        for(ll k = 1; k <= i; k++){
            printf("*");
        }
        --tmp;
        printf("\n");
    }
    return 0;
}