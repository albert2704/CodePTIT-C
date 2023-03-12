#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ll long long
int cmp(const void *a, const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}
int main(){
    double s, k;
    int n;
    scanf("%lf %d %lf", &s, &n, &k);
    
    int cnt = 0;
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    if(n == 0){
        if(k == 0){
            printf("%d\n", (int)s);
            return 0;
        }
        else{
            int cnt1 = 0;
            while(s > 2 * k + 1){
                ++cnt1;
                s = s - (2 * k + 1);
            }
            if(s > 0) ++cnt1;
            printf("%d\n", cnt1);
            return 0;
        }
    }
    if(k == 0){
        printf("%d", (int)(s - n));
        return 0;
    }
    qsort(a, n, sizeof(int), cmp);
    double range1 = a[0] - k;
    double range2 = a[n - 1] + k;
    if(range1 - 1 > 0) cnt += (int)ceil((range1 - 1) / (2 * k + 1));
    if(s - range2 > 0) cnt += (int)ceil((s - range2) / (2 * k + 1));
    for(int i = 0; i < n - 1; i++){
        if(a[i] + k < a[i + 1] - k) cnt += (int)ceil((a[i + 1] - k - (a[i] + k + 1)) / (2 * k + 1));
    }
    printf("%d\n", cnt);
    return 0;
}