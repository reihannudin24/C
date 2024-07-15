#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {

    // odd-event number
    // int number;
    // scanf("%d", &number);
    // if (number % 2 != 0) {
    //     printf("ODD\n");
    // }else {
    //     printf("EVEN\n");
    // }


    // Not equals
    // 2 3 4 7
    // 2 > 7  == false
    // int a, b , c, d;
    // char input[100];
    //
    // printf("Enter four integers (a b c d) separated by spaces : \n");
    // fgets(input, sizeof(input), stdin);
    //
    // sscanf(input, "%d %d %d %d" , &a , &b , &c, &d);
    // // perform operation on both sides
    // int left_result = a * b;
    // int right_result = c + d;

    // compare the results
    // if (left_result > right_result) {
    //     printf("True \n");
    // }else if (left_result < right_result) {
    //     printf("False \n");
    // } else {
    //     printf("Equal\n");
    // }


    // Alphabetical Order
    // 3 buah hurf alfabet berbeda dalam bentuk dadu
    // dadu tersebut dapat diurutjkan bedasarkan abjad alfabet
    // Declare variables
    // char a, b, c;
    // int pos_a, pos_b, pos_c;
    // char input[100];
    // // Prompt user for input
    // printf("Enter three different letters: ");
    // fgets(input, sizeof(input), stdin);
    // sscanf(input, "%c %c %c", &a, &b, &c);
    // // Output sorted letters
    // printf("a before : %c\n", a);
    // printf("b before : %c\n", b);
    // printf("c before : %c\n", c);
    // // Sort the characters alphabetically
    // if (a > b) {
    //     char temp = a;
    //     a = b;
    //     b = temp;
    // }
    // if (a > c) {
    //     char temp = a;
    //     a = c;
    //     c = temp;
    // }
    // if (b > c) {
    //     char temp = b;
    //     b = c;
    //     c = temp;
    // }
    // // Initialize positions
    // pos_a = pos_b = pos_c = 0;
    // // Finding position of 'a'
    // if (a == input[0]) pos_a = 1;
    // else if (a == input[1]) pos_b = 2;
    // else if (a == input[2]) pos_c = 3;
    // // Find positions of  'b'
    // if (b == input[0] && pos_a == 0) pos_b = 1;
    // else if (b == input[1] && pos_a == 0) pos_b = 2;
    // else if (b == input[2] && pos_a == 0) pos_b = 3;
    // // Finding position of 'c'
    // if (c == input[0] && pos_a == 0 && pos_b == 0) pos_c = 1;
    // else if (c == input[1] && pos_a == 0 && pos_b == 0) pos_c = 2;
    // else if (c == input[2] && pos_a == 0 && pos_b == 0) pos_c = 3;
    // // Output relative positions
    // printf("%d %d %d\n", pos_a, pos_b, pos_c);

    // // Output sorted letters
    // printf("a after: %c\n", a);
    // printf("b after: %c\n", b);
    // printf("c after: %c\n", c);
    // // Output input letters
    // printf("input[0] : %c\n", input[0]);
    // printf("input[1] : %c\n", input[1]);
    // printf("input[2] : %c\n", input[2]);


    // Three Elevators (mencari persamaan lantai)
    // 1 lantai/detik
    // lift 1 naik lantai terats (14)
    // lift 2 turun lantai terbawah (1)
    int x, y, k;
    printf("Enter the positions of lift1 (x), lift2 (y), and the stationary lift (k): \n");
    scanf("%d %d %d", &x, &y, &k);

    // initial directions
    int lift1_direction = 1;
    int lift2_direction = -1;

    for (int t =0; t < 100; t++) {
        if (x == k && y==k) {
            printf("The lifts align at floor %d after %d seconds.\n", k, t);
            return 0;
        }

        x += lift1_direction;
        y += lift2_direction;

        //change direction if limit are reacherd
        if (x == 100) lift1_direction = -1;
        if (x == 1) lift1_direction = 1;

        if (y == 100) lift1_direction = -1;
        if (y == 1) lift1_direction = 1;

    }
    printf("-1\n");


    // Three Elevators (mencari waktu)
    // lift 1 = 3+;
    // lift 2 = 5=;
    // lift 3 = 4;
    // akan bertemu besamaan
    // int x, y, k, temp;
    // int lcm12, lcm123;
    // int gcd12, gcd123;
    // char input[100];
    // printf("Enter three integers (x y k): \n");
    // fgets(input, sizeof(input), stdin);
    // sscanf(input, "%d %d %d", &x, &y, &k);
    // // Calculate GCD of x and y
    // int a = x, b = y;
    // while (b != 0) {
    //     temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    // gcd12 = a;
    // // Calculate LCM of x and y
    // lcm12 = (x / gcd12) * y;
    // // Calculate GCD of lcm12 and k
    // a = lcm12, b = k;
    // while (b != 0) {
    //     temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    // gcd123 = a;
    // // Calculate LCM of lcm12 and k
    // lcm123 = (lcm12 / gcd123) * k;
    // // Output the result
    // printf("The elevators will align together every %d seconds.\n", lcm123);


    return 0;
}
