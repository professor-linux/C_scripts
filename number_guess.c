#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ask_user(int *guess){
    srand(time(NULL));
    const int number = rand() % 10 + 1;
    int tries = 3;

    printf("Guess a Number 1-10: ");
    scanf("%d", guess);

    while(tries > 0){ // Corrected while loop condition

        if (*guess != number && tries > 1){
            printf("\033[1;31mYou guessed Wrong\033[0m\n");
            printf("Wrong answer! Attempts left: %d\r\n", tries - 1);
            tries -= 1;
            printf("Guess a Number 1-10: ");
            scanf("%d", guess);
        }
        else if (*guess != number && tries == 1){
            printf("\033[1;31mYou guessed Wrong\033[0m\n");
            printf("\033[1;36mCorrect Number  was: %d \033[0m\n", number);
            printf("No more attempts left.\n");
            break;
        }
        else{
            printf("\033[1;32mYou guessed correct\033[0m\n");
            break;
        }
    }
}

int main() {
    int *guess = malloc(sizeof(int));

    if ( guess == NULL) {
        printf("Failed to allocate memory");
        return EXIT_FAILURE;
    }

    ask_user(guess);
    free(guess);
    return 0;
}
