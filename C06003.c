#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long

int main(){
    ll t; scanf("%lld", &t);
    getchar();
    while(t--){
        char c[1000];
        fgets(c, 1000, stdin);
        c[strlen(c) - 1] = '\0';
        ll cnt = 0;
        char *token = strtok(c, " ");
        while(token != NULL){
            ++cnt;
            token = strtok(NULL, " ");
        }
        printf("%lld\n", cnt);
    }
    return 0;
}