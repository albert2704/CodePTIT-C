#include<stdio.h>
#define ll long long
#include<math.h>
void bubble_sort(ll a[], ll n){
    for(ll i = 0; i < n - 1; i++){
        ll check = 0;
        for(ll j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                ll tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                ++check;
            }
        }
        if(check){
            printf("Buoc %lld: ", i + 1);
            for(ll j = 0; j < n; j++){
                printf("%lld ", a[j]);
            }
            printf("\n");
        }
    }
}
int main(){
    ll n;
    scanf("%lld", &n);
    ll a[n];
    for(ll i = 0 ; i < n; i++) scanf("%lld", &a[i]);
    bubble_sort(a, n);
    return 0;
}