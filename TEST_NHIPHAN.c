#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    ll n; scanf("%lld", &n);
    char a[1000];
    ll i = 0;
    if(n == 0){
        printf("%d\n", 0);
        return 0;
    }
    while(n != 0){
        if(n % 2 == 0){
            a[i] = '0';
            n /= 2;
        }
        else{
            a[i] = '1';
            n /= 2;
        }
        ++i;
    }
    for(ll j = i - 1; j >= 0; j--){
        printf("%c", a[j]);
    }
    printf("\n");
    return 0;
}