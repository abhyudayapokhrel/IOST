// Demonstrate the difference between printf() & puts().
#include <stdio.h>
#include <conio.h>

int main()
{
    char message[15] = "Sabda Chalise";

    printf("Using printf: %s\n", message);
    puts(message);
    printf("\n --[Your name]--");
    getch();
    return 0;
}
