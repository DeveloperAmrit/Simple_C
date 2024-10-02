#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // taking input string
    char input[1000];
    printf("Input format <number>$<unit in lowercase>\n");
    scanf("%s", input);

    // taking to which input string
    char toUnit[100];
    printf("To which unit\n");
    scanf("%s", toUnit);

    // in = input number (float) , unit is unit of input number
    float in = 0;
    char unit[100] = {0};

    // a for detecting $ sign
    int a = 1;

    // just for iteration
    int j = 0;
    int k = 0;

    // string storing the number
    char forn[100];

    for (int i = 0; i < strlen(input); i++)
    {
        if (a)
        {
            if (input[i] == '$')
            {
                a = 0;
                continue;
            }
            forn[k++] = input[i];
        }
        else
        {
            unit[j++] = input[i];
        }
    }

    // convertign string to float
    char *endPtr;
    in = strtof(forn, &endPtr);

    // terminating unit as its length was 100
    unit[j] = '\0';

    // iur = input unit row
    int iur = -1;
    int iuc = -1;

    int numOfCols = 16; 
    char *DISTANCE_UNITS[][16] = {{"pm","/","/","nm","/","/","um","/","/","mm", "cm", "dm", "m", "dam", "hm", "km"},
                                 {"pg","/","/","ng","/","/","ug","/","/","mg", "cg", "dg", "g", "dag", "hg", "kg"},
                                 {"pl","/","","nl","/","/","ul","/","/","ml", "cl", "dl", "l", "dal", "hl", "kl"}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < numOfCols; j++)
        {
            if (!strcmp(unit, DISTANCE_UNITS[i][j]))       // strcmp return 0 for same strings
            {
                iur = i;
                iuc = j;
            }
        }
    }
    // the ouput float out;
    float out = in * 1.0;

    // our = output unit row
    int our = -1;
    int ouc = -1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < numOfCols; j++)
        {
            if (!strcmp(toUnit, DISTANCE_UNITS[i][j]))       
            {
                our = i;
                ouc = j;
                if (iuc != -1)
                {
                    out = in * pow(10, (iuc - ouc));
                }
            }
        }
    }
    printf("%f %s",out,toUnit);
}
