#include<stdio.h>
#include<math.h>
#define ll long long
ll a[100];
ll i = 1;
void reverse(ll n){
    a[0] = n % 10;
    n /= 10;
    while(n){
        a[i] = n % 10;
        n /= 10;
        ++i;
    }
}
int main(){
    ll n; scanf("%lld", &n);
    reverse(n);
    printf("%lld %lld\n", a[i - 1], a[0]);
    return 0;
}