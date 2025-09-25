#include <stdio.h>

int main() {
    int number;
    int totalSum = 0;
    
    printf("Enter positive number to ADD (zero or negative number to STOP): \n");
    
    while(1) {
        printf("Enter a number: ");
        scanf("%d", &number);
        
        if(number <= 0){
           
            break;
        }
        
        totalSum += number; 
        
    }
    
    printf(" Total sum is: %d\n", totalSum);
    
    
    
    return 0;
    


}


