#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define ll long long
struct SinhVien{
    ll id;
    char name[1001];
    double m1, m2, m3;
    double sum;
};
typedef struct SinhVien SinhVien;
int cmp(const void *x,const void *y){
    SinhVien *a = (SinhVien*)x;
    SinhVien *b = (SinhVien*)y;
    if(a->sum < b->sum) return -1;
    return 1;
}
SinhVien x[10001];
int main(){
    ll t;
    ll cnt = 0;
    while(scanf("%lld", &t) != -1){
        getchar();
        if(t == 1){
            ll n; scanf("%lld", &n);
            getchar();
            for(ll i = 0; i < n; i++){
                ++cnt;
                x[i].id = i + 1;
                char name[1001];
                fgets(name, 1001, stdin);
                name[strlen(name) - 1] = '\0';
                double m1, m2, m3;
                scanf("%lf %lf %lf", &m1, &m2, &m3);
                getchar();
                strcpy(x[i].name, name);
                x[i].m1 = m1;
                x[i].m2 = m2;
                x[i].m3 = m3;
                x[i].sum = m1 + m2 + m3;
            }
            printf("%lld\n", n);
        }
        else if(t == 2){
            ll k; scanf("%lld", &k);
            getchar();
            char name[1001];
            fgets(name, 1001, stdin);
            name[strlen(name) - 1] = '\0';
            double m1, m2, m3;
            scanf("%lf %lf %lf", &m1, &m2, &m3);
            strcpy(x[k - 1].name, name);
            x[k - 1].m1 = m1;
            x[k - 1].m2 = m2;
            x[k - 1].m3 = m3; 
            x[k - 1].sum = m1 + m2 + m3;
            printf("%lld\n", k);
        }
        else{
            qsort(x, cnt, sizeof(SinhVien), cmp);
            for(ll i = 0; i < cnt; i++){
                printf("%lld %s %.1lf %.1lf %.1lf\n", x[i].id, x[i].name, x[i].m1, x[i].m2, x[i].m3);
            }
            return 0;
        }
    }
}