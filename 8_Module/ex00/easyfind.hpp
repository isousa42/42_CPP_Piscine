#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

/*
**  For this exercise, we are introduce to iterators and the concept of "traversing containers".
**  Basically, it is a way of iterate with each element of a container. An interator represents a certain position of a container
**  and it is the way to go specially when we are working with templates (we don't know the data type - fo example, to return a position from a funtion).
**  Check this out for better understanding: https://www.simplilearn.com/tutorials/cpp-tutorial/iterators-in-cpp
**
**  Iteratores are used like normal variables, they need to be declared and inicialized.
**  The best methods to inicialize are begin() - It returns the first iterator - and end() - returns last element - of the container.
**  Remember indexes for strings in c ? Same thing.
*/

template <typename T>
typename T::iterator easyfind(T &haystack, int needle)
{
    typename T::iterator index = std::find(haystack.begin(), haystack.end(), needle);
    if (index == haystack.end())
    {
        if (*index != needle)
            throw (std::exception());
    }
    return (index);
}

#endif