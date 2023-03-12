#include<stdio.h>
#define ll long long

int main(){
    ll n; scanf("%lld", &n);
    ll a[n];
    for(ll i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    for(ll i = 0; i < n; i++){
        for(ll j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                ll tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        if(i < n - 1){
            printf("Buoc %lld: ", i + 1);
            for(ll k = 0; k < n; k++){
                printf("%lld ", a[k]);
            }
        }
        printf("\n");
    }
    return 0;
}