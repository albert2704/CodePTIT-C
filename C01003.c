#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        long long a;
        scanf("%lld", &a);
        printf("%lld\n", a * a);
    }
    return 0;
}