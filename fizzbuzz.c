#include <stdio.h>

int main(void){
	int i; /* declaring variable */ 
	i=0;
	while (i < 101){ /* Creating while loop for numbers under 101 */ 
		if (i == 0){
		} else {
			if (i % 3 == 0 && i % 5 == 0){ /* Checking if dividble by 3 or 5*/ 
				printf("%s", "FizzBuzz");
				printf(" ");
			} else if (i % 3 == 0){ /* Checking if dividble by 3*/ 
				printf("%s", "Fizz");
				printf(" ");
			} else if (i % 5 == 0){ /* Checking if dividble by 5*/ 
				printf("%s", "Buzz");
				printf(" ");
			} else{ /* Else printing number */ 
				printf("%d", i);
				printf(" ");
			}
		}
		i++;
	}
}