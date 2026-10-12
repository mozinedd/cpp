#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>

class Span
{
    private:
        unsigned int        size;
        std::vector<int>    number;

    public:
        
        Span();
        Span(unsigned int n);
        Span(const Span &copy);
        Span& operator=(const Span &copy);
        ~Span();

        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();

};

#endif