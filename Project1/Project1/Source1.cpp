#define FIRSTDLL_API extern "C" __declspec(dllexport)

#include "Header1.h"

/*FIRSTDLL_API const double Pi = 3.1415;

FIRSTDLL_API int fooInDll()
{
	int a = 100;
	return a;
}*/

FIRSTDLL_API int Sum(int a, int b)
{
	a = 45, b = 5;
	return a + b;
}

FIRSTDLL_API int Sub(int c, int d)
{
	c = 45, d = 5;
	return a - b;
}
FIRSTDLL_API int Mult(int a, int b)
{
	a = 45, b = 5;
	return a * b;
}
FIRSTDLL_API int Div(int a, int b)
{
	a = 45, b = 5;
	return a / b;
}
