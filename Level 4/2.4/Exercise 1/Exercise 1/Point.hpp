//
//  Point.hpp
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 23/12/25.
//

#include "iostream"

class Point {
    double m_X;
    double m_Y;
    
public:
    Point();
    Point(double x, double y);
    ~Point() = default;
    double X();
    double Y();
    void X(double x);
    void Y(double y);
    
    // Write a printer
    void printPoint() {
        std::cout << "X: " << m_X << " Y: " << m_Y << std::endl;
    }
    
    // Add the operators that are overloaded here
    Point operator-() const;
    
    Point operator * (double factor) const;
    
    Point operator + (const Point& p) const;
};
