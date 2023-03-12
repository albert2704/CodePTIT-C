#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
ll max(ll a, ll b){
    if(a > b) return a;
    return b;
}
struct word{
    char data[1000];
    ll freq;
};
typedef struct word word;
ll check(char a[]){
    ll l = 0, r = strlen(a) - 1;
    while(l <= r){
        if(a[l] != a[r]) return 0;
        l++;
        r--;
    }
    return 1;
}
word x[10001];
ll find(char c[], ll n){
    for(ll i = 0; i < n; i++){
        if(strcmp(c, x[i].data) == 0) return i;
    }
    return -1;
}
int main(){
    char c[10001];
    char *token = strtok(c, " ");
    ll n = 0;
    ll max_leng = -1;
    while(scanf("%s", c) != -1){
        ll pos = find(c, n);
        if(pos == -1 && check(c)){
            strcpy(x[n].data, c);
            x[n].freq = 1;
            ++n;
        }
         else{
            if(check(c))
                x[pos].freq += 1;
        }
    }
    
    for(ll i = 0; i < n; i++){
        max_leng = max(max_leng, strlen(x[i].data));
    }
    for(ll i = 0; i < n; i++){
        if(strlen(x[i].data) == max_leng){
            printf("%s %lld\n", x[i].data, x[i].freq);
        }
    }
    return 0;
}