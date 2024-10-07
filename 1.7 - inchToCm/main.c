#include <stdio.h>

int main(){
    float res, input;

    printf("Please enter the inch value:\n");
    scanf("%f", &input);

    res = input * 2.54;
    printf("The result for inch value transfer is: %.2f cm\n", res);


}