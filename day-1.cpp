// Problem 1 : Swap two variables

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a = 5; 
	int b = 10; 
	
	
	a = a + b; // 5 + 10 = 15 
	b = a - b; // 15 - 10 = 5
	a = a - b; // 15 - 5 = 10
	

    cout << "After Swap a = "<< a <<" ,b=" << b <<endl;

}
