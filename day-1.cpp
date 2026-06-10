// Problem 1 : Swap two variables

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int a = 5; 
	int b = 10; 
	
	
	a = a + b; // 5 + 10 = 15 
	b = a - b; // 15 - 10 = 5
	a = a - b; // 15 - 5 = 10
	

    cout << "After Swap a = "<< a <<" ,b=" << b <<endl;

}


// Problem 2 : Check Even / Odd

#include <bits/stdc++.h>
using namespace std;

bool isEven (int n) {
    return (n % 2 == 0) ;
}

int main() {

    int x ; 
    cin >> x; 
    
    if(isEven(x)) {
        cout << x << " is Even"<<endl;
    }
    else {
        cout << x << " is Odd"<<endl;
    }


}
