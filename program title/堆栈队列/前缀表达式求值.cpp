#include <bits/stdc++.h>
#include "string"
using namespace std;

// double solve(double left, double right, char op) {
//     if(op == '+')
//         return left + right;
//     else if(op == '-')
//         return left - right;
//     else if(op == '*')
//         return left * right;
//     else if(op == '/') {
//         if(right == 0) {
//             cout<<"ERROR";
//             exit(0);
//         }
//         return left / right;
//     }
// }

int main()
{
    string part;
    stack <double> sd;
    int size;
    while(cin>>part) {
        size++;
    }
    for(int i=size-1; i>=0; i--) {
         if(isdigit(part[i])) {
            double num = atof(part.c_str());
            sd.push(num);
        } else {
//          if (part[i]=="+" || part[i]=="-" || part[i]=="*" || part[i]=="/") {
//             if (sd.empty()) {
//                 cout<<"ERROR"<<endl;
//                 return 0;
//             }
            double right = sd.top();
            sd.pop();
            if (sd.empty()) {
                cout<<"ERROR"<<endl;
                return 0;
            }
            double left = sd.top();
            sd.pop();
            if(part[i] == '+')
                sd.push(left + right);
            else if(part[i] == '-')
                sd.push(left - right);
            else if(part[i] == '*')
                sd.push(left * right);
            else if(part[i] == '/') {
                if(right == 0) {
                    cout<<"ERROR";
                    exit(0);
                }
                sd.push(left / right);
            }
        }
    }
    cout<<fixed<<setprecision(1)<<sd.top()<<endl;
}
