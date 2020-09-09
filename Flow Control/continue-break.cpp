/* 
    The "continue" keyword can be used to break a single execution of a larger loop.

	"break", on the other hand, will break out of the entire loop.

 */
#include <iostream>
#include <string>

using namespace std;

int main() 
{ 
	//count upwards until we get to 4, then skip 4. Notice that it breaks the for loop, not just the if statement.
	for (int i = 0; i < 10; i++) {
		if (i == 4) {
			continue;
		}
		cout << i << "\n";
	}
	//count backwarrds from 10 until we get to 4, then break the entire for loop.
	for (int x = 10; x > 0; x--) {
		if (x == 4) {
			break;
		}
		cout << x << "\n";
	}

	//Nested for loops counting 0-99, skipping all numbers ending in 3, and skip all of the 20s.
	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++)
		{
			if (a == 2 || b == 3)
			{
				continue;
			}
			cout << a << b << endl;
		}
	}

	//Nested for loop counting 0-99, breaking on 25. Notice that the "break" only cancels out the interior for loop, not both.
	for (int a = 0; a < 10; a++) {
		for (int b = 0; b < 10; b++)
		{
			if (a==2 && b==5)
			{
				break;
			}
			cout << a << b << endl;
		}
	}
} 