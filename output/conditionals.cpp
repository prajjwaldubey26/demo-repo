#include <iostream>
#include <cctype> // used fpr character classification
using namespace std;

int main()
{
  int a, b;
  cout << "enter the value of a " << endl;
  cin >> a;
  cout << "enter the value of b " << endl;
  cin >> b;

  if (a > b)
  {
    cout << "A is greater.";
  }

  // if (a<b){
  //   cout<<"B is greater.";

  // }
  /* int a;
   cout<<"enter the value of a "<<endl;
   cin>>a;

   if(a>0){
    cout<<"a is a positive number ";

   }
   else if(a<0){
    cout<<" a is a negative number";
   }
   else{
    cout<<"a is zero";
   }
  */
  /*char ch;
  cout<<"enter a character "<<endl;
  cin>>ch;


  if(isupper(ch) ){
    cout<<"this is a uppercase";


  }

  else if(islower(ch)){
    cout<<"this is a lower case ";
  }
   else if(isdigit(ch)){
    cout<<"this is a number";
  }
  else {
    cout<<"this is a special character";
  }*/
  /*int n;
  cin>>n;
   int i = 1;

  while(i<=n){
    cout<<i <<endl;
  i=i+1;
  }*/
  /*int n;
  cin>>n;
  int i =1;
   int sum=0;
  while(i<=n){
    sum=sum+i;
    i=i+1;


  }
  cout<<"the value of sum of n natural numbers is  :"<<sum;
  */

  /*int n ;
  cin>>n;
  int i =2;
  int sum =0;

  while(i<=n){
    sum = sum + i ;
    i = i +2 ;


  }
  cout<<" the vvalue of sum of n even numbers is : "<<sum;
  */
  /*float celsius;
  float fahrenheit;
  cout<<" enter the fahrenheit"<<endl;
  cin>>fahrenheit;
  celsius=(fahrenheit-32.0)*(5.0/9.0);
  cout<<"the tempreature is celsius is : "<<celsius;
  return 0;
  */

  /*int n;
  cin >> n;
  int i = 2;
  while (i < n)
  {
    if (n % i == 0)
    {
      cout << " this is not a prime . " << i << endl;
    }
    else
    {
      cout << " this is a prime number:" << i << endl;
    }
    i = i + 1;
  }*/

  /*
  int n ;
  cin>>n;
   int i=1;
   int sout = 1 ;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<<sout<<" ";
      sout= sout + 1 ;
      j= j+1;

    }
    cout<<endl;
    i=i+1;
  }
  */
  /*int n;
  cin>>n;
   int row = 1;
   while(row<=n){
    int col=1;
    while(col<=row){
      cout<<row;
      col = col + 1;

    }
    cout<<endl;
    row = row + 1 ;

   }
  */

  // int n;
  // cin >> n;
  // int row = 1;
  // while (row <= n)
  // {
  //   int col = 1;
  //   while (col <= row)
  //   {
  //     cout << row ;
  //     col = col + 1;
  //   }
  //   cout << endl;
  //   row = row + 1;
  // }

  // //
  // int n;
  // cin>>n;
  // int i = 1;
  // while(i<=n){
  //   int j = 1;
  //   while(j<=n){
  //     cout<<i;
  //     j=j+1 ;
  //   }

  // cout<<endl;
  // i=i+1;

  // }

  // int n;
  // cin >> n;
  // int i = 1;
  // while (i <= n)
  // {
  //   int j = 1;
  //   while (j <= n)
  //   {
  //     cout << j;
  //     j=j+1;
  //   }

  //   cout << endl;
  //   i = i + 1;
  //}

  int n;
  cin >> n;
  int i = 7;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << j;
      j = j + 1;
    }

    cout << endl;
    i = i + 1;
  }
}
