#include <stdio.h>
int getSeconds (int m, int h);

int main (){

    int inStartMinute, inStartHour, inEndMinute, inEndHour;

    printf("Start:");
    scanf("%d:%d",  &inStartHour, &inStartMinute);
    printf("End: ");
    scanf("%d:%d", &inEndHour, &inEndMinute);

    int startSecs = getSeconds(inStartMinute, inStartHour); 
    int endSecs = getSeconds(inEndMinute, inEndHour); 
     
    printf("startsecs: %d\n"
            "endsecs: %d\n", startSecs, endSecs);

    int timeDiff = endSecs - startSecs;
     
    if (timeDiff < 0) timeDiff = (24 * 3600) - startSecs + endSecs; 

    printf("The difference of time is %d:%d", (timeDiff/3600), (timeDiff % 3600 / 60));

    return 0; 

} 

int getSeconds (int m, int h){

    return (h * 3600) + (m * 60); 

}
