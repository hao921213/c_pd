#include <stdio.h>

int checkprime(int input);

int main(int argc, char const *argv[])
{
    int input = 0;
    scanf("%d", &input);
    int ans = checkprime(input);
    if (ans == 1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}

int checkprime(int input)
{
    if (input == 1)
    {
        return 1;
    }
    for (int i = 2; i <= input / 2; i++)
    {
        if (input % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

