#include <iostream>
using namespace std;

struct Time {
    int hh;
    int mm;
    int ss;
};

bool checkTime(Time t);
Time sumTime(Time t1, Time t2);

int main () {

    Time t1, t2;

    do { 
        printf("Insert the first time [HH:MM:SS]");
        scanf("%d:%d:%d", &t1.hh, &t1.mm, &t1.ss);
    } 
    while (!checkTime(t1));
     
    do { 
        printf("Insert the second time [HH:MM:SS]");
        scanf("%d:%d:%d", &t2.hh, &t2.mm, &t2.ss);
    } 
    while (!checkTime(t2));

    printf("%02d:%02d:%02d\n", t1.hh, t1.mm, t1.ss);
    printf("%02d:%02d:%02d\n", t2.hh, t2.mm, t2.ss);
     
    Time sum = sumTime(t1, t2); 
    printf("%02d:%02d:%02d\n", sum.hh, sum.mm, sum.ss);
     
    return 0;
}

bool checkTime(Time t){

    if (t.ss > 59) return false;
    if (t.mm > 59) return false;
    return true;
}

Time sumTime(Time t1, Time t2){

    Time sum;

    sum.ss = (t1.ss + t2.ss) % 60;
    sum.mm = ((t1.mm + t2.mm) % 60) + ((t1.ss + t2.ss) / 60);
    sum.hh = ((t1.hh + t2.hh) % 60) + ((t1.mm + t2.mm) / 60);

    return sum; 
}
