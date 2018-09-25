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
  cout<<"What is your first name?"<<endl;
  cin>>first;
  cout<<"What is your last name?"<<endl;
  cin>>last;
  
  //tell fortune

  // cout<<endl<<"Welcome, "<<first[0]<<"."<<last[0]<<"., here is your fortune..."<<endl;
  
  nickName += first[0];
  nickName += ".";
  nickName += last[0];
  nickName += ".";

  cout<<"Welcome, "<<nickName<<", here is your fortune..."<<endl;


  lucky = first.length();

  cout<<"your lucky number is "<<lucky<<endl;

  nickName = first[0];

  if (nickName=="a"||nickName=="A"||nickName=="e"||nickName=="E"||nickName=="i"||nickName=="I"||nickName=="o"||nickName=="O"||nickName=="u"||nickName=="U")
  {
    cout<<"you are destined to be famous!"<<endl;
  }

  else if(nickName!="a"||nickName!="A"||nickName!="e"||nickName!="E"||nickName!="i"||nickName!="I"||nickName!="o"||nickName!="O"||nickName!="u"||nickName!="U")
  {
    cout<<"you should keep a low profile."<<endl;
  }
  lucky = last.length() - 1;
  nickName = last[lucky];

  if(nickName=="a"||nickName=="A"||nickName=="e"||nickName=="E"||nickName=="i"||nickName=="I"||nickName=="o"||nickName=="O"||nickName=="u"||nickName=="U")
  {
    cout<<"you have already met your true love."<<endl;
  }

  cout<<"have a good day!"<<endl;

  return 0;
}
