#include <stdio.h>
#include <string.h>

int main(void) {

    char name[100];
    int age;
    // Basic in-out
    printf("Masukan nama kamu : ");
    scanf("%99s", name);

    printf("Masukan usia kamu : ");
    scanf("%d", &age);

    printf("Nama : %s\n" , name);
    printf("Usia : %d\n", age);


    // Birthday project
    char birthday[100];
    printf("Say birthday to?");
    // if want input allow space
    fgets(birthday, sizeof(birthday), stdin);
    printf("Happy birthday to %s\n" , birthday);


    // Skydivig
    char name[100];
    float height;
    int age;

    char input[100];

    printf("Enter name, height and age : ");
    fgets(input, sizeof(input), stdin);

    char *ptr = input;
    while (sscanf(ptr, "%99s %f %d", name , &height, &age) == 3) {
        printf("Name : %s\n" , name);
        printf("Heigh : %.2f\n" , height);
        printf("Age : %d\n" , age);

        // move the pointer to the next pair of name, height and age
        ptr += strcspn(ptr, " ") + 1;
        ptr += strcspn(ptr, " ") + 1;
        ptr += strcspn(ptr, " ") + 1; // Move past the age

        // Skip any additional spaces
        while (*ptr == ' ') {
            ptr++;
        }
    }

    char id[9];
    char name[100];
    char class[2];  // Class should have at least 2 characters to accommodate the null terminator
    int num;
    char input[100];

    printf("Enter Id, Name, Class, Num\n");

    // Input Id
    printf("Enter id: ");
    scanf("%8s", id);

    // Clear the input buffer
    while (getchar() != '\n');

    // Input Name
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);
    // Remove the newline character from the end of the string
    name[strcspn(name, "\n")] = '\0';

    // Input Class and Num
    printf("Enter Class and the number: ");
    fgets(input, sizeof(input), stdin);

    char *ptr = input;
    sscanf(ptr, "%1s %d", class, &num);

    // Output
    printf("Id: %s\n", id);
    printf("Name: %s\n", name);
    printf("Class: %s\n", class);
    printf("Num: %d\n", num);


    return 0;
}
