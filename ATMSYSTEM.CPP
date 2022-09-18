#include <iostream>
using namespace std;
void showMenu() {
  cout<<"**********MENU**********"<<endl;
  cout<<"1. Check balance"<<endl;
  cout<<"2. Deposit"<<endl;
  cout<<"3. Withdraw"<<endl;
  cout<<"4.Exit"<<endl;
  cout<<"*************************"<<endl;
  
}
int main(){
  int option;
  double balance =500;
  do{
  showMenu();
  cout<<"Option:";
  cin>>option;
  switch(option){
    case 1:cout<<"Balance is: "<<balance<<"$"<<endl;
    break;
    case 2:cout<<"Deposite amount:";
    double depositeAmount;
    cin>> depositeAmount;
    balance+= depositeAmount;
    break;
    case 3:cout<<"Withdraw amount:";
    double  withdrawAmount;
    cin>>withdrawAmount;
    if(withdrawAmount<=balance)
      balance-=withdrawAmount;
    else
      cout<<" Not enough Money"<<endl;
    break;
  }
    }
    while(option!=4);
  system("pause>0");
}
