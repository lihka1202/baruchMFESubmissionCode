//
//  main.cpp
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 23/12/25.
//

#include <iostream>
#include "Point.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    double x, y;
    std::cout << "Please enter the coordinates of the point" << std::endl;
    std::cin >> x >> y;
    Point tester = Point(x,y);
    Point negated = -tester;
    std::cout << "This is the negated version of the tester point " << negated.X() << " " << negated.Y() << std::endl;
    return 0;
}
