#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#define ll long long 
ll check(char c[]){
    ll l = 0, r = strlen(c) - 1;
    ll sum = 0;
    if(c[l] - '0' != 8 || c[r] - '0' != 8) return 0;
    while(l <= r){
        if(c[l] != c[r]) return 0;
        sum += c[l] - '0';
        if(l != r)
            sum += c[r] - '0';
        l++;
        r--;
    }
    if(sum % 10 != 0) return 0;
    return 1;
}
// ll check_even(char c[]){
//     for(ll i = 0; i < strlen(c); i++){
//         if((c[i] - '0') % 2 != 0) return 0;
//     }
//     return 1;
// }
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