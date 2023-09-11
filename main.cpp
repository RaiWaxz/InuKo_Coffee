#include <iostream>
#include <string>
using namespace std;

void menu();
int main(){
    menu();
    int customerOrder;
    int total=0;
    int orderCost[100]={};
    int con=1;
    string items[5]={"Latte", "Mocha", "Espresso", "Iced Americano", "Mathca Latte"};
    float price[5]={2, 2.5, 1.75, 1.5, 3};

    cout<<"What do you want?\n> ";
    cin>>customerOrder;

    while(con){
        if(customerOrder==1){
            total=total+price[0];
        }
        else if(customerOrder==2){
            total=total+price[1];
        }
        else if(customerOrder==3){
            total=total+price[2];
        }
        else if(customerOrder==4){
            total=total+price[3];
        }
        else if(customerOrder==5){
            total=total+price[4];
        }
        else{
            cout<<"Please input a valid integer!";
    }}


    cout<<"Total: $";
    cout<<total;

    return 0;
}


void menu(){

    cout <<"================================\n";
    cout <<"|          Inuko Cafe          |\n";
    cout <<"================================\n";
    cout <<"|   [1] Latte                  |\n";
    cout <<"|   [2] Mocha                  |\n";
    cout <<"|   [3] Espresso               |\n";
    cout <<"|   [4] Iced Americano         |\n";
    cout <<"|   [5] Matcha Latte           |\n";
    cout <<"================================\n";
}

