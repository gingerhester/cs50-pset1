#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks); // declare  print_row function

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: "); // prompt user for height of pyramid
    }
    while (height < 1);
    for (int i = 0; i < height; i++) // repeat for prompted height
    {
        print_row(height - i - 1, i + 1); // print correct number of bricks in each row
    }
}

void print_row(int spaces, int bricks) // make function to print a row
{
    for (int j = 0; j < spaces; j++) // repeat for necessary number of spaces to align
    {
        printf(" "); // print a space
    }
    for (int i = 0; i < bricks; i++) // repeat for prompted number of bricks
    {
        printf("#"); // print a brick
    }
    printf("\n"); // make a new line after row
}
