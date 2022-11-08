#include <stdio.h>
void my_swap(int* param_1, int* param_2)
{
    int variable_a = *param_1;
    int variable_b = *param_2;
    *param_2 = variable_a;
    *param_1 = variable_b;
}