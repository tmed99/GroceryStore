//Author: Tanya Medina-Mercado
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5];
  int numItems = 0;
  char input;

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if (input == 'q' || input == 'Q')
  cout<<"Thanks,\n";
  else
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  }

return 0;
}
