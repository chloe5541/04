#include <stdio.h>
int main (void)
{
    int op1, op2;
    int res;
    printf("Input two intrgers: ");
    scanf("%i %i", &op1, &op2);

    res = op1 + op2;
    printf("%i + %i = %i\n", op1, op2, res);
    res = op1 - op2;
    printf("%i - %i = %i\n", op1, op2, res);
    res = op1 * op2;
    printf("%i * %i = %i\n", op1, op2, res);
    res = op1 / op2;
    printf("%i / %i = %i\n", op1, op2, res);
     res = op1 % op2;
    printf("%i %% %i = %i\n", op1, op2, res);
    return 0;
}