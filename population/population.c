#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // TODO: Prompt for start size
    int st_size;

    do
    {
        st_size = get_int("st size: \n");
    }
    while (st_size < 9);
    // TODO: Prompt for end size
int en_size;
do
{
    en_size = get_int("en size: \n");
}
while (en_size < st_size);
    // TODO: Calculate number of years until we reach threshold
int current_size = st_size;
int years_passed = 0;
while (current_size < en_size)
{
    current_size = round(current_size + current_size/3 - current_size/4);
    years_passed++;
}
printf("Years: %i \n", years_passed);

    // TODO: Print number of years
}
