//
//  main.cpp
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 23/12/25.
//

#include <iostream>
#include "Point.hpp"
#include "string"

int main(int argc, const char * argv[]) {
    // insert code here...
    double x, y;
    std::cout << "Please enter the coordinates of the point" << std::endl;
    std::cin >> x >> y;
    
    // Negated
    Point tester = Point(x,y);
    Point negated = -tester;
    negated.printPoint();
    // Scaled
    Point scaled = tester * 2;
    scaled.printPoint();
    
    // Add new pointer
    Point added = tester + tester;
    added.printPoint();
    
    // test if 2 points are the same
    std::string finalStatus = scaled == added ? "true" : "false";
    std::cout << "Check if scaled and added are the same: " << finalStatus << std::endl;
    
    return 0;
    
}
