// #include <iostream>
// #include <stack>
// #include <string>

// using namespace std;

// // Function to check if a character is an operator
// bool isOperator(char c) {
//     return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
// }

// // Function to return precedence of operators
// int precedence(char c) {
//     if (c == '*' || c == '/' || c == '%')
//         return 2;
//     else if (c == '+' || c == '-')
//         return 1;
//     return 0;
// }

// // Function to convert infix to postfix
// string infixToPostfix(string infix) {
//     stack<char> st;
//     string postfix = "";

//     for (char &ch : infix) {
//         if (isalnum(ch)) {
//             postfix += ch;  // Add operand to postfix expression
//         } else if (isOperator(ch)) {
//             while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
//                 postfix += st.top();
//                 st.pop();
//             }
//             st.push(ch);  // Push current operator to stack
//         }
//     }

//     // Pop remaining operators from the stack
//     while (!st.empty()) {
//         postfix += st.top();
//         st.pop();
//     }

//     return postfix;
// }

// int main() {
//     string infix;
//     cout << "Enter an infix expression: ";
//     cin >> infix;

//     string postfix = infixToPostfix(infix);
//     cout << "Postfix expression: " << postfix << endl;

//     return 0;
// }


//infix to postfix

#include<iostream>
#include<stack>
using namespace std;

int precedence(char c){
	if(c == '^')
	return 3;
	else if(c == '/' || c == '*')
	return 2;
	else if(c == '+' || c == '-')
	return 1;
	else 
	return -1;
}

char associativity(char ch){
	if(ch == '^')
	return 'R';
	else
	return 'L';
}

void infixToPostfix(string s){
	
	stack<char>stk;
	string result;
	
	for(int i = 0; i<s.length(); i++){
		char cha = s[i];
		
		if((cha>='a' && cha<='z') || (cha>='A' && cha<='Z') || (cha>='0' && cha<='9'))
		result+=cha;
		
		else if(cha == '(')
		stk.push('(');
		
		else if(cha == ')'){
			while(stk.top()!='('){
			result += stk.top();
			stk.pop();
		}
		stk.pop();
	}
		else{
			while(!stk.empty() && precedence(cha) <= precedence(stk.top()) && associativity(cha) == associativity(stk.top())){
				result+=stk.top();
				stk.pop();
			}
			stk.push(cha);
		}
	}
	while(!stk.empty()){
		result+=stk.top();
		stk.pop();
	}
	cout<<result<<endl;
}

int main(){
	string exp = "A+(B*C-(D/E^F)*G)*H";
	
	infixToPostfix(exp);
	return 0;
}