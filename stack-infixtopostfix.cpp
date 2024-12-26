#include <bits/stdc++.h>
using namespace std;
//Function to return precedence of operators
int precedence(char c)
{
    if(c == '^')
    {

        return 3;

    }
    else if (c == '/' || c == '*'){

        return 3;

    }
    else if (c == '+' || c == '-'){

        return 1;

    }
    else{

        return -1;

    }
}
 
void infixToPostfix(string infix)
{

    stack<char> operators;
    string postfix="";
    for(int i=0; i<infix.length(); i++)
    {

        char c = infix[i];
 
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z') || (c >= '0' && c <= '9')){

        postfix += c;

    }

    else if(c == '(')

    {

        operators.push('(');

    }

    else if(c == ')')

    {

        while(operators.top() != '(')

        {

            postfix += operators.top();

            operators.pop();

        }

        operators.pop(); // remove '('

    }

    else

    {

        while (!operators.empty() && precedence(c) <= precedence(operators.top()))

        {

            postfix += operators.top();

            operators.pop();

        }

        operators.push(c);

    }

    }
 
    // pop all the remaining elements from the stack

    while(!operators.empty())

    {

        postfix += operators.top();

        operators.pop();

    }
 
    cout<< "Postfix expression is: " << postfix << endl;

}
 
int main()

{

    string exp;

    cout<< "Enter the infix expression: ";

    cin>> exp;

    cout<< endl;

    // string exp = "a+b*(c^d-e)^(f+g*h)-i";

    infixToPostfix(exp);

    return 0;

}
 
 
 
