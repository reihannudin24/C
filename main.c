#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {


    int num1 =  10;
    int num2 =  2;
    // Basic aritmatika
    int sum = num1 + num2;
    int min = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    int mod = num1 % num2;

    printf("Total sum : %d\n" , sum);
    printf("Total min : %d\n" , min);
    printf("Total mul : %d\n" , mul);
    printf("Total div : %d\n" , div);
    printf("Total mod : %d\n" , mod);



    // ASSICC
    char char1, char2;
    int ascii1, ascii2;
    int result;
    // Input the first character
    printf("Enter the first character: ");
    scanf(" %c", &char1);
    // Input the second character
    printf("Enter the second character: ");
    scanf(" %c", &char2);
    // Calculate ASCII values
    ascii1 = (int)char1;
    ascii2 = (int)char2;
    result = ascii1 * ascii2;
    printf("result %d\n" , result);


    // Game Tournaments
    int N;
    // Input the  number of teams
    printf("Enter the number of teams (including aquorus):");
    scanf("%d" , &N);
    // calculate the number of possible wins for aquorous
    int possible_outcomes = 1 << N; // Calculate 2^N
    // output the result
    printf("Number of possible outcomes: %d\n", possible_outcomes - 1 );


    // Damage
    // Physical, magical and pure
    // Physical damage 20%
    // magical damage 30%
    // pure damage 50%

    int physical;
    int magical;
    int pure;
    char input[100];

    printf("Enter Pysical, magical, dan pure damage");
    fgets(input, sizeof(input), stdin);

    char *ptr = input;
    sscanf(ptr, "%d %d %d", &physical, &magical, &pure);

    int totalDamage = physical + magical + pure;
    int total = 300;

    // Calculate the average
    double average = totalDamage / 3;

    // Print the average formatted to two decimal places
    printf("%.2f\n", average);


    // pokemon card pt 2
    X  Jumlah buah kartu bebrbda
    Y Jenis Kartu berbeda

    int x;
    int y;
    char input[100];

    printf("Enter Jumlah buah kartu dan jenis kartu\n");
    fgets(input, sizeof(input), stdin);

    char *ptr = input;
    sscanf(ptr, "%d %d", &x, &y);

    double total = (double)x * 100 / y; // Perform floating-point arithmetic

    printf("Total : %.2f\n", total);


    // math homework
    1 minggu
    angap senin 1 dan pr dapat rabu 3 harus dukumpulja kamis 4

    int a, b, c, d;
    char input[100];

    printf("Enter sets of four integers (a b c d), each set on a new line. Enter 'q' to quit:\n");
    while (1) {
        fgets(input, sizeof(input), stdin);
        // check for quit conition
        if (input[0] == 'q') {
            break;
        }
        char *ptr = input;
        sscanf(ptr, "%d %d %d %d", &a, &b , &c , &d);

        int total = (a+b)*(c-d);

        // Output the result
        printf("Total for (%d + %d) X (%d - %d): %d\n", a, b, c, d, total);
    }

    while (1) {
        // Read a line of input
        fgets(input, sizeof(input), stdin);

        // Check for quit condition
        if (input[0] == 'q') {
            break;
        }

        // Parse the input
        sscanf(input, "%d %d %d %d", &a, &b, &c, &d);

        // Calculate the total
        int total = (a + b) * (c - d);

        // Print the result
        printf("Total for (%d %d %d %d): %d\n", a, b, c, d, total);
    }


    // Thermostater
    // reaumur = 4/5 x c
    // fahrenheit = 9/5 x c + 32
    // kelvin =  c + 273

    // Thermostater
    int celcius;
    char input[100];

    while (1) {
        // Read a line of input
        printf("Enter Celsius temperature (or 'q' to quit): ");
        fgets(input, sizeof(input), stdin);

        // Check for quit condition
        if (input[0] == 'q') {
            break;
        }

        // Convert input string to integer
        sscanf(input, "%d", &celcius);

        double reaumur = 4.0/5.0 * celcius;
        double fahrenheit = (9.0/5.0 * celcius) + 32;
        double kelvin = celcius + 273.15;

        printf("Reaumur : %.2f, fahrenheit %.2f, kelvin %.2f" , reaumur , fahrenheit, kelvin);

    }


    // Middleman
    char input[100];
    int length, middle_index;

    printf("Enter numbers (type 'q' to quit):\n");

    while (1) {
        printf("Enter a number: ");
        fgets(input, sizeof(input), stdin);

        // Remove newline character from input
        input[strcspn(input, "\n")] = 0;

        length = strlen(input);
        middle_index = length / 2;

        // Output the middle digit
        printf("Middle digit: %c\n", input[middle_index]);

    }

    printf("Hello, World!\n");
    return 0;
}
