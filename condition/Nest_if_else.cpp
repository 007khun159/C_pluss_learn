// Nest_if_else
#include <iostream>
using namespace std; 



//ถ้าชำระเงินเกืน 15,000 บาท จะได้ระบส่วนลดแต่ถ้าน้อยกว่าจะได้รับส่วนลด


int main()
{
	
	int amout = 0 ,price_sale;



	/// INPUT
	cout << "Input amount : ";
	cin >> amout;


	// OUTPUT
	cout << "---------Description---------------" << endl;
	
	cout << "The amout of price is " << amout << endl;

 
	if (amout >= 1500) {


		if (amout == 15000){
		
			price_sale = 0.1 * 15000;
		
			cout << "Your price is " << amout - price_sale << endl;
		
		
		}
		else if (amout == 20000)
		{

			price_sale = 0.2 * 20000;

			cout << "Your price is " << amout - price_sale << endl;


		}
		else if (amout == 30000)
		{

			price_sale = 0.3 * 30000;

			cout << "Your price is " << amout - price_sale << endl;


		}





	}
	else {

		cout << "Your price is : " << amout << endl;


	}


}

