#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll check = 0;
        ll n; scanf("%lld", &n);
        ll a[n];
        for(ll i = 0; i < n; i++){
            scanf("%lld", &a[i]);
        }
        for(ll i = 0; i < n; i++){
            for(ll j = i + 1; j < n; j++){
                if(a[i] == a[j]){
                    printf("%lld\n", a[i]);
                    ++check;
                    break;
                }
              
            }
              if(check == 1) break;
        }
        if(check == 0) printf("NO\n");
    }
}