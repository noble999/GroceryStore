//author: Noble LeDuc
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
  string dump;
  string list[5]; //array of 5 strings
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
      if(numItems>=5)
      {
        cout<<"You'll need a bigger list!\n";
      }
      else
      {
        list[numItems]=dump;
        numItems++;
      }
    }
  }
  while(!(input=='q') && !(input=='Q'));
  cout<<"==ITEMS TO BUY==\n";
  for(int numItems=0; numItems<5; numItems++)
  {
    // counter=1;
     cout<<counter+1<<" "<<list[numItems]<<"\n";
     counter=1+counter;
  }
  return 0;
}
