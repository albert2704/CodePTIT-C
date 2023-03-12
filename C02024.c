#include<stdio.h>
#define ll long long
int max(int a, int b){
    if(b > a) return b;
    return a;
}
int min(int a, int b){
    if(b < a) return b;
    return a;
}
int main(){
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
        int init1 = min(i, m);
        for(int j = 1; j <= m; j++){
            if(j <= m - i + 1) printf("%c", 64+init1+j-1);
            else{
                if(m < i){
                    printf("%c", 64+init1--);
                }
                else printf("%c", --init1+64);
            }
        }
        printf("\n");
    }
}