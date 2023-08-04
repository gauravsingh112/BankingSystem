#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
void showBalance(double balance);
int deposit();
double withdraw(double balance);

int main(){
    double balance=0;
    int choice=0;
    do
    {
        
    cout<<"**********************************\n";
    cout<<"Enter your choice:\n";
    cout<<"**********************************\n";

    cout<<"1.Show Balance\n";
    cout<<"2.Deposit Money\n";
    cout<<"3.Withdraw Money\n";
    cout<<"4.Exist\n";
    cin>>choice;

    cin.clear();
    fflush(stdin);

    switch(choice){
        case 1:showBalance(balance);
        break;
        case 2:balance+=deposit();
               showBalance(balance);
        break;
        case 3:balance -= withdraw(balance);
        break;
        case 4:cout<<"Thanks For Visiting!\n";
        break;
        default:cout<<"Invalid Choice\n";
    }


    } while (choice!=4);
    return 0;
    }

    void showBalance(double balance){
        cout<<"Your balance is: RS "<<setprecision(2)<<fixed<<balance<<'\n';

    }
    int deposit(){
        double amount =0;
        cout<<"Enter amount to be deposited: ";
        cin>>amount;
        if(amount>0){
          return amount;
          }else{
            cout<<"That's not a valid amount: '\n";
            return 0;
          }
        

    }
    double withdraw(double balance){
        double amount=0;
        cout<<"Enter amount to withdraw: ";cin>>amount;
        if(amount>balance){
            cout<<"Insufficient Money\n";
            return 0;
        }
        else if(amount<0){
            cout<<"That's not a valid amount\n";
            return 0;
        }
        else{
        return amount;
        }

    }