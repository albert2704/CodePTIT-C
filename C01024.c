#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    ll n; scanf("%lld", &n);
    while(n--){
        ll a; scanf("%lld", &a);
        ll tmp = a % 10;
        while(a >= 10) a /= 10;
        if(a == tmp) printf("%s\n", "YES");
        else printf("%s\n", "NO");
    }
    return 0;
}