//author: Noble LeDuc
#include<vector>
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
  string dump;
  vector<string> list; //array of 5 strings
  int numItems = 0;
  char input;
  int counter=0;
  do
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  input=toupper(input);
    if((input=='A'))
    {
      cout<<"What is the item?\n";
      cin>>dump;
      list.push_back (dump);
   }
  }
  while(!(input=='q') && !(input=='Q'));
  if(list.size()==0)
  {
    cout<<"No items to buy!\n";
  }
  else
  {
    cout<<"==ITEMS TO BUY==\n";
    for(int numItems=0;numItems<list.size();numItems++)
    {
      cout<<counter+1<<" "<<list.at(numItems)<<"\n";
      counter++;
    }
  }
  return 0;
}
