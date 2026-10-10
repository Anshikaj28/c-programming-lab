// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int main(){
    int number ;

    printf("Enter a numbers:");
    scanf("%d " , &number);

    if (number > 0){
        printf("The number is positive.\n");
    } else if (number <0){
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

        return 0;
    }
        
    
