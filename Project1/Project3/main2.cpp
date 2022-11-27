#include <Windows.h>
#include <tchar.h>
#include <iostream>
using namespace std;

typedef int (*fptr) ();

int main()
{
    HINSTANCE hInstLib = LoadLibrary(TEXT("Project1.dll")); // !!!

    if (hInstLib == NULL)
    {
        cout << "Can`t load library Project1.dll" << endl;
        return 0;
    }
    /*fptr fooInDll = (fptr)GetProcAddress(hInstLib, "fooInDll");
    if (fooInDll == NULL)
    {
        cout << "Can`t load function fooInDll" << endl;
    }
    else
    {
        cout << "fooInDll: " << fooInDll() << endl;
    }*/
  
    fptr Sum = (fptr)GetProcAddress(hInstLib, "Sum");
    if (Sum == NULL)
    {
        cout << "Can`t load function Sum" << endl;
    }
    else
    {
        cout << "Sum: " << Sum() << endl;
    }
  
    fptr Sub = (fptr)GetProcAddress(hInstLib, "Sub");
    if (Sub == NULL)
    {
        cout << "Can`t load function Sub" << endl;
    }
    else
    {
        cout << "Sub: " << Sub() << endl;
    }

    fptr Mult = (fptr)GetProcAddress(hInstLib, "Mult");
    if (Mult == NULL)
    {
        cout << "Can`t load function Mult" << endl;
    }
    else
    {
        cout << "Mult: " << Mult() << endl;
    }

    fptr Div = (fptr)GetProcAddress(hInstLib, "Div");
    if (Div == NULL)
    {
        cout << "Can`t load function Div" << endl;
    }
    else
    {
        cout << "Div: " << Div() << endl;
    }
    

    FreeLibrary(hInstLib);


}
