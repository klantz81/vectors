#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>

class vector3 {
  private:
  protected:
  public:
	double x, y, z;
	vector3();
	vector3(double x, double y, double z);
	double operator*(const vector3& v) const;
	vector3 cross(const vector3& v) const;
	vector3 operator+(const vector3& v) const;
	vector3 operator-(const vector3& v) const;
	vector3 operator*(const double s) const;
	vector3& operator=(const vector3& v);
	vector3 h(const vector3& v) const;		// hadamard product
	double length() const;
	vector3 unit() const;
};

class vector2 {
  private:
  protected:
  public:
	double x, y;
	vector2();
	vector2(double x, double y);
	double operator*(const vector2& v) const;
	vector2 operator+(const vector2& v) const;
	vector2 operator-(const vector2& v) const;
	vector2 operator*(const double s) const;
	vector2& operator=(const vector2& v);
	double length() const;
	vector2 unit() const;
};

#endif