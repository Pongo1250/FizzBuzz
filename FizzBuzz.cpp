#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> fizzBuzz(int n) {
vector<string> v;
for (int a  = 1; a<n+1; a = a +1){
        if(a%3 ==0 && a%5 == 0){
        cout<< "\"FizzBuzz\"" <<endl;
        v.push_back("FizzBuzz");
}
        else if(a%3 == 0){
        cout<< "\"Fizz\","<< endl;
        v.push_back("Fizz");
}
        // % = modulo. Checks the remainder of the quotient.
        else if(a%5 == 0){
        cout<< "\"Buzz\"," << endl;
        v.push_back("Buzz");
            
        }
        else{
        cout << "\"" << a << "\","<< endl;
        string s = to_string(a);
        v.push_back(s);
}
}
return v;
}

};
