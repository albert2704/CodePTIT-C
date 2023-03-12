#include<stdio.h>
#include<math.h>
#define ll long long

int main(){
    ll x, y;
    while(scanf("%lld %lld", &x, &y) == 2){
        if(x > y){
            ll tmp = x;
            x = y;
            y = tmp;
        }
        ll qd = y - x - 2; //loai ra buoc dau va cuoi = 1
        ll d = 1;
        ll cnt = 2;
        while(qd > 0){
            d++;
            cnt++;
            qd -= d; //tru thang tiep theo
            if(qd <= 0){
                break;
            } //check xem khi tru di qd co am khong, vi du qd = 1 ma tru buoc di la 2 thi am -> chi tru 1
            qd -= d; // tru thang ke cuoi do len
            //tu tuong: do dich chuyen cua thang tiep = thang doi xung voi no (ly do vi can tim so buoc ngan nhat
            cnt++;
        }
        printf("%lld\n", cnt);
    }
    return 0;
}