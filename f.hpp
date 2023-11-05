#pragma once

template <unsigned I>
float f (float arg)
{
	return f <I - 1> (arg) - 1;
}

template <>
float f <0> (float arg);
