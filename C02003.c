#include<stdio.h>
#define ll long long

int main(){
    ll a;
    scanf("%lld", &a);
    for(ll i = 1; i <= a; i++){
        for(ll j = 1; j <= a; j++){
            if(i == 1 || i == a || j == 1 || j == a){
                printf("*");
            }
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}