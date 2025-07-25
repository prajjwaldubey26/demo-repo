# include <iostream>

using namespace std;

int main(){
int a=9,b=8;
cout<<"the value of a+b: \n"<<a+b<<endl;
cout << "the value of a-b: \n" << a - b <<endl;
cout << "the value of a*b: \n" << a *b<< endl;
cout << "the value of a/b: \n" << a / b<<endl;
cout << "the value of a%b: \n" << a % b<<endl;
cout << "the value of a++: \n" << a++<<endl;
cout << "the value of a--: \n" << a--<<endl;
cout << "the value of ++a: \n" << ++a<<endl;
cout << "the value of --a: \n" << --a<<endl;
cout<<"following are the comparison operattors"<<endl;
cout<<"the value of (a==b):"<<(a==b)<<endl;
cout << "the value of (a!=b) :" << (a != b) << endl;
cout << "the value of (a>b) :" << (a > b) << endl;
cout << "the value of (a<b) :" << (a < b) << endl;
cout << "the value of (a>=b) :" << (a >= b) << endl;
cout << "the value of (a<=b) :" << (a <= b) << endl;
cout<<"following are the logical operators:"<<endl;
cout<<"the value of and operator ((a==b)&&(a>b)):"<<((a==b)&&(a>b))<<endl;
cout << "the value of and operator ((a==b)||(a>b)):" << ((a == b) || (a > b)) << endl;
cout << "the value of and operator ((a==b)&&(a>b)):" << !((a == b) && (a > b)) << endl;
return 0;
}