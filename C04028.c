#include<stdio.h>
#include<math.h>
#define ll long long 
void insertion_sort(ll a[], ll n){
    for(ll i = 1; i < n; i++){
        ll val = a[i];
        printf("Buoc %lld: ", i - 1);
        ll pos = i - 1;
        for(ll j = 0; j <= i - 1; j++){
            printf("%lld ", a[j]);
        }
        while(pos >= 0 && val < a[pos]){
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = val;
        printf("\n");
        if(i == n - 1){
            printf("Buoc %lld: ", i);
            for(ll j = 0; j < n; j++){
                printf("%lld ", a[j]);
            }
        }
    }
}
int main(){
    ll n;
    scanf("%lld", &n);
    ll a[n];
    for(ll i = 0 ; i < n; i++) scanf("%lld", &a[i]);
    insertion_sort(a, n);
    return 0;
}