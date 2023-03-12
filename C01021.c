#include<stdio.h>
#include<math.h>
#define ll long long
int main(){
    ll n;
    ll sum = 0;
    scanf("%lld", &n);
    while(n){
        sum += n % 10;
        n /= 10;
    }
    printf("%lld\n", sum);
    return 0;
}