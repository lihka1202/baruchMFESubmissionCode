//
//  Line.hpp
//  Exercise 5
//
//  Created by Akhil Muthya Narayanachary on 24/10/25.
//
#include "Point.hpp"
#include "string"

class Line {
    Point p1;
    Point p2;
    
public:
    // constructors
    Line();
    Line(Point p1, Point p2);
    Line(Line &ln);
    
    // Destructor
    ~Line();
    
    // getters and setters for p1
    Point P1() const;
    void P1(Point p1);
    
    // getters and setters for p2
    Point P2() const;
    void P2(Point p1);
    
    // ToString()
    std::string ToString() const;
    
    // Length
    double Length() const;
};
