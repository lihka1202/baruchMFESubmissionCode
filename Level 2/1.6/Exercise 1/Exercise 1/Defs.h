//
//  Defs.h
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 15/9/25.
//

// Using #ifndef to check if the header file is defined
#ifndef Defs_H
#define Defs_H

#include <stdio.h>

// Check if the macro is defined or not as well
#ifndef PRINT1

// No real need to define the data types or even define the types
#define PRINT1(a) printf("a = %d\n", a);
#endif

#ifndef PRINT2
#define PRINT2(a,b) printf("a = %d\nb = %d\n", a, b)
#endif

#endif

