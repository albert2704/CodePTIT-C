#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        ll check = 1;
        ll n; scanf("%lld", &n);
        ll a[30];
        ll i = 0;
        while(n){
            a[i] = n % 10;
            n /= 10;
            i++;
        }
        for(ll j = 0; j <= i - 1; j++){
            if(a[j] < a[j + 1]) check = 0;
        }
        if(check == 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}