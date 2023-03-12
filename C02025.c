#include<stdio.h>
#define ll long long
int min(int a, int b){
    if(b < a) return b;
    return a;
}
int main(){
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
        int init = min(i, m);
        for(int j = 1; j <= m; j++){
            if(j <= m - i) printf("%c", 63+init++);
            else{
                printf("%c", 63+init);
            }
        }
        printf("\n");
    }
}