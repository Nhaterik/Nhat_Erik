//write a program get a number in [1,5] if out-> write until right
 #include <stdio.h>

int main() {
    int number;

    while (1) {
        printf("Please enter a number between 1 and 5: ");
        scanf("%d", &number);

        if (number >= 1 && number <= 5) {
            printf("You entered a valid number: %d\n", number);
            break;
        } else {
            printf("Invalid number. Please try again.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        }
    }

    return 0;
}

