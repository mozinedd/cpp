#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int size;

    public:
        Array() : array(NULL), size(0) {}

        Array(unsigned int n) : array(NULL), size(n)
        {
            if (n > 0)
                array = new T[n]();
        }

        Array(const Array &other) : array(NULL), size(other.size)
        {
            if (size > 0)
            {
                array = new T[size]();

                for (unsigned int i = 0; i < size; i++)
                    array[i] = other.array[i];
            }
        }

        Array &operator=(const Array &other)
        {
            if (this != &other)
            {
                delete [] array;

                array = NULL;
                size = other.size;

                if (size > 0)
                {
                    array = new T[size]();

                    for (unsigned int i = 0; i < size; i++)
                        array[i] = other.array[i];
                }
            }

            return *this;
        }

        ~Array()
        {
            delete [] array;
        }

        T &operator[](unsigned int index)
        {
            if (index >= size)
                throw std::out_of_range("Index out of bounds");

            return array[index];
        }

        const T &operator[](unsigned int index) const
        {
            if (index >= size)
                throw std::out_of_range("Index out of bounds");

            return array[index];
        }

        unsigned int getSize() const
        {
            return size;
        }
};

#endif