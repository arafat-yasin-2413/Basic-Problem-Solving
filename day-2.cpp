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



// Problem 7 : Counting Vowels

#include <bits/stdc++.h>
using namespace std;

int countVowels (string str){
    int cnt = 0; 
    
    string vowels ="aeiouAEIOU";
    
    for (char ch: str) {
        if(vowels.find(ch)!= string::npos) {
            cnt++;
        }
    }
    
    return cnt;
}
int main() {
	// your code goes here
	string str;
	cin >> str;
	
	cout<<countVowels(str)<<endl;

}


// Problem 8 : Check Palindrome

#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome (string str){
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return str == reversed;
}
int main() {
	// your code goes here
	string str;
	cin >> str;
	
	if(checkPalindrome(str)) {
	    cout<<"Palindrome"<<endl;
	}
	else {
	    cout<<"Not Palindrome"<<endl;
	}


}


// Problem 9 : Capitalize first letter in a sentence

#include <bits/stdc++.h>
using namespace std;

string Capitalize(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }

    return str;
}

int main() {
    string str;

    getline(cin, str);

    cout << Capitalize(str) << endl;

    return 0;
}


// Problem 10 : Count occurence of letter 

#include <bits/stdc++.h>
using namespace std;

int countOccurence (string str, char x){
    int cnt = 0;
    for(char ch: str) {
        if(x == ch) {
            cnt++;
        }
    }
    
    return cnt;
}

int main() {
    string str;

    cin>>str;
    
    cout << "Occurrences of 'a' in 'banana': " << countOccurence("banana", 'a') << endl;

    return 0;
}