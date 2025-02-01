#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main()
{
    int choice;
    while (true)
    {
        cout << "Hello! Choose your currency \n";
        cout << "1. USD \n";
        cout << "2. EUR \n";
        cout << "3. PLN \n";
        cout << "4. Leave \n";
        cout << "Choice: ";
            cin >> choice;

        if (cin.fail())
        {
            system("cls"); //clear window
            cout << "Choice out of range. Choose again. \n";
            cin.clear();            //clear flag aka error so cin can be used ahgain
            cin.ignore(1000, '\n'); //clear buffor
            continue;   //repeat loop so user can choose again
        }
        else break;
    }    

    ifstream CurrencyFile; //initializing
    CurrencyFile.open("currency.txt");  //openfile
    string currency; //string to save file in
    
    if (CurrencyFile.is_open()) //check if file is open! very important
    {
        char mychar;
        while (CurrencyFile)
        {
            mychar = CurrencyFile.get();
            cout << mychar;
        }


        /*
        while (CurrencyFile.get())//.get() read white spaces!
        {
            CurrencyFile >> currency; //file content into string
            cout << "Current Currency: " << currency << endl;
        }
        */

    }
    else cout << "Unable to open file";

    
    return 0;
}
