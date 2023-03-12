#include<stdio.h>
#define ll long long

int main(){
    ll a;
    scanf("%lld", &a);
    ll tmp = a;
    for(ll i = 1; i <= a; i++){
        for(ll j = 1; j < tmp; j++){
            printf("~");
        }
        for(ll k = 1; k <= a; k++){
            if(i == 1 || i == a || k == 1 || k == a){
                printf("*");
            }
            else printf(".");
        }
        printf("\n");
        tmp--;
    }
    return 0;
}