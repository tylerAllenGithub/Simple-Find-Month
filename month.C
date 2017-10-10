/*Tyler Allen
CS111
2-26-2015
Lab 6-2
This program will ask for a month and output the season of said month
////////////////*/
#include <iostream>
using namespace std;

int main(){

  int month;//month variable
  cout<<"Please enter the corresponding month's number: ";
  cin>>month;//assign input to month

  switch(month){//switch statement for printing season depends on month
  case 12:
  case 1:
  case 2:cout<<"winter"<<endl;
    break;//if december to february then print winter
  case 3:
  case 4:
  case 5:cout<<"spring"<<endl;
    break;//if march to may print spring
  case 6:
  case 7:
  case 8:cout<<"summer"<<endl;
    break;//if june to august print summer
  case 9:
  case 10:
  case 11:cout<<"fall"<<endl;
    break;//if september to november print fall

  default:cout<<"invalid month"<<endl;//else print invalid month
  }
  return 0;
          }
