//
//  main.c
//  C-Starter-Project
//
//  Created by Daniel Mathews on 2015-02-02.
//  Copyright (c) 2015 com.lighthouse-labs. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for (int i = 1; i <= 100; i++)
        
        if (i % 3 == 0 && i % 5 ==0)
            
            printf("fizzbuzz\n");
    
    
        
        else if (i % 3 == 0)
            
            printf("fizz\n");
    
        
        else if (i % 5 == 0)
            
            printf("buzz\n");
        
    
        else printf("%d\n",i);

    
    
    return 0;
}

