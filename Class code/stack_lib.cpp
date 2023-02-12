// CPP program to demonstrate working of STL stack 
#include <iostream> 
#include<stack>
using namespace std; 

void showstack(stack <int> T) 
{ 
	while (!T.empty()) 
	{ 
		cout << '\t' << T.top(); 
		T.pop(); 
	} 
	cout << '\n'; 
} 

int main () 
{ 
	stack <int> s; 
	s.push(10); 
	s.push(30); 
	s.push(20); 
	s.push(5); 
	s.push(1); 

	cout << "The stack is : "; 
	showstack(s); 

	cout << "\ns.size() : " << s.size(); 
	cout << "\ns.top() : " << s.top(); 


	cout << "\nshow_stack : "; 
	s.pop(); 
	showstack(s); 

	return 0; 
} 
