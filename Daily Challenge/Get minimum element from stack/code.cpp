
#include <bits/stdc++.h>
using namespace std;

/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    public:
           stack<int> s;
           int min_ele;

            int getMin(){
                if(s.empty())
                    return -1;
                else 
                    return min_ele;
            }
            

            int pop(){
                int x;
                if(s.empty())
                    return -1;
                else
                    x = s.top();
                    s.pop();
                    
                    if(x < min_ele){
                        int k = min_ele;
                        min_ele = 2*min_ele - x;
                        return k;
                    }
                    else
                        return x;
            }
           
            void push(int x){
               if(s.empty()){
                   s.push(x);
                   min_ele = x;
               }
               else{
                   if(x < min_ele){
                       s.push(2*x - min_ele);
                       min_ele = x;
                   }
                   else s.push(x);
               }
            }
};


int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}
