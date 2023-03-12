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
        int tmp = 2;
        int tmp1 = 1;
        for(int j = 1; j <= i; j++){
            if(i % 2 == 0){
                printf("%d", tmp);
                tmp += 2;
            }
            else{
                printf("%d", tmp1);
                tmp1 += 2;
            }
        }
        printf("\n");
    }
}