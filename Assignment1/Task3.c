#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    // Ask the user their name
    printf("Enter one name: ");
    scanf("%s", &name);

    // Print the string back
    printf("Your name is %s\n", name);

    //  Find string length
    int length = strlen(name);

    //  Display the length
    printf("The length of your name is %d characters\n", length);

    return 0;
}
