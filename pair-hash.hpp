/**
 * Author: Connor Billings
 * Date  : 18 December 2018
 *
 * Description:
 *  A type that defines a hash function for a pair of types T1 and T2.
 *
 * References:
 *  Design based off example code at: https://en.cppreference.com/w/cpp/utility/hash
 **/

#ifndef PAIRHASH_HPP
#define PAIRHASH_HPP

#include <functional>
#include <utility>

template <class T1, class T2>
struct pair_hash
{
    using pair_type = std::pair<T1, T2>;

    size_t
    operator()(const pair_type &p) const
    {
        size_t h1 = std::hash<T1>{}(p.first);
        size_t h2 = std::hash<T2>{}(p.second);

        return h1 ^ (h2 << 1);
    }
};

#endif