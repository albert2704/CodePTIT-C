#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
ll max(ll a, ll b){
    if(a > b) return a;
    return b;
}
int main(){
    char c[105];
    scanf("%s", c);
    ll len = 0;
    ll LIS[strlen(c)];
    for(ll i = 0; i < strlen(c); i++){
        LIS[i] = 1;
        for(ll j = 0; j < i; j++){
            if(c[i] > c[j] && LIS[i] < LIS[j] + 1)
                LIS[i] = LIS[j] + 1;
            len = max(len, LIS[i]);
        }
    }
    printf("%lld\n", 26 - len);
    return 0;
}
//Quy hoach dong