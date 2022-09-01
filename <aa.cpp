#include<iostream>
using namespace std;
int main ()
{ 
    pair<int , string>  A;

    A = {10, "Ali Abdullah"};
    cout << A.first <<" " << A.second << endl;

    pair<double , char> B;

    B = make_pair(91.01, '%');
    cout << B.first <<endl;
    cout << B.second <<endl;


    cout << B.first << B.second <<endl;
    return 0; 
}