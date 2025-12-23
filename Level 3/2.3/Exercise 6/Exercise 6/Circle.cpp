//
//  Circle.cpp
//  Exercise 6
//
//  Created by Akhil Muthya Narayanachary on 25/10/25.
//

#include "Circle.hpp"
#include "sstream"
#include "cmath"
#define _USE_MATH_DEFINES

Circle::Circle() {
    m_radius = 0;
    m_center_point = Point(0,0);
}

Circle::Circle(double radius) {
    m_radius = radius;
    m_center_point = Point(0,0);
}
Circle::Circle(double radius, Point center_point) {
    m_radius = radius;
    m_center_point = center_point;
    
}
Circle::Circle(const Circle &circle) {
    m_center_point = circle.m_center_point;
    m_radius = circle.m_radius;
}
Circle::~Circle() {
    // Leave Empty for the time being
}

Point Circle::CenterPoint() const {
    return m_center_point;
}

void Circle::CenterPoint(Point center_point) {
    m_center_point = center_point;
}

double Circle::Radius() const {
    return m_radius;
}

void Circle::Radius(double radius) {
    m_radius = radius;
}

double Circle::Diamater() const {
    return 2 * m_radius;
}

void Circle::Diameter(double diameter) {
    m_radius = diameter/2;
}

double Circle::Area() const {
    return M_PI * m_radius * m_radius;
}

double Circle::Circumference() const {
    return M_PI * 2 * m_radius;
}

std::string Circle::ToString() const {
        std::ostringstream oss;
    oss << "Circle(Centre: " << m_center_point.ToString() << ", Radius: " << m_radius << ")";
        return oss.str();
}

