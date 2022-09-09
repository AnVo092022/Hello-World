#include <stdio.h>;

int main()
{
    printf("Hello World !\n"); // '\n\': xuong hang
    printf("Input your name: ");

    //khai bao bien
    char name[20];
    gets(name);
    printf("Your name is: %s\n", name);
};

