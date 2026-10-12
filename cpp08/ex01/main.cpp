#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::vector<int> vec;
    Span sp1 = Span(1000);
    for (int i = 0; i < 1000; i++)
        vec.push_back(i);
    
    sp1.addRange(vec.begin(), vec.end());
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;
}