#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long

int main(){
    char c[100001];
    gets(c);
    ll n = strlen(c) - 1;
    printf("%lld", n);
    return 0;
}