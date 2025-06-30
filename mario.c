#include <cs50.h>
#include <stdio.h>

void print_adjg_rows(int spaces, int bricks);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height = "); // prompt user for height of pyramids
    }
    while (height <= 0 || height > 8);
    for (int i = 0; i < height; i++)
    {
        print_adjg_rows(height - i - 1, i + 1); // print rows for triangles
    }
}

void print_adjg_rows(int spaces, int bricks)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" "); // print spaces
    }
    for (int j = 0; j < bricks; j++)
    {
        printf("#"); // print bricks for right triangle
    }
    printf("  ");
    for (int j = 0; j < bricks; j++)
    {
        printf("#"); // print bricks for left triangle
    }
    printf("\n");
}
