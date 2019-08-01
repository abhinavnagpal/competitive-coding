#include<iostream>
using namespace std;
int main() {
    char n;
    cin>>n;
    if ((int)n>=65 && (int)n<=90){
        cout<<"UPPERCASE";
    }
    else if ((int)n>=97 && (int)n<=122){
        cout<<"LOWERCASE";

    }
    else{
        cout<<"INVALID";
    }
	return 0;
}