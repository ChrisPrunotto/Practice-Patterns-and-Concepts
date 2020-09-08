/* Ternary Operators can be used to create shorthand statements for if-else statements.

    The most common expression is:
    
        (expression to > be evaluated) ? expression_if_non-zero : expression_if_zero;

    for example, the following:
    
        (a > b)? a : b;

    means...if a is greater than b, return a. else, return b.

    It's important to note that the second and third expressions are not evaluated based on whether or not the first expression is true or false, they're evaluated based on whether that expression returns ZERO or not. 

    The ternary operator also has it's own return type. Its return type is the SECOND expression in the series of three, and the third expression must match the second expression's type (or at least must be implicitly convertible). The first expression being evaluabled does not need to follow this rule.

*/
#include <iostream>
using namespace std;

class TernaryOperators
{
//working example. Note that all three arguments in the ternary operation are ints.
    int workingExample1(){
        int a = 10;
        int b = 20;
        int max = a > b ? a : b;

        std::cout << "Maximum value = " << max << "\n";
        return 0;
    }

//Another working example. Note that expression 2 (a float) and expression 3 (a constant int of zero) are implicitly convertible, so this works fine.
    int workingExample2() 
    { 
        int test = 0; 
        float fvalue = 3.111f; 
        
        cout << (test ? fvalue : 0) << endl; 
        return 0; 
    } 

//This example will not compile. Notice how expression 2 is a String, and expression 3 is an int - those are not implicitly convertible.
    int compilationError() 
    { 
        int test = 0; 
        cout << test ? "A String" : 0 << endl; 
        
        return 0; 
    } 

//This example APPEARS to compile correctly, due to the inclusion of the parenthesis around the ternary operation, but will produce a runtime error, because an int is returned when a (char *) was expected. Remember that even though the code of the second expression isn't run, it's still being used to determine what return type will be expected!
    int runtimeError() 
    { 
        int test = 0; 
        cout << (test ? "A String" : 0) << endl; 
        
        return 0; 
    } 

};