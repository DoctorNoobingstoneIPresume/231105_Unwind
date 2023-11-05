#include "f.hpp"

#include <cstdlib>

template <>
float f <0> (float arg)
{
	std::abort ();
	return - arg;
}
