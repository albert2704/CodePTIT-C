#include<stdio.h>
#define ll long long
int max(int a, int b){
    if(b > a) return b;
    return a;
}
int main(){
    int n, m; scanf("%d %d", &n, &m);
    for(ll i = 1; i <= n; i++){
        int init = max(m, n);
        for(ll j = 1; j <= m; j++){
            if(j <= i - 1) printf("%c", (96+init--));
            else printf("%c", 96+init);
        }
        printf("\n");
    }
}