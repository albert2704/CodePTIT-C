#include<stdio.h>
#define ll long long

int main(){
    ll a;
    scanf("%lld", &a);
    for(ll i = 1; i <= a; i++){
        for(ll j = 1; j <= i; j++){
            if(i == 1 || i == a || j == i || i == 2 || j == 1) printf("*");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}