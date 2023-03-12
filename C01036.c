#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    ll tich = 1;
    ll n;
    scanf("%lld", &n);
    while(n){
        tich *= n % 10;
        n /= 10;
    }
    printf("%lld\n", tich);
    return 0;
}