#include <stdio.h>
#include <string.h>

int main(void) {

    //count and count
    // int i;
    // char input[10];
    //
    // printf("Enter the iterators");
    // fgets(input , sizeof(input) , stdin);
    // sscanf(input , "%d", &i);
    //
    // for (int j = 1 ; j <= i; j++) {
    //     if (j == 3 || j == 5) {
    //         printf("Jojo\n");
    //     }else {
    //         printf("Lili\n");
    //     }
    // }

    // Late night counting
    // N = 2
    // M = r
    // N >>> M
    // int n, m;
    // char input[100];
    // printf("Enter the iterators");
    // fgets(input , sizeof(input) , stdin);
    // sscanf(input , "%d %d", &n , &m);
    //
    // int total = n + m;
    // for (; n < total; n++) {
    //     printf("%d\n", n);
    // }


    //middle man
    char input[100];
    int length, middle_index;

    printf("Enter numbers (type 'q' to quit):\n");
    while (1) {
        printf("Enter a number : ");
        fgets(input, sizeof(input), stdin);

        // remove newline characters from input ;
        input[strcspn(input, "\n")] = 0;

        length =  strlen(input);
        middle_index = length /2;
        // Output the middle digit
        printf("Middle digit: %c\n", input[middle_index]);
    }


    printf("Hello, World!\n");
    return 0;
}
