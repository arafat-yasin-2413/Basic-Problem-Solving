// Problem 6: reverse string

#include <bits/stdc++.h>
using namespace std;

string reverseString(string str){
    reverse(str.begin(), str.end());
    return str;
}

int main() {
	// your code goes here
	string st;
	cin >> st;
	
	cout<<reverseString(st)<<endl;

}