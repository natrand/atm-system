#include <string>
#include <iostream>
#include <stdlib.h>

class Bank{
private:
    std::string name;
    long long accnum;
    int pin;
    long long amount=0;
    long long total=0;
public:
    void value(){
        std::cout<<"Enter name: \n";
        //std::cin.ignore();
        getline(std::cin,name);
        std::cout<<"Enter Account number: \n";
        std::cin>>accnum;
        std::cout<<"Enter pin: \n";
        std::cin>>pin;
        std::cout<<"Enter balance: \n";
        std::cin>>total;
    }

    void data(){
        std::cout<<"\nName: \n"<<name;
        std::cout<<"\nAccount number: \n"<<accnum;
        std::cout<<"\nPin: \n"<<pin;
        std::cout<<"\nBalance: \n"<<total;
    }

    void getDeposit(){
        std::cout<<"Enter amount of deposit: ";
        std::cin>>amount;
    }
    void Totalamount(){
        total=total+amount;
        std::cout<<"Total balance: "<<total;
    }

    void withdraw(){
        int money;
        int balance;

        std::cout<<"Enter amount of withdraw: ";
        std::cin>>money;

        if(money<total){
            balance = total-money;
            std::cout<<"Total balance: "<<balance;
    }
        else{
            std::cout<<"Insufficient funds. Enter new amount: ";
            std::cin>>money;
            balance = total-money;
            std::cout<<"Total balance: "<<balance;
        }
    
    }

};
