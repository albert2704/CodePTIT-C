#include<stdio.h>
#define ll long long

int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);
    for(ll i = 1; i <= a; i++){
        for(ll j = i - 1; j > 0; j--) printf("~");
        for(ll k = 1; k <= b; k++){
            if(i == 1 || i == a || k == 1 || k == b) printf("*");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}