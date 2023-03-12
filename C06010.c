#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define ll long long 
ll check(char c[]){
    ll l = 0, r = strlen(c) - 1;
    while(l <= r){
        if(c[l] != c[r]) return 0;
        l++;
        r--;
    }
    return 1;
}
ll check_even(char c[]){
    for(ll i = 0; i < strlen(c); i++){
        if((c[i] - '0') % 2 != 0) return 0;
    }
    return 1;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        char c[100000];
        scanf("%s", c);
        if(check(c) && check_even(c)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}