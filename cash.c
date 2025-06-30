#include <cs50.h>
#include <stdio.h>

int calculate_coin(int cents, int value);

int main(void)
{
    int coin_count;
    int change_owed;
    int coins_used = 0;
    do
    {
        change_owed = get_int("Change owed: ");
    }
    while (change_owed < 1);
    int coin_types[] = {25, 10, 5, 1};
    for (int i = 0; i < 4; i++)
    {
        coin_count = calculate_coin(change_owed, coin_types[i]);
        change_owed = change_owed - (coin_count * coin_types[i]);
        coins_used = coins_used + coin_count;
    }
    printf("%i\n", coins_used);
}

int calculate_coin(int cents, int value)
{
    int coin = 0;
    while (cents >= value)
    {
        cents = cents - value;
        coin++;
    }
    return coin;
}
