#include <iostream>
using namespace std;
 
float checkWeight (float height, bool male); 
/*returns the ideal weight based on the individual's sex */

int main (){
     
    float height;
    char chooseSex, clrbuf; 
    bool isMale = true;

    printf("What is your height (m.cm)? ");
    scanf("%f", &height); 
    while ((clrbuf = getchar()) =! '\n'); /* skips until newline */
     
    printf("Are you [M]ale of [f]emale? ");
    while ((chooseSex = getchar()) != '\n') {
        if (chooseSex == 'f') isMale = false;
    }
     
    float idealWeight = checkWeight(height, isMale); 
     
    printf("A %.02fm ", height);
    if (isMale) printf("male"); else printf("female");
    printf(" should weight about %.02fkg.\n", idealWeight);
     
    return 0;
}
 
float checkWeight (float height, bool male){
    return male ? (72.7f*height - 58.0f) : (62.1f*height - 44.5f);
}
