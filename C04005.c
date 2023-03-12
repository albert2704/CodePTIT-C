#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll a[1005];
        double max_val = -1;
        ll n; scanf("%lld", &n);
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
            max_val = fmax((double)max_val,(double)a[i]);
        }
        printf("%.0lf\n", max_val);
        for(ll i = 0; i < n; i++){
            if(a[i] == max_val){
                printf("%lld ", i);
            }
        }
        printf("\n");
    }
    return 0;
}