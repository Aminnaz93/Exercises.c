int add(int a, int b){
    return a + b;
}

//####################################

void greeting(int userInput) {
    printf("Type in a number between 1-2: ");
    scanf("%d", &userInput);

        if(userInput == 1) {
        printf("Hello World!\n");
    } else if(userInput == 2) {
        printf("Take care now!\n");
    } else {
        printf("Fuck you!!\n");
    }
}

//####################################

void myFunction(char name[]) {
    printf("Hello %s\n", name);
}
