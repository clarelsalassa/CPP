#include "vector.hh"

int Vector::operator[](size_t idx) const{
    return v[idx];
}

int& Vector::operator[](size_t idx){
    return v[idx];
}

Vector& Vector::operator+=(const Vector& rhs){
    for (size_t i = 0; i < NDIM; i++)
    {
        v[i] += rhs[i];
    }
    return *this;
}

Vector& Vector::operator+=(const int number){
    for (size_t i = 0; i < NDIM; i++)
    {
        v[i] += number;
    }
    return *this;
}

Vector Vector::operator+(const Vector& rhs){
    Vector res;
    for (size_t i = 0; i < NDIM; i++)
    {
        res[i] = v[i] + rhs[i];
    }
    return res;
}

Vector& Vector::operator-=(const Vector& rhs){
    for (size_t i = 0; i < NDIM; i++)
    {
        v[i] -= rhs[i];
    }
    return *this;
}

Vector Vector::operator*(const int number){
    Vector res;
    for (size_t i = 0; i < NDIM; i++)
    {
        res[i] = v[i] * number;
    }
    return res;
}

int Vector::operator*(const Vector& rhs){
    int res = 0;
    for (size_t i = 0; i < NDIM; i++)
    {
        res += v[i] * rhs[i];
    }
    return res;
}

Vector& Vector::operator*=(const int number){
    for (size_t i = 0; i < NDIM; i++)
    {
        v[i] *= number;
    }
    return *this;
}

ostream& operator<<(ostream& os, const Vector& v){
    os << '{';
    for (size_t i = 0; i < NDIM; i++)
    {
        if (i == NDIM - 1)
        {
            os << v[i] << '}';
        }
        else
        {
            os << v[i] << ',';
        } 
    }
    return os;
}



