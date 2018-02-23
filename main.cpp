//Author: Tanya Medina-Mercado
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5];
  int numItems = 0;
  char input;
  string item;

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if (input == 'a' || input == 'A')
  {
  cout<<"What is the item?";
  cin>>item;
  list[0];
  } 
  if (numItems > 5)
  {
  cout<<"You'll need a bigger list!";
  }
  return 0;
}
