#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &data, int value)
{
    typename T::iterator it = std::find(data.begin(), data.end(), value);

    if (it == data.end())
        throw std::runtime_error(" not found ");
    return it;
}

#endif