#include <stdio.h>
#include <string.h>
int my_string_index(char* param_1, char param_2)
{
    int counter = 0;
    int length = strlen(param_1);
    for(int i=0;i<length;i++){
        if(param_1[i] == param_2){
           counter ++; 
        }
    }
    if(counter > 0){
        return counter;
    }else{
        return -1;
    }
}