#include<stdio.h>
#include<math.h>
#define ll long long 
void selection_sort(ll a[], ll n){
    for(ll i = 0; i < n - 1; i++){
        ll min_pos = i;
        for(ll j = i + 1; j < n; j++){
            if(a[j] < a[min_pos]) min_pos = j;
        }
        ll tmp = a[i]; a[i] = a[min_pos]; a[min_pos] = tmp;
        if(i < n - 1){
            for(ll k = 0; k < n; k++){
                printf("%lld ", a[k]);
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
    selection_sort(a, n);
    return 0;
}