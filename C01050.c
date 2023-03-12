#include<stdio.h>
#define ll long long

int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);
    for(ll i = 1; i <= b; i++){
        for(ll j = 1; j <= a; j++){
            if(j == 1 || j == a || i == 1 || i == b)
                printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}