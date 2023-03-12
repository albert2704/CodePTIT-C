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
    int n; scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int tmp = 1;
        for(int j = 1; j <= 2 * i - 1; j++){
            if(j <= i - 1){
                printf("%d", tmp);
                tmp += 2;
            }
            else{
                printf("%d", tmp);
                tmp -= 2;
            }
        }
        printf("\n");
    }
}