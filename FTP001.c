#include<stdio.h>
#define ll long long

int main(){
    ll n; scanf("%lld", &n);
    for(ll i = 0; i < n; i++){
        ll cnt = 1;
        for(ll j = 0; j < n; j++){
            if(j <= i) printf("0 ");
            else{
                printf("%lld ", cnt++);
            }
        }
        printf("\n");
    }
    return 0;
}