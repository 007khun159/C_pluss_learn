#include <iostream>
using namespace std;



int main()
{

    // Math Bassic in C++
  /*  int a = 10, b = 2;
    
    
    
    cout << "a =" << a << ",b=" << b << endl;
    cout << "a+b=" << a + b << endl;
    cout << "a-b=" << a - b << endl;
    cout << "a*b=" << a * b << endl;
    cout << "a/b=" << a / b << endl;
    cout << "a%b=" << a % b << endl;  //เอาเศษ

   */



    //เพิ่มค่า 
    /*
        int a = 5;

        cout << "a =" << a <<endl ;
        cout  << "a = " << a + 1 <<endl;
        cout << "prefix a " << ++a << endl;  //เพื่มค่าแล้วนำค่าไปใช้งาน
        cout << "current = " << a << endl;
        cout << endl;
        a = 5;
        cout << "Reset a "<< a << endl; 
        cout << "Postfix = " << a++ << endl;  //นำค่าปัจุบันมาใช้ก่อน , ก่อนที่จะเอาค่ามาใช้ทีหลัง
        cout << "Current = " << a << endl;
    */




  // compound Assignment 
    /*
    
                int x = 100; 

        //แบบธรรมดา
        x = x + 50; //150
        cout << "X = " << x << endl ;

        cout << endl;
        //แบบ compound คล้าย python
        x = 100;
        x += 50;
        cout << "X += " << x << endl;

        x = 100;
        x -= 50;
        cout << "X -= " << x << endl;

        x = 100;
        x *= 50;
        cout << "X *= " << x << endl;


        x = 100;
        x /= 50;
        cout << "X /= " << x << endl;


        x = 100;
        x %= 50;
        cout << "X %= " << x << endl;
    
  
    
    */



    //ตัวดำเนินการเหมือน python
    //การเปรียบเทียบ =>(true ,false)

    int number1 = 100, number2 = 200;
    bool result1 = number1 == number2;
    bool result2 = number1 != number2;
    bool result3 = number1 >= number2;
    bool result4 = number1 <= number2;
    bool result5 = number1 %= number2;

    cout << "The result is " << result1 << endl;
    cout << "The result is " << result2 << endl;
    cout << "The result is " << result3 << endl;
    cout << "The result is " << result4 << endl;
    cout << "The result is " << result5 << endl;

    //ตัวดำเนินการ && and  || or  ที่ต่างออกไปจาก python
    //ดูจากควาสำคัญทางเครื่องหมาย
    cout << 2 + 8 * 9<<endl;
    cout << 10 - 4 + 2<<endl;
    cout << 10 * (5 + 2) << endl;
    cout << 5*2-40/5 << endl;
    cout << 7+8/2+25 << endl;




    // Input and Output 

    int number3 , number4;
    string  name1;
    std::cout << "Input your number : ";
    
    
    // ทำการเติม >>
    cin >> number3 ;
    cout << "Input the second number : ";
    cin >> number4; 
    cout << "Input your name : ";
    cin >> name1;
    cout << "Print result1 " << number3 << endl;
    cout << "Print result2 " << number4 << endl;
    cout << "MY Name is " << name1 << endl;




}
