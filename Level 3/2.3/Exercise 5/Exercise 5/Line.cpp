//
//  Line.cpp
//  Exercise 5
//
//  Created by Akhil Muthya Narayanachary on 24/10/25.
//

#include "Line.hpp"
#include "sstream"

// Default constructor
Line::Line() {
    p1 = Point(0,0);
    p2 = Point(0,0);
}

Line::Line(Point point1, Point point2) {
    p1 = point1;
    p2 = point2;
}

Line::Line(Line &ln) {
    p1 = ln.p1;
    p2 = ln.p2;
}

Line::~Line() {
    // leave empty
}

Point Line::P1() const {
    return p1;
}

void Line::P1(Point new_p1) {
    p1 = new_p1;
}

Point Line::P2() const {
    return p2;
}

void Line::P2(Point new_p2) {
    p2 = new_p2;
}

std::string Line::ToString() const {
    std::ostringstream oss;
    oss << "Point 1 of created line:\t" << p1.ToString() << std::endl << "Point 2 of created line:\t" << p2.ToString() << std::endl;
    return oss.str();
}

double Line::Length() const {
    return p1.Distance(p2);
}


