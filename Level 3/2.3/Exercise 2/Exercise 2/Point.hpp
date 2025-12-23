//
//  Point.hpp
//  Exercise 2
//
//  Created by Akhil Muthya Narayanachary on 23/10/25.
//

#ifndef POINT_HPP
#define POINT_HPP

#include "string"

class Point {
    double m_x;
    double m_y;
    
public:
    // Init constructor
    Point();
    
    // init destructor
    ~Point();
    
    // Init Copy Constructor
    Point(const Point &pt);
    
    // Getters
    double GetX() const;
    double GetY() const;
    
    // setters
    void SetX(double newX);
    void SetY(double newY);
    
    // ToString
    std::string ToString();
    
    // Distance from origin
    double DistanceOrigin();
    
    // Distance from another point
    double Distance(const Point &p) const;
};

#endif

