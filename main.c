//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX


#include <stdio.h>

/*
 * Write a program that inputs n number of integer values
 * and return how many of that numbers are unique.
 * For example, if the user decides to enter the following 5 numbers:
 *      [5, 2, 4, 2, 3],
 * the program shoud inform the user that 5, 4 and 3 are unique elements.
 */

int main() {
    int size; //declaration of the variable that will give a size to an array

    printf("How many numbers do you want to enter?\n");
    scanf("%d", &size);  //array size request

    int numbers[size]; //Declaration of the array with a n size

    for (int i = 0; i < size; i++) {
        printf("Enter number %d =", i + 1);
        scanf("%d", &numbers[i]); //array fill
    }

    int count; //variable count

    for (int i = 0; i < size; i++) {
        count = 0;

        for (int x = 0; x < i - 1; x++) { //evaluates if a number is duplicate
            if (numbers[i] == numbers[x]) {
                count++;
            }
        }

        for (int y = i + 1; y < size; y++) { //evaluates if a number is duplicate
            if (numbers[i] == numbers[y]) {
                count++;
            }
        }

        if (count == 0) {
            printf("%d is unique.\n", numbers[i]); //if count is equals to 0, the number is unique
            count = 0;
        }
    }

    if (count != 0) { //if there are not unique numbers the program are going to print this
        printf("No uniques found.");
    }

    return 0;
}