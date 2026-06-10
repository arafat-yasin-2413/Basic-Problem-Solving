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



// Problem 3 : Find Largest number among 3 

#include <bits/stdc++.h>
using namespace std;

int largestAmongThreeNumbers ( int a, int b, int c) {
    return max (a, max (b,c));
}

int main() {

    int a, b, c;
  
    cin >> a >> b >> c; 
    
    // cout<<"Largest number is "<<largestAmongThreeNumbers(a,b,c)<<endl;
    
    if (a >= b && a >= c) {
        cout << a <<" is Largest"<<endl;
    }
    else if(b >= a && b >= c) {
        cout << b <<" is Largest"<<endl;
    }
    else {
        cout << c <<" is Largest"<<endl;
    }


}


