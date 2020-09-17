#ifndef rational_numbers_h
#define rational_numbers_h

#include <iostream>
#include <math.h>
using namespace std;

class rational_number
{
    private:
    long num;
    long den;

    public:
inline static long greatest_common_denominator(long number_1, long number_2)
    {
        //recursive Euclid set that if the first is 0, the
        //the GCD is second
        if (number_1 == 0)
            return number_2;
        //return until 0
        return greatest_common_denominator(number_2 % number_1, number_1);
    }

    rational_number() 
    {
        num = 0;
        den = 0;
    }
    rational_number(long a, long b = 1)
    {
        num = a;
        den = b;
    }

inline void input(istream &input)
    {
        input >> num;
        input >> den;
    }

inline void output(ostream &output)
    {
        if(num < 0 && den > 0)
            output << num << "/" << den;
        else if(num > 0 && den < 0)
            output << -num << "/" << -den;
        else
            output << num << "/" << den;
    }

inline void decimal(ostream &decimal)
    {
        if(num < 0 && den > 0)
            decimal << (static_cast <double>(num)) / (static_cast<double>(den)) * 1.0;
        else if (num > 0 && den < 0)
            decimal << (static_cast <double>(-num)) / (static_cast<double>(- den)) * 1.0;
        else
            decimal << (static_cast <double>(num)) / (static_cast<double>(den)) * 1.0;
    }

inline friend rational_number addition(const rational_number &a, const rational_number &b);
inline friend rational_number subtraction(const rational_number &a, const rational_number &b);
inline friend rational_number multiplication(const rational_number &a, const rational_number &b);
inline friend rational_number division(const rational_number &a, const rational_number &b);
inline friend bool equal(const rational_number &a, const rational_number &b);
inline friend bool less_than(const rational_number &a, const rational_number &b);
};

inline rational_number addition(const rational_number &a, const rational_number &b)
{
   long local_numerator = a.num * b.den + a.den * b.num;
   long local_denominator = a.den * b.den;

   long greatest_common_denominator = rational_number::greatest_common_denominator(local_numerator, local_denominator);

   return rational_number(local_numerator / greatest_common_denominator, local_denominator / greatest_common_denominator);
}

inline rational_number subtraction(const rational_number &a, const rational_number &b)
{
   long local_numerator = a.num * b.den - a.den * b.num;
   long local_denominator = a.den * b.den;

   long greatest_common_denominator = rational_number::greatest_common_denominator(local_numerator, local_denominator);

   return rational_number(local_numerator / greatest_common_denominator, local_denominator / greatest_common_denominator);
}

inline rational_number multiplication(const rational_number &a, const rational_number& b)
{
   long local_numerator = a.num * b.num;
   long local_denominator = a.den * b.den;

   long greatest_common_denominator = rational_number::greatest_common_denominator(local_numerator, local_denominator);

   return rational_number(local_numerator / greatest_common_denominator, local_denominator / greatest_common_denominator);
}

inline rational_number division(const rational_number &a, const rational_number &b)
{
   long local_numerator = a.num * b.den;
   long local_denominator = a.den * b.num;

   long greatest_common_denominator = rational_number::greatest_common_denominator(local_numerator, local_denominator);

   return rational_number(local_numerator / greatest_common_denominator, local_denominator / greatest_common_denominator);
}

inline bool equal(const rational_number &a, const rational_number &b)
{
    return (a.num * b.den == b.num * a.den);
}

inline bool less_than(const rational_number &a, const rational_number &b)
{
    return (a.num * b.den < b.num * a.den);
}
#endif