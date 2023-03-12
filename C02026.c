#include<stdio.h>
#define ll long long
int main(){
    int n, m; scanf("%d %d", &n, &m);
    for(int i = n; i >= 1; i--){
        int init = min(i, m);
        for(int j = 1; j <= m; j++){
            if(j <= m - i) printf("%c", 64+init++);
            else{
               printf("%c", 64+init);
            }
        }
        printf("\n");
    }
}