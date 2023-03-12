#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
ll check(char c[]){
    for(ll i = 0; i < strlen(c); i++){
        if(c[i] - '0' != 0 && c[i] - '0' != 1 && c[i] - '0' != 2) return 0;
    }
    return 1;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        char c[10000];
        scanf("%s", c);
        if(check(c)) printf("YES\n");
        else printf("NO\n");
    }
}