#include <bits/stdc++.h>

using namespace std;

int main()
{
   stack <int> stk;
   stack <int> tmp;
   stk.push(4);
   stk.push(2);
   stk.push(3);
   stk.push(1);
   stk.push(5);
   while(stk.empty()==false)
   {
       if(tmp.empty())
       {
           auto x = stk.top();
           stk.pop();
           tmp.push(x);
       }
       else
       {
           if(stk.top()<tmp.top())
           {
               auto x = stk.top();
               stk.pop();
               while(x<tmp.top())
               {
                   stk.push(tmp.top());
                   tmp.pop();
                   if(tmp.empty())
                   {
                       break;
                   }
               }
               tmp.push(x);
           }
           else
           {
               auto x = stk.top();
               stk.pop();
               tmp.push(x);
           }
       }
   }
  while(!tmp.empty())
  {
      stk.push(tmp.top());
      tmp.pop();
  }
  while(!stk.empty())
  {
      cout<<stk.top()<<endl;
      stk.pop();
  }
   return 0;
}