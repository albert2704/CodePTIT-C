#include<stdio.h>
int main(){
    long long n;
    long long year = 0;
    long long week = 0;
    long long day = 0;
    scanf("%lld", &n);
    while(n / 365 != 0){
        n -= 365;
        ++year;
    }
    while(n / 7 != 0){
        n -= 7;
        ++week;
    }
    day = n;
    printf("%lld %lld %lld\n", year, week, day);
}