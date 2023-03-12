#include<stdio.h>
#define ll long long
#include<math.h>
#include<stdlib.h>
ll max(int a, int b){
    if(b > a) return b;
    return a;
}
int main(){
    int xA, yA, xE, yE, xF, yF, xB, yB;
    scanf("%d %d %d %d %d %d %d %d", &xA, &yA, &xE, &yE, &xF, &yF, &xB, &yB);
    int canh = max(max(abs(xB - xA), abs(yB - yA)), max(abs(xE- xF), abs(yE - yF)));
    int canh1 = max(max(abs(xE - xA), abs(yE - yA)), max(abs(xF - xB), abs(yF - yB)));
    int canh2 = max(canh, canh1);
    printf("%d\n", canh2 * canh2);
    return 0;
}