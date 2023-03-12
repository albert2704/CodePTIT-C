#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
        ll a[105];
        ll n; scanf("%lld", &n);
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }
        for(ll i = n - 1; i >= 0; i--){
                printf("%lld ", a[i]);
        }
        printf("\n");
    return 0;
}