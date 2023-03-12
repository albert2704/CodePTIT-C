#include<stdio.h>
#define ll long long
int main(){
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int tmp = n - 1;
        int ans = i;
        for(int j = 1; j <= i; j++){
            if(j == 1) printf("%d ", i);
            else{
                ans += tmp;
                printf("%d ", ans);
                tmp--;
            }
        }
        printf("\n");
    }
}