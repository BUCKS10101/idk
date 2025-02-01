#include<stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the computer's choice
int get_computer_choice() {
    return rand() % 3;
}

// Function to get the user's choice
int get_user_choice() {
    int choice;
    printf("Enter your choice (0 = Rock, 1 = Paper, 2 = Scissors): ");
    scanf("%d", &choice);
    return choice;
}

// Function to determine the winner
void determine_winner(int user_choice, int computer_choice) {
    const char *choices[] = {"Rock", "Paper", "Scissors"};
    printf("You chose: %s\n", choices[user_choice]);
    printf("Computer chose: %s\n", choices[computer_choice]);

    if (user_choice == computer_choice) {
        printf("It's a tie!\n");
    } else if ((user_choice == 0 && computer_choice == 2) ||
               (user_choice == 1 && computer_choice == 0) ||
               (user_choice == 2 && computer_choice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
         }
}

int main() {
    srand(time(0));  // Seed the random number generator
    int user_choice = get_user_choice();
    int computer_choice = get_computer_choice();
    determine_winner(user_choice, computer_choice);
    return 0;
}