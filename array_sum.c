// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int main(){
    int a[100], n, i , sum = 0 ;

    printf("Enter a number of elements:");
    scanf("%d" , &n);

    printf("Enter the elements:\n");
    for(i =0;i < n;i++){
        scanf("%d", &a[i]);
        
    }
    for (i = 0;i < n; i++){
        sum = sum + a [i];
    }
    printf("sum of array elements = %d\n" , sum);

        return 0;
    }
        
    
