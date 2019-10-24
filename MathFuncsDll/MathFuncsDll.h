
//MathFuncsDll.h

/*
  When the MATHFUNCSDLL_EXPORTS symbol is defined, the MATHFUNCSDLL_API symbol will set the __declspec(dllexport) 
  modifier in the member function declarations in this code. This modifier enables the function to be exported by 
  the DLL so that it can be used by other applications. When MATHFUNCSDLL_EXPORTS is undefined, MATHFUNCSDLL_API 
  defines the __declspec(dllimport) modifier in the member function declarations. This modifier enables the compiler 
  to optimize the importing of the function from the DLL for use in other applications. By default, 
  MATHFUNCSDLL_EXPORTS is defined when your MathFuncsDll project is built. For more information,
*/

#ifdef MATHFUNCSDLL_EXPORTS
#define MATHFUNCSDLL_API __declspec(dllexport)
#else
#define MATHFUNCSDLL_API __declspec(dllimport)
#endif


namespace MathFuncs
{
    // This class is exported from the MathFuncsDll.dll
    class MyMathFuncs
    {
    public: 
        // Returns a + b
        static MATHFUNCSDLL_API double Add(double a, double b); 

        // Returns a - b
        static MATHFUNCSDLL_API double Subtract(double a, double b); 

        // Returns a * b
        static MATHFUNCSDLL_API double Multiply(double a, double b); 

        // Returns a / b
        // Throws const std::invalid_argument& if b is 0
        static MATHFUNCSDLL_API double Divide(double a, double b); 
    };
}