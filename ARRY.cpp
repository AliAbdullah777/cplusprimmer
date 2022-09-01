#include<iostream>
#include<array>
#include<string>
#include<vector>
using namespace std;
using std :: string;


int main ()
{
    vector<int> v1(10);    // v1 has ten elements with value 0
    vector<int> v2{18};    // v2 has one element with value 10
    vector<int> v3(10, 1); // v3 has ten elements with value 1
    vector<int> v4{10, 1}; // v4 has two elements with values 10 and 1


    return 0;
}