#include "Span.hpp"

Span::Span(): size(0)
{
}

Span::Span(unsigned int n): size(n)
{
}

Span::Span(const Span &copy): size(copy.size), number(copy.number)
{
}

Span& Span::operator=(const Span &copy)
{
    if (this != &copy)
    {
        this->size = copy.size;
        this->number = copy.number;
    }
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int nb)
{
    if (number.size() >= size)
        throw std::length_error("can't add more numbers");
    number.push_back(nb);
}

int Span::shortestSpan()
{
    if (number.size() < 2)
        throw std::length_error("need 2 numbers");

    std::vector<int> sorted(number);
    std::sort(sorted.begin(), sorted.end());

    int minSpan = INT_MAX;
    
    for (size_t i = 1; i < sorted.size(); i++)
    {
        int diff = static_cast<long>(sorted[i]) - static_cast<long>(sorted[i - 1]);
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (number.size() < 2)
        throw std::length_error("need 2 numbers");

    std::vector<int>::iterator maxIt = std::max_element(number.begin(), number.end());
    std::vector<int>::iterator minIt = std::min_element(number.begin(), number.end());
    int maxspan = *maxIt - *minIt; 
    return maxspan;
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it != end; ++it)
    {
        if (number.size() >= size)
            throw std::length_error("Span is full");
        number.push_back(*it);
    }
}