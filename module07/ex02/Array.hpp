#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdexcept>

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int _size;

    public:
        Array() : array(NULL), _size(0)
        {
        }

        Array(unsigned int n) : array(new T[n]()), _size(n)
        {
        }

        Array(const Array &other) : array(NULL), _size(0)
        {
            *this = other;
        }

        Array &operator=(const Array &other)
        {
            if (this != &other)
            {
                delete[] array;

                _size = other._size;

                if (_size == 0)
                    array = NULL;
                else
                {
                    array = new T[_size];

                    for (unsigned int i = 0; i < _size; i++)
                        array[i] = other.array[i];
                }
            }
            return *this;
        }

        ~Array()
        {
            delete[] array;
        }

        T &operator[](unsigned int index)
        {
            if (index >= _size)
                throw std::out_of_range("Index out of bounds");

            return array[index];
        }

        const T &operator[](unsigned int index) const
        {
            if (index >= _size)
                throw std::out_of_range("Index out of bounds");

            return array[index];
        }

        unsigned int size() const
        {
            return _size;
        }
};

#endif