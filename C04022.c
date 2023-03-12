#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll n; scanf("%lld", &n);
    ll a[105];
    double max_val = -1;
    for(ll i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        max_val = fmax(max_val, (double)a[i]);
    }
    for(ll i = 0; i < n; i++){
        if(a[i] == max_val){
            printf("%lld ", a[i]);
            a[i] = -1e9;
            break;
        }
    }
    for(ll i = 0; i < n; i++){
        if(a[i] == max_val){
            a[i] = -1e9;
        }
    }
    max_val = -1;
    for(ll i = 0; i < n; i++){
        max_val = fmax(max_val, a[i]);
    }
    for(ll i = 0; i < n; i++){
        if(a[i] == max_val){
            printf("%lld", a[i]);
            return 0;
        }
    }
    return 0;
}