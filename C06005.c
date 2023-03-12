#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#define ll long long
void lower(char c[]){
    for(ll i = 0; i < strlen(c); i++){
        c[i] = tolower(c[i]);
    }
}
struct word{
    char data[101];
    ll freq;
};
typedef struct word word;
word x[10001];
ll find(char c[], ll n){
    for(ll i = 0; i < n; i++){
        if(strcmp(c, x[i].data) == 0) return i;
    }
    return -1;
}
int main(){
    char c[101];
    ll n = 0;
    gets(c);
    lower(c);
    char *token = strtok(c, " ");
    while(token != NULL){
        ll pos = find(token, n);
        if(pos == -1){
            strcpy(x[n].data, token);
            x[n].freq = 1;
            ++n;
        }
        else{
            x[pos].freq += 1;
        }
        token = strtok(NULL, " ");
    }
    for(ll i = 0; i < n; i++){
        printf("%s %lld\n", x[i].data, x[i].freq);
    }
    return 0;
}