#include "funkcje.h"
#include <iostream>
#include <stdlib.h>

int main(){

Bank b;
int choice;

std::cout<<"\n******ATM MACHINE MENAGEMENT SYSTEM******\n\n";
b.value();
b.data();

while(true){

    std::cout<<"\n\nSELECT NUMBER: \n";
    std::cout<<"\t1. Deposit\n";
    std::cout<<"\t2. Total balance\n";
    std::cout<<"\t3. Withdraw\n";
    std::cout<<"\t4. Cancel\n";
    std::cin>>choice;

        switch(choice){
            case 1:
                b.getDeposit();
                break;
            case 2:
                b.Totalamount();
                break;
            case 3:
                b.withdraw();
                break;
            case 4:
                exit(1);
                break;
            default:
                std::cout<<"\nINVALID CHOICE\n";
        }
    }

}