//Authors: Robert DeValentine
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first;
  string last;

  //get user input
  cout<<"What is your first name?: ";
  cin>>first;
  cout<<endl<<"What is your last name?: ";
  cin>>last;
  
  //tell fortune
  cout<<endl<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl;

  return 0;
}
