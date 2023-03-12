#include<stdio.h>
#define ll long long
#include<math.h>
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll n; scanf("%lld", &n);
        ll z[105];
        ll tmp = 1;
        for(ll i = 0; i < n; i++){
            scanf("%lld", &z[i]);
        }
        for(ll j = 0; j < n / 2; j++){
            if(z[j] != z[n - j - 1]){
                printf("NO\n");
                
                tmp = 0;
                break;
            }
        }
        if(tmp == 1)
            printf("YES\n");
    }
    return 0;
}