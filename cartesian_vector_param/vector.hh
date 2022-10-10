#pragma once

#include <ostream>
#include <initializer_list>

#include "config.h"
using namespace std;

class Vector
{
public:
// DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default;
//

// Add suitable constructors
    Vector(){
        for (size_t i = 0; i < NDIM; i++)
        {
            v[i] = 0;
        }
    }
    Vector(initializer_list<int> l){
        int i = 0;
        for (int num : l)
        {
            v[i] = num;
            i++;
        }
    }
    // possibly more

// Public Member functions here
    int operator[](size_t idx) const;
    int& operator[](size_t idx);

    Vector& operator+=(const Vector& rhs);
    Vector& operator+=(const int number);
    Vector operator+(const Vector& rhs);
    Vector& operator-=(const Vector& rhs);
    Vector operator*(const int number);
    int operator*(const Vector& rhs);
    Vector& operator*=(const int number);
    // More to go

private:
// Private Member functions here
    int v[NDIM];
// Member variables are ALWAYS private, and they go here
};

// Nonmember function operators go here
ostream& operator<<(ostream& os, const Vector& v);

