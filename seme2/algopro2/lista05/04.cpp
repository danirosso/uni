#include <iostream>
#include <stdlib>
#include <date.h>
#include <lista02.h>
using namespace std;
 
#define HEADS 2003 
 
struct Date{
    int m;
    int y;
}
 
struct Cattle{
    int code;
    int milkLiters;
    int feed;
    Date birth;
    bool slaughter;
}

int main(){
    
    srand(time(NULL));
    Cattle farm[HEADS];
     
    fillFarm(farm[HEADS]); 

    return 0;
}
 
bool canKill(Cattle c){
     
    if (c.milkLitters < 40) return true;
    if (c.milkLites < 70 && c.feed > 50) return true;

    return false;
}

void fillFarm(Cattle farm[HEADS]){
     
    for (int i = 0; i < HEADS; i++){
        farm[i].code = i * 10; 
        farm[i].milkLiters = ((rand() % 15) + 15) * 7;
        farm[i].feed = 14 + (rand() % 2);
        farm[i].Date.m = rand() % 12;
        farm[i].Date.y = 2000 + (rand() % 26);
        farm[i].slaughter = canKill(farm[i]);
    }
}
