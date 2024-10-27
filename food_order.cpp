#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//creating class to give feedback
class give_feedback
{
public:
    string username;
    int ratings;
    void rate()
    {
        fstream file1;
        file1.open("Feedback.txt", ios::app|ios::in);
        if (!file1) cout<<"\nCan not open the requested file.";
        else
        {
            cout<<"Customer name: ";
            cin>>username;
            cout<<"How many ratings would you like to give out of 5?? ";
            cin>>ratings;
            file1<<username<<":"<<ratings;
            file1.close();
            cout<<"Thank you for your feedback!!"<<endl;
            cout<<"Have a good day!!"<<endl;

        }
    }
};

//Creating class customer by inheriting class feedback
class customer:public give_feedback
{
private:
    string name, email_id;
    string contact_no;

//creating functions

public:
    int amt;
    void option();
    void insert();
    void display();
    void modify();
    void search();
    void menu();
    void payment();
};

//Declaring functions

void customer::option()
{   //Initial Option Choosing
    int ch;
    char opt;
    system("cls");
    cout<<"                                    "<<"--------------------------------------------";
    cout<<endl;
    cout<<"                                    "<<"|         FOOD ORDERING SYSTEM           |"<<endl;
    cout<<"                                    "<<"--------------------------------------------"<<endl<<endl;
    cout << "\t\t\t\t\t 1. Place New Order" << endl;
    cout << "\t\t\t\t\t 2. Display Order" << endl;
    cout << "\t\t\t\t\t 3. Give Us Feedback" << endl;
    cout << "\t\t\t\t\t 4. Exit" << endl;

    cout << "\t\t\t\t\t---------------------------" << endl;
    cout << "\t\t\t\t\tChoose Option:[1,2,3,4]" << endl;
    cout << "\t\t\t\t\t---------------------------" << endl;
    cout << "Enter Your Choice: ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        insert();
        break;
    case 2:
        display();
        break;
    case 3:
        rate();
        break;
    case 4:
        exit(0);
    default:
        cout << "\n\t Invalid choice... Please Try Again..";
    }
}

//declaring menu function to display menu and calculate amount
void customer::menu()
{   int m,o,q;
    cout << "\t\t\t\t\t 1. Snacks" << endl;
    cout << "\t\t\t\t\t 2. Burger" << endl;
    cout << "\t\t\t\t\t 3. Pizza" << endl;
    cout << "\t\t\t\t\t 4. Sandwich" << endl;
    cout << "\t\t\t\t\t 5. Pasta" << endl;
    cout << "\t\t\t\t\t 6. Noodles" << endl;
    cout << "\t\t\t\t\t 7. Shakes" << endl;
    cout << "\t\t\t\t\t 8. Colddrink" << endl;
    cout << "\t\t\t\t\t 9. Dessert" << endl;
    cout << "\t\t\t\t\t 10. Momos" << endl;
    cout << "\t\t\t\t\t---------------------------" << endl;
    cout << "\t\t\t\t\tChoose Option:[1,2,3,4,5,6,7,8,9,10]" << endl;
    cout << "\t\t\t\t\t---------------------------" << endl;
    cout << "Enter Your Choose: ";
    cin >>m;

    //Option choice output
     if(m==1){

        cout << "\t\t\t\t\t 1. Samosa -- 20Rs" << endl;
        cout << "\t\t\t\t\t 2. French Fries -- 50Rs" << endl;
        cout << "\t\t\t\t\t 3. Honey Chilli Potato -- 100Rs" << endl;
        cout << "\t\t\t\t\t 4. Maggi -- 35Rs" << endl;
        cout << "\t\t\t\t\t Enter your choice number:" << endl;
        cin >>o;
        if(o==1){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 20*q;
        }
        if(o==2){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 50*q;
        }
        if(o==3){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 100*q;
        }
        if(o==4){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 35*q;
        }

    }
    if(m==2){

        cout << "\t\t\t\t\t 1. Veg Cheese Burger -- 70Rs" << endl;
        cout << "\t\t\t\t\t 2. Aloo Patty Burger -- 50Rs" << endl;
        cout << "\t\t\t\t\t Enter your choice number:" << endl;
        cin >>o;
        if(o==1){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 70*q;
        }
        if(o==2){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 50*q;
        }

    }
    if(m==3){

        cout << "\t\t\t\t\t 1. Vegetable Pizza -- 100Rs" << endl;
        cout << "\t\t\t\t\t 2. Peri Peri Sauce Pizza -- 150Rs" << endl;
        cout << "\t\t\t\t\t Enter your choice number:" << endl;
        cin >>o;
        if(o==1){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 100*q;
        }
        if(o==2){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 150*q;
        }

    }
    if(m==4){

        cout << "\t\t\t\t\t 1. Veg Corn Sandwich -- 55Rs" << endl;
        cout << "\t\t\t\t\t 2. Mayonnaise Sandwich -- 60Rs" << endl;
        cout << "\t\t\t\t\t Enter your choice number:" << endl;
        cin >>o;
        if(o==1){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 55*q;
        }
        if(o==2){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 60*q;
        }

    }
    if(m==5){

        cout << "\t\t\t\t\t 1. White Sauce Pasta -- 90Rs" << endl;
        cout << "\t\t\t\t\t 2. Mix Sauce Pasta -- 120Rs" << endl;
        cout << "\t\t\t\t\t Enter your choice number:" << endl;
        cin >>o;
        if(o==1){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 90*q;
        }
        if(o==2){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 120*q;
        }

    }
    if(m==6){

        cout << "\t\t\t\t\t 1. Veg Hakka Noodles -- 70Rs" << endl;
        cout << "\t\t\t\t\t 2. Veg Chilli Garlic Noodles -- 80Rs" << endl;
        cout << "\t\t\t\t\t Enter your choice number:" << endl;
        cin >>o;
        if(o==1){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 70*q;
        }
        if(o==2){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 80*q;
        }
    }
      if(m==7){

        cout << "\t\t\t\t\t 1. Chocolate Milkshake -- 70Rs" << endl;
        cout << "\t\t\t\t\t 2. Kesar Badam Milkshake -- 80Rs" << endl;
        cout << "\t\t\t\t\t Enter your choice number:" << endl;
        cin >>o;
        if(o==1){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 70*q;
        }
        if(o==2){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 80*q;
        }

    }

    if(m==8){

        cout << "\t\t\t\t\t 1. Mountain Dew -- 40Rs" << endl;
        cout << "\t\t\t\t\t 2. Coca Cola -- 40Rs" << endl;
        cout << "\t\t\t\t\t Enter your choice number:" << endl;
        cin >>o;
        if(o==1){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 40*q;
        }
        if(o==2){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 40*q;
        }

    }
     if(m==9){

        cout << "\t\t\t\t\t 1. Butterscotch Mini Cake -- 50Rs" << endl;
        cout << "\t\t\t\t\t 2. Choco Truffle Pastry -- 60Rs" << endl;
        cout << "\t\t\t\t\t Enter your choice number:" << endl;
        cin >>o;
        if(o==1){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 50*q;
        }
        if(o==2){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 60*q;
        }
}
if(m==10){

        cout << "\t\t\t\t\t 1. Veg Momos -- 40Rs" << endl;
        cout << "\t\t\t\t\t 2. Paneer Momos-- 60Rs" << endl;
        cout << "\t\t\t\t\t Enter your choice number:" << endl;
        cin >>o;
        if(o==1){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 40*q;
        }
        if(o==2){
            cout << "Enter Quantity"<<endl;
            cin >>q;
            amt = 60*q;
        }

}
}

//creating function to insert customer details and order details in file named customer
void customer::insert()
{   //Entering details
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Email Id: ";
    cin >> email_id;
    cout << "Enter Contact No: ";
    cin >> contact_no;
    fstream file;
    cout << endl << "-----------------------------------------------------------------------------------------------------";
    cout << endl << "------------------------------------- Order Details -------------------------------------------------" << endl;

    //showing menu
    menu();

    //opening file in append mode
    file.open("customer.txt", ios::app | ios::out);
    file << " " << name << " "  << email_id << " " << contact_no << " " << amt << endl;

    //Taking to payment
    payment();

    file.close();

}

//creating function to display order details
void customer::display()
{
    system("cls");
    search();

}

// to fetch data of customers
void customer::search()
{
    fstream file;
    int found = 0;
    file.open("customer.txt", ios::in);
    if (!file)
    {
        cout <<"\n----------------------------------------------------------------------------------------------------" << endl;
        cout <<  "----------------------------------- Customer Order Search ------------------------------------------" << endl;
        cout << "\n\t No Data Is Present...";
    }
    else
    {
        string Name;
        cout << "\n-------------------------------------------------------------------------------------------------------" << endl;
        cout << "------------------------------------- Customer Order Search ------------------------------------------" << endl;
        cout << "\n Enter Customer Name For Which You Want to Search Order: ";
        cin >> Name;
        file >> name >>  email_id >> contact_no >> amt;
        while (!file.eof())
        {
            if (name == Name)
            {
                cout << "\nCustomer Name: " << name << endl;
                cout << " Customer Email Id.: " << email_id << endl;
                cout << " Customer Contact: " << contact_no << endl;
                cout << " Total Payable Amount: " << 0.18*amt + amt << endl;
                cout<<"\t\Thanks For Ordering!!!"<<endl;
                found++;
            }
            file >> name >> email_id >> contact_no >> amt;
        }
        if (found == 0)
        {
            cout << "\n\tCustomer Data Not Found...";
        }
        file.close();
    }
}

//payment gateway
void customer::payment()
{   int p;
    cout << "\nProceeding to payment..."<<endl;
    fstream file;
    file.open("customer.txt", ios::in);
    while (!file.eof())
        {
                cout << "\nTotal Payable Amount: " << 0.18*amt + amt << endl;
                break;
            }
            file >> amt;
        file.close();
    cout << "Select Payment Mode:"<<endl;
    cout << "\t\t\t\t\t 1. Pay By UPI" << endl;
    cout << "\t\t\t\t\t 2. Pay Using Credit Card/Debit Card" << endl;
    cout << "\t\t\t\t\t 3. Pay Cash" << endl;
    cout << "\t\t\t\t\t---------------------------" << endl;
    cout << "\t\t\t\t\tChoose Option:[1,2,3]" << endl;
    cout << "\t\t\t\t\t---------------------------" << endl;
    cout << "Enter Your Choose: ";
    cin >> p;

    switch (p)
    {
    case 1:
       { cout << "Scan The Given QR Code To Make Your Payment"<<endl;
        cout << "Thanks Your Payment Has Been Done"<<endl;
        break;}
    case 2:
       { cout << "Tap Card To Pay"<<endl;
        cout << "Thanks Your Payment Has Been Done"<<endl;
        break;}
    case 3:
        {cout << "Please Pay At The Counter, Thank You"<<endl;
        break;}
    default:
        cout << "\n\t Invalid choice... Please Try Again..";
    }
}

int main()
{
    cout<<"WELCOME TO FOOD ORDERING SYSTEM";

    //creating object of class customer
    customer c;

    //calling function of class customer
    c.option();

    return 0;
}