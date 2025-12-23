//
//  Circle.hpp
//  Exercise 6
//
//  Created by Akhil Muthya Narayanachary on 25/10/25.
//

#include "Point.hpp"
#include "sstream"

class Circle {
    double m_radius;
    Point m_center_point;
    
public:
    Circle();
    Circle(double radius);
    Circle(double radius, Point center_point);
    Circle(const Circle &circle);
    ~Circle();
    
    
    Point CenterPoint() const;
    void CenterPoint(Point center_point);
    double Radius() const;
    void Radius(double radius);
    double Diamater() const;
    void Diameter(double diameter);
    
    // Functions to compute values
    double Area() const;
    double Circumference() const;
    
    // Convert to string
    std::string ToString() const;
    
};
