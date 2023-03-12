#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    while(a--){
        long long b;
        scanf("%lld", &b);
        printf("%lld\n", b * 2);
    }
    return 0;
}