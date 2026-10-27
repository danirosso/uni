char menu(char *options, int numOptions);
void fillArray(int randMod, int *array, size_t size);
void printArray(int *array, size_t size);

void fillArray(int randMod, int *array, size_t size){
     
    for (int i = 0; i < size; i++){
        array[i] = rand() % randMod;
    }
}
 
void printArray(int *array, size_t size){
     
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]); 
     
    putchar('\n'); 
}
 
char menu(char *options, int numOptions){
     
    char choice; 
    choice = getchar();
    while (getchar() != '\n'); 
     
    if (choice == 'q' || choice == 'Q') exit(0); 
     
    for (int i = 0; i < numOptions; i++){
        if (options[i] == choice) return choice;
    }
     
    printf("Wrong Option, please choose again.\n"); 
     
    return '\0';
}
