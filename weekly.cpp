#include <iostream>
using namespace std;
/*
This is a project where the user can enter his body tempearture
Then the program asks either to convert from celsius to fahrenheit or
convert fahrenheit to celsius or
Exit from the program
This is just a mini project
*/
int main(){
    float body_temperature;
    //taking the body_temperature from the user
    cout << "Enter Your Body Temperature:" << " ";
    cin >> body_temperature;
    int choice;
    //now we will ask the user the select the choice of operation
    cout << "Enter Your Choice (1-3):\n1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\n3.Exit" << " ";
    cin >> choice;
    //now performing the choic
    while(choice != 3){
        switch(choice){
            case 1:
            float celsius;
            celsius = 5.0/9.0*(body_temperature-32);
            cout << "The Body Temparature in Celsius is " << celsius << endl;
        //Now we will ask the user again if he wants to perform the operation or not
            cout << "Enter Your Choice (1-3):\n1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\n3.Exit" << " ";
            cin >> choice;
            cout << "Enter the Body Temperature " << " ";
            cin >> body_temperature;
            break;
            case 2:
            float fahrenheit;
            fahrenheit = (9.0/5.0*body_temperature) + 32;
            cout << "Your Body Temperature in Fahrenheit is " << fahrenheit << endl; 
            cout << "Enter Your Choice (1-3):\n1.Fahrenheit to Celsius\n2.Celsius to Fahrenheit\n3.Exit" << " ";
            cin >> choice;
            cout << "Enter the Body Temperature " << " ";
            cin >> body_temperature;
            break;
            case 3:
            break;
     }
    }
    cout << "Thank You For Utilizing the Services" << endl;
    return 0;

}