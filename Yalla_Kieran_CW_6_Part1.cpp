// Kieran Yalla
// Programming Classwork 06
// Due 11/4/21 4pm EST
// Professor Koo

#include <iostream>
using namespace std;

void getnumbers (int &num1, int &num2){
    cout << "enter first number: ";
    cin >> num1;
    cout << "enter second number: ";
    cin >> num2;
}
int getchoice(){
    int choice;
    cout << "enter your choice, 1 for addition, 2 for subtraction: ";
    cin >> choice;
    return choice;
}

int addition(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int subtraction(int num1, int num2){
    int sum = num1 - num2;
    return sum;
}

void displayresult(int result){
    cout << "\nThe result of the operation is: " << result << endl;
}

int main(){
    int choice;
    choice = getchoice();
    int num1, num2;
    getnumbers(num1,num2);
    int result;
    if(choice==1){
        result=addition(num1,num2);
    }
    else
    {
        result = subtraction(num1,num2);
    }
    displayresult(result);
return 0;
}