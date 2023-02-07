#ifndef SPAN_HPP
#define SPAN_HPP
 
#include <vector>
#include <algorithm>
#include <execption>

class Span
{
   public:
      Span();
      Span(const unsigned int N);
      Span(const Span& copy);
      ~Spain();
      Span &operator=(const Span& copy);

	  void	addNumber(int N);
	  void	addNumber(std::vector<int>const_iterator begin, std::vector<int>const_iterator end, int N);
	  unsigned int shortestSpan();
	  unsigned int longestSpan();

   private:
	  unsigned int _N;
	  std::vector<int> _tab;
};
#endif // SPAN_H

