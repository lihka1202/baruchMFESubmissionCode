//
//  Point.cpp
//  Exercise 1
//
//  Created by Akhil Muthya Narayanachary on 23/12/25.
//

#include "Point.hpp"
Point::Point() {
    m_X = 0;
    m_Y = 0;
}

Point::Point(double x, double y) {
    m_X = x;
    m_Y = y;
}

double Point::Y() {
    return m_Y;
}

double Point::X() {
    return m_X;
}

void Point::X(double x) {
    m_X = x;
}

void Point::Y(double y) {
    m_Y = y;
}

Point Point::operator-() const {
    return Point(-m_X, -m_Y);
}

Point Point::operator*(double factor) const {
    return Point(m_X * factor, m_Y * factor);
}

Point Point::operator+(const Point& p) const {
    return Point(m_X + p.m_X, m_Y + p.m_Y);
}
