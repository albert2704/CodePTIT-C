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
    ll tmp = 0;
    fibo();
    for(ll i = 0; i <= 46; i++){
        if(a == F[i]){
            printf("1\n");
            tmp = 1;
        }
    }
    if(tmp == 0) printf("0\n");
    return 0;
}