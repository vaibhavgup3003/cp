// // EXAMPLE 1 (to reverse a string using stack)
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//    string str;
//    cin >> str;
//    stack<char> s;
//    for (int i = 0; i < str.length(); i++)
//    {
//     s.push(str[i]);
//    }

//    cout << "Reversed string is: \n";
//    while(!s.empty())
//    {
//     cout << s.top();
//      s.pop();
//     }
//    }

// // EXAMPLE 2 (to evaluate a postfix expression)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string pfexp;
//     cin >> pfexp;
//     stack<int> s;
//     for (int i = 0; i < pfexp.length(); i++)
//     {
//         char ch = pfexp[i];
//         if (isdigit(ch))
//             s.push(ch-'0');
//         else
//         {
//             int op1 = s.top();
//             s.pop();
//             int op2 = s.top();
//             s.pop();
//             // applying that operator with last two operands.

//             switch (ch)
//             {
//             case '*':
//                 s.push(op2 * op1);
//                 break;
//             case '+':
//                 s.push(op2 + op1);
//                 break;
//             case '/':
//                 s.push(op2 / op1);
//                 break;
//             case '-':
//                 s.push(op2 - op1);
//                 break;
//             }
//         }
//     }
//     cout << "Evaluation " << s.top();
// }

// EXAMPLE 3 (conversion of infix into postfix)
#include <bits/stdc++.h>
using namespace std;
int precedence(char c)
{
    if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
int main()
{
    string str;
    cin >> str;
    string ans;
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (isdigit(ch))
            ans = ans + ch;
        else if (s.empty())
            s.push(ch);
        else if (ch == '(')
            s.push(ch);
        else if (ch == ')')
        {
            while (s.top() != '(')
            {
                ans = ans + s.top();
                s.pop();
            }
            s.pop();
        }
        else
        {
            while (!s.empty() && precedence(ch) <= precedence(s.top()))
                s.push(ch);
            if (!s.empty() && precedence(ch) > precedence(s.top()))
            {
                ans = ans + s.top();
                s.pop();
            }
        }
    }
    while(!s.empty()){
    ans += s.top(); s.pop();}

    cout << ans << endl;
}

