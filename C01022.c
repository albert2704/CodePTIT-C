#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    ll n;
    scanf("%lld", &n);
    while(n--){
        ll sum = 0;
        ll a;
        scanf("%lld", &a);
        while(a){
            sum += a % 10;
            a /= 10;
        }
        printf("%lld\n", sum);
    }
    return 0;
}