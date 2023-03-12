#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll a[1005];
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }
        for(ll i = 0; i < n; i++){
            if(i == n - 1){
                printf("%lld", a[i]);
                break;
            }
            double max_val = a[i + 1];
            for(ll j = i + 1; j < n - 1; j++){
                max_val = fmax(max_val, (double)a[j + 1]);
            }
            if(a[i] > max_val) printf("%lld ", a[i]);
        }
        printf("\n");
    }
    return 0;
}