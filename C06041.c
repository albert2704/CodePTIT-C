#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define ll long long
char max(char a, char b){
    if(a - '0' > b - '0') return a;
    return b;
}
int main(){
    char c[100001];
    scanf("%s", c);
    char d = 'a';
    for(ll i = 0; i < strlen(c); i++){
        if(c[i] - '0' >= d - '0'){
            d = c[i];
        }
    }
    char res[100001];
    ll n = 1;
    res[0] = d;
    for(ll i = 0; i < strlen(c) ; i++){
        if(c[i] == d){
            d = c[i + 1];
            for(ll j = i + 1; j < strlen(c) - 1; j++){
                d = max(d, c[j + 1]);
            }
            for(ll k = i + 1; k < strlen(c); k++){
                if(c[k] == d){
                    res[n] = d;
                    ++n;
                    i = k - 1;
                    break;
                }
            }
        }
    }
    for(ll i = 0; i < n; i++){
        printf("%c", res[i]);
    }
}