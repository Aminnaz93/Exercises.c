#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "function.c"


    struct Student{
        char name[100];
        int age;
        int height;
        
    };


int main() {

/*printf("Hello\n");

int sum = add(2,3);

printf("summan är: %d\n" , sum);*/


//#####################################

/*int num = 20;
int num2 = 30;

int sum = num + num2;

printf("%d\n", num);

printf("The result is: %d\n", sum);*/


//#####################################


/*int num = 20;
float MyFloat = 2.32;
double MyDouble = 2.323423;
char MyChar = 'C';

printf("%d\n",num);
printf("%.2f\n", MyFloat);
printf("%.2f\n", MyDouble);
printf("%c\n", MyChar);*/

//#####################################


/*int length = 20;
int height = 10;
int area = length * height;
double num = 2.33234233;

printf("The length is: %d\n", length);
printf("The height is: %d\n", height);
printf("The area is: %d\n", area);*/


//####################################

/*int num = 20;
float myfloat = 20.2;
double mydouble = 20.3234;
char myChar = 'A';


printf("%lu\n", sizeof(num));
printf("%lu\n", sizeof(myfloat));
printf("%lu\n", sizeof(mydouble));
printf("%lu\n", sizeof(myChar));*/


//####################################


/*const int num = 18;
const int num2 = 20;
const int sum = num * num2;

printf("resultatet blir: %d\n", sum);

int num3 = 100 + 200;

printf("%d\n", num3);*/


//####################################

/*int a = 10;
int b = 20;

printf("%d\n", a > b);*/


//####################################

/*bool isProgrammingFun = true;
bool isFishTasty = false;


printf("%d\n", isProgrammingFun);
printf("%d\n", isFishTasty);

printf("\n");

int age = 25;
int votingAge = 18;

printf("%d\n", age >= votingAge);*/

//####################################


/*int age;
int votingAge = 18;

printf("Type in your age: ");
scanf("%d",&age );

if(age >= votingAge){
    printf("You can vote!\n");
}
else{
    printf("You cannot vote...\n");
}*/

//####################################

   /*int number;

    printf("Välkommen! Ange ett heltal (avsluta med 0 eller ett negativt tal): ");
    scanf("%d", &number);

    while (number > 0) {
        if (number > 0) {
            printf("%d är ett positivt tal.\n", number);
        } else if (number < 0) {
            printf("%d är ett negativt tal.\n", number);
        } else {
            printf("Du angav noll.\n");
        }

        printf("Ange ett nytt heltal (avsluta med 0 eller ett negativt tal): ");
        scanf("%d", &number);
    }

    if(number == 0 || number < 0){
        printf("Programmet avslutas. Tack för du använde det...\n");
    }*/


//####################################


/*int number;

printf("Type in a number: ");
scanf("%d", &number);

switch (number)
{
case 1:
    printf("Its Monday!");
    break;
case 2:
    printf("Its Tuesday!");
    break;
case 3:
    printf("Its Wednsday!");
    break;
case 4:
    printf("Its Thursday!");
    break;
case 5:
    printf("Its Friday!");
    break;
case 6:
    printf("Its Saturday!");
    break;
case 7:
    printf("Its Sunday!");
    break;
default:
    printf("You typed in another thing....");
    break;
}*/

//####################################

/*int number = 0;

while (number < 5){
    printf("%d\n", number);
    number++;
}*/

//####################################


/*for (int i = 1; i < 11; i++){
    if(i == 4){
        printf("\n");
        continue;
    }
    printf("%d\n", i);
}

printf("\n");

int j = 0;

while (j <= 10){
    if(j == 4){
        j++;
        printf("\n");
        continue;
    }
    printf("%d\n", j);
    j = j + 1;
}*/

//####################################


/*int number[6] = {2,3,4,6,7,8};
int lenght = sizeof(number) / sizeof(number[0]);

for(int i = 0; i < 6; i++){
    printf("%d\n", number[i]);
}*/

//####################################


/*char letters[] = {'a', 'b', 'c' , 'd'};
int lenght = sizeof(letters) / sizeof(letters[0]);

for(int i = 0; i < lenght; i++){
    printf("%c\n", letters[i]);
}*/

//####################################


/*char greeting[] = ("Hello World");

int length = sizeof(greeting) / sizeof(greeting[0]);

printf("%s\n", greeting);


printf("%c\n", greeting[0]);

for(int i = 0; i < length; i++){
    printf("%c\n", greeting[i]);
}*/

//####################################


/*char message[] = {"Hello my friend"};
char name[] = {"Nazari"};

printf("%s %s", message,name);*/

//####################################

/*int num;
printf("Type in the first integer: ");
scanf("%d", &num);

int num2;
printf("Type in the other integer: ");
scanf("%d", &num2);

int sum = num + num2;

printf("The sum of %d + %d = %d\n", num,num2,sum);*/

//####################################


/*printf("Welcome to the guessing game! ");

int attempts = 0;
int secretNumber = 4;
int maxAttempts = 3;
int correctGuess = 0;
int guess;

while (attempts < maxAttempts && !correctGuess){
    printf("\n");
   printf("Guess a number from 1-10: ");
   scanf("%d", &guess);

   if(guess < 1 || guess > 10){
        printf("Wrong guess... Guess again: ");
        continue;
   }

   attempts++;

   if(guess == secretNumber){
        printf("Congratulation, you find the secret number: %d\n", secretNumber);
        correctGuess = 1;
   }
   else{
    printf("Wrong number, Guess again...\n");
   }

}

if(!correctGuess){
    printf("All attempts are finished. The secret number is: %d\n", secretNumber);

}*/


//####################################


/*char greetings[20] = "Hello";
char world[20] = "World";

printf("%s\n", greetings);
printf("%d\n", strlen(greetings));
printf("%d\n", sizeof(greetings));

strcat(greetings, world);
strcpy(world,greetings);

printf("%s\n", greetings);
printf("%s\n", world);*/


//####################################


/*char name[100];

printf("Enter your name: ");
fgets(name,sizeof(name), stdin);

printf("Your name is: %s\n", name);*/

//####################################

/*char name[100];

printf("Enter your full name: ");
fgets(name, sizeof(name), stdin);


printf("Hello %s\n", name);*/


//####################################

    
    /*int age = 20;
    int *ptr1 = &age; // Pekare till age
   

    // Korrekt sätt att ändra värdet via pekaren
    *ptr1 = 30;

    printf("%p\n", &age);
    printf("%d\n", age);
    printf("%d\n", *ptr1);*/

    //####################################

    /*int number[] = {1,2,3,4,5};
    int *ptr1 = number;

    ptr1[0] = 100;
    number[1] = 2000;

    int length = sizeof(number) / sizeof(number[0]);

 

    for(int i = 0; i < length; i++){
        printf("%d\n", ptr1[i]);
    }*/

    //####################################

    /*int userInput;
    greeting(userInput);*/

    //####################################


    /*char name[100];

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    myFunction(name);*/

    //####################################


    /*char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);

    myFunctionTest(name,age);*/

    //####################################

    /*int secretNumber = generateRandomNumber(1,10);

    int maxAttempts = 3;

    guessNumber(secretNumber, maxAttempts);*/
    

   //####################################

    struct Student Student1 = {"Amin", 31, 181};

    printf("%s\n", Student1.name);
    printf("%d\n", Student1.age);
    printf("%d\n", Student1.height);



    
    
    
    return 0;
}




