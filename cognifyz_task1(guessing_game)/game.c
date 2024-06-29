#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int attempts = 3, number, guessed_number;
    int remaining_attempts = attempts;
    srand(time(0));
    number = rand() % 10 + 1; // to generate random numbers from 1 to 10
    printf("Welcome to the Guessing Game! \n");
    printf("I have picked a number from 1 to 10 \n");
    printf("Now it's your time to guess \n");
    do
    {
        printf("You have %d attempts left! Enter your guess!", remaining_attempts);
        scanf("%d", &guessed_number);
        if (guessed_number == number)
        {
            printf("Congratulations! You have guessed the correct number \n");
            break;
        }
        else if (guessed_number < number)
        {
            printf("Too low! Try bigger number! \n");
        }
        else
        {
            printf("Too high! Try smaller number! \n");
        }
        remaining_attempts--;
        if (remaining_attempts == 0)
        {
            printf("I win! You have 0 attempts left! The number was %d", number);
        }
    } while (remaining_attempts > 0);
    return 0;
}