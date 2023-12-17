#include <iostream>
using namespace std;

char isDigit(char c)
{
    return c >= '0' && c <= '9';
}

char isDot(char c)
{
    return c == '.';
}

char is_null(char c)
{
    return c == '\0';
}

char trapState()
{
    return false;
}

char finalState(char *c)
{
    if (is_null(*c))
    {
        return true;
    }
    else if (isDigit(*c))
    {
        return finalState(++c);
    }
    else
    {
        return trapState();
    }
}

char state_two(char *c)
{
    if (isDigit(*c))
    {
        return finalState(++c);
    }
    else
    {
        return trapState();
    }
}

char staten(char *c)
{
    if (isDigit(*c))
    {
        return staten(++c);
    }
    else if (isDot(*c))
    {
        return state_two(c + 1);
    }
    else
    {
        return trapState();
    }
}

char initialState(char *c)
{
    if (isDot(*c))
    {
        return state_two(++c);
    }
    else if (isDigit(*c))
    {
        return staten(++c);
    }
    else
    {
        return trapState();
    }
}

int main()
{
    char input[128];

    cin >> input;

    if (initialState(input))
    {
        printf("The Value is Valid\n");
    }
    else
    {
        printf("The Value is Invalid\n");
    }

    return 0;
}