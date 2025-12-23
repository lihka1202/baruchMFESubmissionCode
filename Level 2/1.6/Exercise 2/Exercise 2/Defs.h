//
//  Defs.h
//  Exercise 2
//
//  Created by Akhil Muthya Narayanachary on 15/9/25.
//

// Continuing from exercise 1

#ifndef Defs_H
#define Defs_H

#include <stdio.h>

#ifndef PRINT1
#define PRINT1(a) printf("a = %d\n", a);
#endif

#ifndef PRINT2
#define PRINT2(a,b) printf("a = %d\nb = %d\n", a,b);
#endif

#ifndef MAX2
#define MAX2(x,y) ((x) >= (y) ? (x) : (y))
#endif

#ifndef MAX3
//#define MAX3(x,y,z) MAX2(x,y) > MAX2(y,z) ? MAX2(x,y) : MAX2(y,z)
#define MAX3(x,y,z) (MAX2((x), MAX2((y), (z))))
#endif

#endif
