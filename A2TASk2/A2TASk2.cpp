#include<iostream>
using namespace std;
int main(){
	float balance = 5000;
	cout << "ENTER THE BALANCE :" << balance << endl;
	float deposit = 5000;
	cout << "ENTER THE DEPOSIT AMOUNT :" << deposit << endl;
	float withdraw = 2500;
	cout << "ENTER THE WITHDRAW :" << withdraw << endl;
	balance += deposit;
	cout << " BALANCE AFTER DEPOSIT :"<<" DEPOSIT IS :" << balance << endl;
	balance -= withdraw;
	cout << " BALANCE AFTER WITHDRAW :" << " WITHDRAW IS :" << balance << endl;
	return 0;
}