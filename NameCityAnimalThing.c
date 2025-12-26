#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


//Author: Alex Husar
//Date: 2025-26.12
//Title: Name, City, Animal, Thing Game
//error 3: Invalid input at the start of the game (you must enter "y" or "n")
//error 4: Invalid input at the end of the game (you must enter "y" or "n")
//error 1: Code error


//function to start the game

int start_game(void);

            //NAME, CITY, ANIMAL, THING GAME

            //start of the game y/n 

int main(void) {
    char input[10];

    printf("Do you want to start the game??? (y/n): ");
    fgets(input, sizeof(input), stdin);

    if (input[0] == 'y' || input[0] == 'Y') {
        start_game();
    } else if (input[0] == 'n' || input[0] == 'N') {
        printf("Game was cancelled!\n");
    } else {
        printf("Invalid input. (error 3)\n");
    }

    return 0;
}


   // the game itself

int start_game(){
    char name[20];
    char city[30];
    char animal[30];
    char thing[30];


     char random_letter;

    // random letter
    srand(time(NULL));

    // random letter A-Z
    random_letter = 'A' + (rand() % 26);

    printf("Random letter: %c , use this letter as a first letter of your words!!! be quick!\n", random_letter); //shows the random letter


      //name
    printf("Enter a name: \n");
    fgets(name, sizeof(name), stdin);

      //city
    printf("Enter a city: \n");
    fgets(city, sizeof(city), stdin);

        //animal
    printf("Enter an animal: \n"); 
    fgets(animal, sizeof(animal), stdin);

        //thing
    printf("Enter a thing: \n");
    fgets(thing, sizeof(thing), stdin);

    printf("\n Great! Your name is %s, your city is %s, your animal is %s and your thing is %s \n", name, city, animal, thing);

    char input2[10];

    printf("Do you want to play again? (y/n): ");
    fgets(input2, sizeof(input2), stdin);

    if (input2[0] == 'y' || input2[0] == 'Y') {
        return start_game();
    } else if (input2[0] == 'n' || input2[0] == 'N') {
        printf("Game ended. Goodbye!\n");
    } else {
        printf("Invalid input.. (error4)\n");
    }

    return 0;
    
    return 0;
}