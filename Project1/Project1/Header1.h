#pragma once

#ifndef FIRSTDLL_API
#define FIRSTDLL_API extern "C" __declspec(dllimport)
#endif
FIRSTDLL_API int Sum(int a, int b);
FIRSTDLL_API int Sub(int c, int d);
FIRSTDLL_API int Mult(int a, int b);
FIRSTDLL_API int Div(int a, int b);
FIRSTDLL_API int fooInDll();
FIRSTDLL_API const double Pi;
