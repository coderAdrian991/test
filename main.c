#include <stdio.h>
#include <string.h>

char *replace(char *text);

int main(int argc, char *argv[])
{
    const int MIN_AMMOUNT = 2;
    if (argc != MIN_AMMOUNT)
    {
        printf("Usage: ./no-vowels word");
        return 1;
    }

    printf("%s\n", replace(argv[1]));

    return 0;
}

char *replace(char *text)
{
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        switch (text[i])
        {
            case 'a':
                text[i] = '6';
                break;
            case 'e':
                text[i] = '3';
                break;
            case 'i':
                text[i] = '1';
                break;
            case 'o':
                text[i] = '0';
                break;
        }
    }

    return text;
}
