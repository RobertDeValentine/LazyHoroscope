//Authors: Robert DeValentine
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  string first;
  string last;
  string nickName;
  int lucky;
  //get user input
  cout<<"What is your first name?: ";
  cin>>first;
  cout<<endl<<"What is your last name?: ";
  cin>>last;
  
  //tell fortune

  // cout<<endl<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl;
  
  nickName += first[0];
  nickName += ".";
  nickName += last[0];
  nickName += ".";

  cout<<endl<<"Welcome, "<<nickName<<", here is your fortune..."<<endl;


  lucky = first.length();

  cout<<endl<<"Your lucky number is "<<lucky<<"."<<endl;


  return 0;
}
