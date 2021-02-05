#include <iostream>

using namespace std;

int main()
{
    cout<<"BENGIE ENTERPRISE"<<endl;

    //The things we sell in the company
    cout<<"======================"<<endl;
    cout<<"Two things are done in the company:"<<endl;
    cout<<"1. Purchasing an item"<<endl<<"2. Make enquiries"<<endl;

    //name of the customer
    string name;
    cout<< "please, what is your name? "<<endl;
    getline(cin, name);


    //declaration
    string A= "Printer";
    string B= "Phone";
    string C= "Table";

    double vat = 0.12;
    int id;
    string item;
    int quantity;
    int moneyInYourPocket;
    double totalCost;
    float totalAmountPaid;
    double balance;


    double printer_price= 50;
    double phone_price=67;
    double table_price=450;





    //the items being sold here
    cout<<"These are items we sold in our company:"<<endl;
    cout<<"A. Printer"<<endl<<"B. Phone"<<endl<<"C. Table"<<endl;


    //My ID
    cout<<"Please, type your unique id number,(--it should be in numbers)"<<endl;
    cin>>id;

    //What you want to buy
    cout<<"What do you want to buy, (one at a time)"<<endl;
    cin>>item;

    //The quantity you want
    cout<<"How many quantity did you want"<<endl;
    cin>>quantity;

    cout<<"How much money do you have in your pocket?:"<<endl;
    cin>>moneyInYourPocket;

    if(moneyInYourPocket<printer_price  || moneyInYourPocket<phone_price || moneyInYourPocket<table_price){
        cout<<"you can't buy any of my item so please leave from here!"<<endl;
    }

        else if(item=="printer" || item=="printer" || item=="printer"){
            totalCost=(quantity*printer_price);
            cout<<"the total cost is:"<<totalCost<<endl;
            totalAmountPaid= totalCost+vat;
            cout<<"total amount paid is:"<<totalAmountPaid<<endl;
            balance = moneyInYourPocket-totalAmountPaid;
            cout<<"your balance after you made the payment is"<<endl;


            cout<<"*****RECEIPT*****"<<endl;
            cout<<"NAME OF CUSTOMER:"<<name<<endl;
            cout<<"THE UNIQUE ID:"<<id<<endl;
            cout<<"ITEM BOUGHT:"<<item<<endl;
            cout<<"QUANTITY BOUGHT:"<<quantity<<endl;
            cout<<"VAT AMOUNT"<<vat<<endl;
            cout<<"TOTAL COST:"<<totalCost<<endl;
            cout<<"TOTAL AMOUNT PAID:"<<totalAmountPaid<<endl;
            cout<<"YOUR BALANCE IS:"<<balance<<endl;
            cout<<"THANK YOU FOR FOR TRANSACTING WITH US....."<<endl;


        } else if(item=="phone" ){
            totalCost=(quantity*phone_price);
            cout<<"the total cost is:"<<totalCost<<endl;
            totalAmountPaid= totalCost+vat;
            cout<<"total amount paid is:"<<totalAmountPaid<<endl;
            balance = moneyInYourPocket-totalAmountPaid;
            cout<<"your balance after you made the payment is"<<endl;

            cout<<"******** RECEIPT ************"<<endl;
            cout<<"NAME OF CUSTOMER:"<<name<<endl;
            cout<<"THE UNIQUE ID:"<<id<<endl;
            cout<<"ITEM BOUGHT:"<<item<<endl;
            cout<<"QUANTITY BOUGHT:"<<quantity<<endl;
            cout<<"VAT AMOUNT"<<vat<<endl;
            cout<<"TOTAL COST:"<<totalCost<<endl;
            cout<<"TOTAL AMOUNT PAID:"<<totalAmountPaid<<endl;
            cout<<"YOUR BALANCE IS:"<<balance<<endl;
            cout<<"THANK YOU FOR FOR TRANSACTING WITH US....."<<endl;
        }






    return 0;
}
