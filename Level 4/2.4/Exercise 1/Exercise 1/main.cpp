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
    
    // Assign a new point --> Default
    Point assignment;
    std::cout << "Assignment Original State: \n";
    assignment.printPoint();
    
    assignment = tester;
    std::cout << "Assignment Final State: \n";
    assignment.printPoint();
    
    // Double here then print
    assignment*=2;
    std::cout << "Assignment Doubled State (Doubled by a factor of 2 in code): \n";
    assignment.printPoint();
    
    return 0;
    
}
