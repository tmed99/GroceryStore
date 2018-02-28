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
  
  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  
  if (numItems > 5)
  {
  cout<<"You'll need a bigger list!";
  }

  if (input == 'a' || input == 'A')
  {
  cout<<"What is the item? ";
  cin>>list[0];
  }
  } while (input == 'a' || input == 'A');

  if (input == 'q' || input == 'Q')
  {
  cout<<"==ITEMS TO BUY==";
  cout<<"\n1 "<<list[0]<<"";
  cout<<"\n2 "<<list[1]<<"";
  cout<<"\n3 "<<list[2]<<"";
  cout<<"\n4 "<<list[3]<<"";
  cout<<"\n5 "<<list[4]<<"";
  }

 return 0;
}
