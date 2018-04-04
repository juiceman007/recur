#include <iostream>
#include "string.h"

using namespace std;

bool isPalindrome(string s){
   string copy = s.substr (s.size(), 0);
   if (copy == s){
	   return true;
   }
   else {
	   return false;
   }
}

int main() {
string str;
cout << " please enter a word: ";
cin >> str;

bool answer = isPalindrome(str);

if (answer == true){
  cout << "\n\n" << str << " is a palindrome " << endl;
  
}
else {
   cout << "\n\n" << str << " is not a palindrome " << endl;
}
 return 0;
}
