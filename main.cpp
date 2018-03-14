//Author: Tanya Medina-Mercado
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string>list;
  char input;
  string item;
  
  list.resize(0);

  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
   
   if (input == 'a' || input == 'A')
      {
      do
        {
        cout<<"What is the item? (Enter 'q' to quit)";
        cin>>item;
        list.push_back(item);
        } while ( item != 'q' || item != 'Q');
      
      list.pop_back();

      if (list.empty() == true)
         {
         cout<<"No items to buy!\n";
         }
      if (list.empty() == false)
         {
         cout<<"The items in your list are..."<<endl;
         }
       }

   if (input == 'q' || input == 'Q')
      {
       if (list.empty() == true)
         {
         cout<<"No items to buy!\n";
         }
      }

return 0;
 
 }
