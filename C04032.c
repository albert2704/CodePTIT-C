#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
struct word{
    char data[1001];
    ll freq;
};
typedef struct word word;
word x[1001];
ll find(char c[], ll n){
    for(ll i = 0; i < n; i++){
        if(strcmp(x[i].data, c) == 0) return i;
    }
    return -1;
}
ll check(char c[]){
    for(ll i = 0; i < strlen(c) - 1; i++){
        if(c[i] - '0' > c[i + 1] - '0') return 0;
    }
    return 1;
}
int cmp(const void *a, const void *b){
    word *x = (word*)a;
    word *y = (word*)b;
    return y->freq - x->freq;
}
int main(){
    ll n = 0;
    char s[1001];
    while(scanf("%s", s) != -1){
        ll pos = find(s, n);
        if(check(s)){
            if(pos == -1){
                x[n].freq = 1;
                strcpy(x[n].data, s);
                ++n;
            }
            else{
                x[pos].freq += 1;
            }
        }
    }
    qsort(x, n, sizeof(word), cmp);
    for(ll i = 0; i < n; i++){
        printf("%s %lld\n", x[i].data, x[i].freq);
    }
}