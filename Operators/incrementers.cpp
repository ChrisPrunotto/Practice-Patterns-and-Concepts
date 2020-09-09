/* 
    There is a difference in how incrementation using the ++ operator works, based on whether or not it's before or after the value being incremented.

    Even though my habit is to prefer x++ (because, syntactically, operators tend to follow operands), ++x is more consistent with how I personally intuit the way the math works. That is to say, at first glance, I would expect "a = x++" to set "a" to 11, not 10. 

    This is a habit I need to overcome, because it will probably something that could trip me up when writing loops!

 */
#include <iostream>
#include <string>

using namespace std;

int main() 
{ 
    int x = 10, a, b; 
    a = x++; 

    b = ++x;
  
    cout << "Post Increment Operation"; 

    // Value of a will be 10. x is used to assign to "a" and x is THEN incremented. 
    cout << "\na = " << a;

    // Value of b will be 12. x is incremented and then assigned to "b". (Remember that it was incremented to 11 in the previous line)
    cout << "\nb = " << b;

    // Value of x is 12. It's been incremented twice. 
    cout << "\nx = " << x; 

  
    return 0; 
} 