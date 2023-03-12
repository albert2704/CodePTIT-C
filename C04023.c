#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll n; scanf("%lld", &n);
    ll a[105];
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
    }
    for(ll i = 0; i < n; i++){
        printf("%lld ", a[i]);
    }
    return 0;
}