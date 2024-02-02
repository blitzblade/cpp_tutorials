#include "math_utils.h"

namespace utilz
{
    double area(double length, double width)
    {
        return length * width;
    }

    double area(double length)
    {
        return length * length;
    }

    double area(Rectangle rectangle)
    {
        return rectangle.length * rectangle.width;
    }

    double pow(double base, int pow)
    {

        int result = 1;
        for (int i = 0; i < pow; i++)
        {
            result *= base;
        }
        return result;
    }

    template <typename T>
    void swap(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp;
    }

    template <typename T>
    void swap(T a[], T b[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            T temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }
    }
}
