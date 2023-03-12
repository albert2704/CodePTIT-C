#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
struct pokemon{
    char name[1000];
    ll need, have, count;
};
typedef struct pokemon pokemon;
ll max(ll a, ll b){
    if(a > b) return a;
    return b;
}
int main(){
    ll n; scanf("%lld", &n);
    pokemon x[100];
    ll cnt = 0;
    for(ll i = 0; i < n; i++){
        getchar();
        char c[1000];
        fgets(c, 1000, stdin);
        ll a, b;
        scanf("%lld %lld", &a, &b);
        strcpy(x[i].name, c);
        x[i].need = a;
        x[i].have = b;
    }
    char d[1000];
    for(ll i = 0; i < n; i++){
        while(x[i].have / x[i].need != 0){
            ll m = x[i].have / x[i].need;
            x[i].count += m;
            cnt += m;
            x[i].have -= m * x[i].need;
            x[i].have += m * 2;
        }
    }
    ll max_fre = -1;
    for(ll i = 0; i < n; i++){
        max_fre = max(x[i].count, max_fre);
    }
    for(ll i = 0; i < n; i++){
        if(x[i].count == max_fre){
            strcpy(d, x[i].name);
            break;
        }
    }
    for(ll i = 0; i < n; i++){
        if(strcmp(x[i].name, d) == 0){
            printf("%lld\n%s", cnt, d);
        }
    }
    return 0;
}