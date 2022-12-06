#include <iostream>
using namespace std;


// จะมีการเลือกเงื่อนไขแบบ 2 style 
// 1. if
// 2. switch
// 3. case แบบหลายเงื่อนไข
int main()
{	/*
		int sevice;

		// if - else  stlye
		cout << "Input your server number (1-2) : ";
		cin >> sevice;

		if (sevice == 1) {

			cout << "Creat New Bank Accout";
		}
		else if (sevice == 2) {

			cout << "Withdraw and Deposite";

		}
		else {
			cout << "Invalid choice";
		}

		cout << endl;

		// switch style
		// กรณีของ c++ ตัวนี้จะดีกว่า

		switch (sevice) {
			case 1 :

				cout << "Creat New Bank Accout";
				break;

			case 2 :
				cout << "Withdraw and Deposite";
				break;


			default:
				cout << "Invalid choice ";
				break;


		}
	*/

	// Example Exit Program

   /*
	   char confirm;
	   cout << "Do you want to exit program (y/n) : ";
	   cout << "Enter for confirm : ";
	   cin >> confirm;

	   switch (confirm) {
			   case 'y' :
				   cout << "Exit.......";
				   break;
			   case  'n':
				   cout << "Still on program";
				   break;

			   default:
				   cout << " Invalid Function";
				   break;
   }


   */


   // case แบบหลายเงื่อนไข
   //กรณีคล้ายๆเดิมแต่จะเพิ่ม case หลายกรณีมากยิ่งขึ้น


		char confirm;
		cout << "Do you want to exit program (y/n) : ";
		cout << "Enter for confirm : ";
		cin >> confirm;

		switch (confirm) {
		case 'y':  case'Y':
			cout << "Exit.......";
			break;
		case  'n': case 'N':
			cout << "Still on program";
			break;

		default:
			cout << " Invalid Function";
			break;

		}

}