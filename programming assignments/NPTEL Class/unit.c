#include <stdio.h>
int main()
{
    char input;
    float kmstomiles = 0.621371;
    float inchtofoot = 0.0833333;
    float cmtoinch = 0.393701;
    float poundtokg = 0.453592;
    float inchtometer = 0.0254;
    float first, second;
    printf("Enter the first quantity with respect \n");
    scanf("%f", &first);

    while (input)
    {
        printf("Enter the input character..  q to quit\n   1. kms to miles\n   2. inch to foot\n    3. cm to inch\n    4. pound to kg\n    5. inch to meter\n");
        scanf("%c", &input);
        switch (input)
        {
        case 'q':
            printf("quitting the program...\n");
            goto end;
            break;
        case '1':
            second = first * kmstomiles;
            printf("%f kms is equal to %f miles\n", first, second);
            break;
        case '2':
            second = first * inchtofoot;
            printf("%f inch is equal to %f feet\n", first, second);
            break;
        case '3':
            second = first * cmtoinch;
            printf("%f cm is equal to %f inch\n", first, second);
            break;
        case '4':
            second = first * poundtokg;
            printf("%f pound is equal to %f kg\n", first, second);
            break;
        case '5':
            second = first * inchtometer;
            printf("%f inch is equal to %f meter\n", first, second);
            break;

        default:
            printf("this");
            break;
        }
    }
end:
    printf("df");
}