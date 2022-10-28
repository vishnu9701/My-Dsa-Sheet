#include<bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
   stack<char>st;

   for(int i=0;i<s.length();i++)
   {
      if(st.empty())
      {
         st.push(s[i]);
      }
      else if((st.top()=='(' && s[i]==')') || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']')  )
      {
         st.pop();
      }
      else
      {
         st.push(s[i]);
      }
   }
   return st.empty()==1;
}
int main()
{

   string s = "()[{}()]";
   if (isValid(s))
      cout << "True" << endl;
   else
      cout << "False" << endl;
}
