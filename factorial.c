// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int factorial(int n){
    int i, fact = 1;
    for(i = 1; i<= n; i++){
        fact = fact*i;
    }
    return fact;
}
        int main(){
            int number , result;
            printf("Enter a number:");
            scanf("%d", &number);

            result = factorial(number);

            printf("Factorial = %d\n",result);
        

        return 0;
        }
           
    
        
    
