#include <stdio.h>

void hm(int mnts, int *mm, int *hh){
    
    *hh = (mnts/60);
    *mm = (mnts%60);
}
 
int main(void){
     
    int mnts, mm, hh;
    printf("mnts: ");
    scanf("%d", &mnts);

    hm(mnts, &mm, &hh);

    printf("mnts: %d\n"
            "hh: %d\n"
            "mm: %d\n", mnts, hh, mm);

    return 0;
}
