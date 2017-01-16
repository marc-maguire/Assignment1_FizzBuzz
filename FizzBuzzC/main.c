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
    char fizzBuzz[] = {"FizzBuzz"};
    char fizz[] = {"Fizz"};
    char buzz[] = {"Buzz"};
    
    for (counter = 1; counter <= 100; counter++) {
        if ((counter % 5 == 0) && (counter % 3 == 0)) {
        printf("%s\n", fizzBuzz);
     } else if (counter % 3 == 0) {
         printf("%s\n", fizz);
     } else if (counter % 5 == 0) {
         printf("%s\n", buzz);
     } else {
         printf("%d\n",counter);
     }
    
     }
    return 0;
}

