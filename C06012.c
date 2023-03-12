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
        if(c[l] - '0' != 2 && c[l] - '0' != 3 && c[l] - '0' != 5 && c[l] - '0' != 7 && c[r] - '0' != 2 && c[r] - '0' != 3 && c[r] - '0' != 5 && c[r] - '0' != 7) return 0;
        l++;
        r--;
    }
    return 1;
}
int main(){
    ll t; scanf("%lld", &t);
    while(t--){
        char c[100000];
        scanf("%s", c);
        if(check(c)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}