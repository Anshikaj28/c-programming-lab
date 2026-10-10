// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int main(){
    float a, b, c, average;

    printf("Enter three numbers :");
    scanf("%f %f %f", &a, &b, &c);

    average = (a + b + c)/ 3;

    printf("Average = %.2f\n", average);
    
    return 0;
}