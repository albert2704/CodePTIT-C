#include<stdio.h>
#define ll long long
#include<math.h>
ll F[101];
void fibo(){
    F[0] = 0;
    F[1] = 1;
    for(ll i = 2; i <= 46; i++){
        F[i] = F[i - 1] + F[i - 2];
    }
}
int main(){
    ll a; scanf("%lld", &a);
    fibo();
    for(ll i = 0; i < a; i++){
        printf("%lld ", F[i]);
    }
    return 0;
}