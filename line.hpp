/**
 * Author: Connor Billings
 * Date  : 18 December 2018
 *
 * Description:
 *  A type that can be used with istream iterators that reads in a full line of input.
 *
 * Notes:
 *  This type defines an operator to cast to std::string; 'auto' cannot be used to get the string representation of this type.
 *
 * References:
 *  Design idea came from: https://stackoverflow.com/questions/1567082/how-do-i-iterate-over-cin-line-by-line-in-c/1567703#1567703
 **/

#ifndef LINE_HPP
#define LINE_HPP

#include <string>

class line
{
    std::string data;

  public:
    friend std::istream &operator>>(std::istream &in, line &l)
    {
        return std::getline(in, l.data);
    }

    operator std::string() const
    {
        return data;
    }
};

#endif