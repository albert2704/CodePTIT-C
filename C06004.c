#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char c[100000];
    fgets(c, 100000, stdin);
    c[strlen(c) - 1] = '\0';
    ll digit = 0, alpha = 0, special = 0; 
    for(ll i = 0; i < strlen(c); i++){
        if(isdigit(c[i])) ++digit;
        else if(isalpha(c[i])) ++alpha;
        else ++special;
    }
    printf("%lld %lld %lld\n", alpha, digit, special);
    return 0;
}