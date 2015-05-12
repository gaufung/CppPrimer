#include <stack>
#include <string>
#include <iostream>
#include <algorithm>
using std::string; using std::cout; using std::endl; using std::stack;
void popParentthesizedExpression(stack<char>& stk,const char& replaceChar){
    while(!stk.empty()&&stk.top()!='(') {
       stk.pop();
    }
    //the top is '(',pop it
    stk.pop();
    stk.push(replaceChar);
}
int main()
{
    string expression{"This is (pezy(gau)) (fung)"};
    stack<char> stk;
    string newExpression;
    for(const auto val:expression){
        if(val==')')
            popParentthesizedExpression(stk,'#');
        else
            stk.push(val);
    }
    string repstr;
    while (!stk.empty())
    {
        repstr += stk.top();
        stk.pop();
    }
    std::reverse(repstr.begin(),repstr.end());
    cout<<repstr<<endl;
    return 0;
}