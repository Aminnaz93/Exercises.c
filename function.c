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

//####################################

void myFunctionTest(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

//####################################

int generateRandomNumber(int min, int max){
    srand(time(NULL));
    return rand() % (max - min + 1) + min;
}

void guessNumber(int secretNumber, int maxAttempts){
    int guess;
    int attempts = 0;
    bool correctGuess = false; // Använd bool istället för int för att representera sanningsvärden

    while(attempts < maxAttempts && !correctGuess){
        printf("\nGuess a number between 1-10:");
        scanf("%d", &guess);

        if(guess < 1 || guess > 10){
            printf("Please type in a number between 1-10: ");
            continue;
        }

        attempts++;

        if(guess == secretNumber){
            printf("Congratulations, You guessed the right number!!");
            correctGuess = true; // Uppdatera correctGuess till true när rätt nummer gissas
        } else if(guess < secretNumber){
            printf("Too low... Guess again!");
        } else{
            printf("Too high... Guess again! ");
        }
    }

    // Flytta denna del utanför while-loopen för att endast skrivas ut när loopen är klar
    if(!correctGuess){
        printf("Sorry... You have used all your tries!! The secret number was %d\n", secretNumber);
    }
}

//####################################

