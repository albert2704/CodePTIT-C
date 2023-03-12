#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
struct word{
    ll freq;
    char data[1001];
}; 
typedef struct word word;
word x[1001];
ll find(char c[], ll n){
    for(ll i = 0; i < n; i++){
        if(strcmp(c, x[i].data) == 0) return i;
    }
    return -1;
}
ll max(ll a, ll b){
    if(a > b) return a;
    return b;
}
int main(){
    char c[10001];
   
    ll n = 0;
    ll max_leng = -1;
    while(scanf("%s", c) != -1){
        ll pos = find(c, n);
        if(pos == -1){
            strcpy(x[n].data, c);
            x[n].freq = 1;
            ++n;
        }
        else{
            x[pos].freq += 1;
        }
    }
    for(ll i = 0; i < n; i++){
        max_leng = max(max_leng, strlen(x[i].data));
    }
    for(ll i = 0; i < n; i++){
        if(strlen(x[i].data) == max_leng) printf("%s %lu %lld\n", x[i].data, strlen(x[i].data), x[i].freq);
    }
}