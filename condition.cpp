#include <iostream>
using namespace std;



int main()
{

	//ประกาศตัวแปร
	string name;
	int score;
	char grade;
	string status;


	/// INPUT
	cout << "Input Name: " ;
	cin >> name;
	cout << "Input Score: " ;
	cin >> score;


	// OUTPUT
	cout << "---------Description---------------"<<endl;
	cout << "Name of student is\t" <<	name <<endl;
	cout << "The Score of test is " << score <<endl;


	// if -else 
	/*
	
		string status;

		if (score >= 50) {
			status = "Pass Exam";
		}
		else
		{
			status = "NOT PASS";
		}
		cout << "The status is : " << status<<endl;
	


		string status;
		// ternary operator ? :
		//ลดรูปตัวแปร
		status = (score >= 50) ? "Pass Exam " : "Not Pass";
		cout << "The status is : " << status << endl;


	*/
	


	// มีหลายๆเงื่อนไข 
	//ถ้าเป็นของ python จะมี if , elif, else 
	//ถ้าเป็นของ c++ จะมี if , else if , else 
	if (score >= 80) {
		grade = 'A';
		cout << "Grade = " << grade << endl;
	}
	else if (score >=70 ){
		grade = 'B';
		cout << "Grade = " << grade << endl;
	}
	else if (score >= 60) {
		grade = 'C';
		cout << "Grade = " << grade << endl;
	}
	else if (score >= 50) {
		grade = 'D';
		cout << "Grade = " << grade << endl;
	}
	else {
		grade = 'F';
		cout << "Grade = " << grade << endl;
	
	
	}
	
	/// ตรวจสอบทุกเงื่อนไข
	if (score >= 80) {
				grade = 'A';
				cout << "Grade = " << grade << endl;
	}
	if (score >= 70) {
				grade = 'B';
				cout << "Grade = " << grade << endl;
	}
	if (score >= 60) {
				grade = 'C';
				cout << "Grade = " << grade << endl;
	}
	if (score >= 50) {
				grade = 'D';
				cout << "Grade = " << grade << endl;
	}
	else {
				grade = 'F';
				cout << "Grade = " << grade << endl;
	}
	
	





}