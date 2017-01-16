//
//  main.c
//  FizzBuzzC
//
//  Created by Marc Maguire on 2017-01-16.
//  Copyright © 2017 Marc Maguire. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    int counter;
    
    for (counter = 0; counter <= 100; counter++) {
        if ((counter % 5 == 0) && (counter % 3 == 0)) {
        printf("%s\n", "FizzBuzz");
     } else if (counter % 3 == 0) {
         printf("%s\n","Fizz");
     } else if (counter % 5 == 0) {
         printf("%s\n","Buzz");
     } else {
         printf("%d\n",counter);
     }
    
     }
    return 0;
    
}

