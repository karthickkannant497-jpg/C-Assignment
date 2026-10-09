/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

unsigned char modifyRegister(unsigned char reg)
{
    reg |=  (1 << 2);   
    reg &= ~(1 << 5);   
    reg ^=  (1 << 0);   
    return reg;
}

int main(void)
{
    unsigned int input;   

    printf("Enter register value (0-255): ");
    scanf("%u", &input);

    unsigned char reg = (unsigned char)input;

    printf("Before Register Value : 0x%02X (decimal %u)\n", reg, reg);
    reg = modifyRegister(reg);
    printf("After Register Value : 0x%02X (decimal %u)\n", reg, reg);

    return 0;
}

