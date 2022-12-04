// Kieran Yalla
// Programming Classwork 06
// Due 11/4/21 4pm EST
// Professor Koo

#include<iostream>
#include<iomanip>

using namespace std;

void displaymenu(){
  
   // Displays the menu that lists drink prices in vending machine
   cout << "*** Vending Machine ***"<<endl;
   cout << " 1. Coke $1.25" << endl;
   cout << " 2. Pepsi $1.00" << endl;
   cout <<" 3. Water $2.00" << endl;
   cout <<" 4. Coffee $ 1.50" << endl;
   cout <<" 5. Exit Menu" << endl << endl;
}

// Program takes user choice and returns the total price without the tax included

double totalprice(int choice){
   int amount;
   cout << "How many do you want? "; 
   cin >> amount;
   if (choice == 1) 
   return amount * 1.25;
   else if (choice == 2) 
   return amount * 1.00;
   else if (choice == 3) 
   return amount * 2.00;
   else if (choice == 4) 
   return amount * 1.50;
   else if (choice == 5)
   exit(0);
  
}

// Program displays all menus, text statements about taxes and total purchase and allows user to input their choices for what drink they want, how many they want and what their payment is.

int main(){
   displaymenu();
   int choice = 0;
   cout << "Enter your choice: "; 
   cin >> choice;
   if (1 <= choice && choice <= 4){
       double price = totalprice(choice);
       double taxprice = price * 0.06; 
       double totalprice = price + taxprice; 
       double payment;
       cout << "How much is your payment? "; 
       cin >> payment;
       double change = payment - totalprice; 
       cout << fixed << setprecision(3) << showpoint;
       cout << "\nTax Amount : $" << taxprice << endl;
       cout << "\nTotal Purchase : $" << totalprice << endl;
       cout << "\nChange : $" << change << endl;
    return 0;
    }
}

