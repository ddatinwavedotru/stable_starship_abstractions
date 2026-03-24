#ifndef DATATYPES_H
#define DATATYPES_H

class Angle {
public:
    explicit Angle(double v=0):m_v(v) {}
    Angle(const Angle & a): m_v(a.m_v) {}
    Angle & operator+=(const Angle & a) { m_v+=a.m_v; return *this; }
    Angle operator+(const Angle a) const { return Angle(*this)+=a; }
    bool operator==(const Angle & a) const { return a.m_v==this->m_v; }

    operator double() const { return m_v; }
protected:
    double m_v;
};

class Point {
public:
    explicit Point(double x=0, double y=0) :m_x(x),m_y(y) {}
    Point(const Point & p): m_x(p.m_x), m_y(p.m_y) {}
    Point & operator+=(const Point & p) { m_x+=p.m_x; m_y+=p.m_y; return *this; }
    Point operator+(const Point & p) { return Point(*this)+=p; }

    bool operator==(const Point & p) const { return p.x()==this->x() && p.y()==this->y(); }

    double x() const { return m_x; }
    double y() const { return m_y; }

protected:
    double m_x;
    double m_y;
};

using Vector=Point;

#endif // DATATYPES_H
