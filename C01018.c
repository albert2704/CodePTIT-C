#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    ll n;
    scanf("%lld", &n);
    for(ll i = 1; i <= n; i++){
        ll a;
        scanf("%lld", &a);
        if(a == (ll)sqrt(a) * (ll)sqrt(a)){
            printf("%s\n", "YES");
        }
        else printf("%s\n", "NO");
    }
    return 0;
}