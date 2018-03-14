#include <stdio.h>
 
int main(void) {
    int x;
    float y, z;
    scanf("%d%f", &x, &y);
    if(x % 5 == 0){
        if(x > (y - (0.50))){
            printf("%f", y);
        }
        else{
            z = y - x - (0.50);
            printf("%.2f", z);
        }
    }
    else {
        printf("%.2f", y);
    }
    
	// your code goes here
	return 0;
} 