#include<iostream>

using namespace std;

int hour,minute,second,i,hour2,selection,menu;;
    string x = "am";
    string m = "";
    string s = "";

void PrintTime() {

    cout << "Enter the current time." << endl;
      cout << "Enter Hour:" << endl;
      cin >> hour;
      while (hour>24||hour<1){
          cout << "Please enter a valid number between 1 and 24:" << endl;
          cin >> hour;
      }
      cout << "Enter Minutes:" << endl;
      cin >> minute;
      while (minute>60||minute<0){
            cout << "Please enter a valid number between 0 and 60:" << endl;
            cin >> minute;
        }
      cout << "Enter Seconds:"<< endl;
      cin >> second;
      while (second>60||second<0){
              cout << "Please enter a valid number between 0 and 60:" << endl;
              cin >> second;
          }
      if (hour < 13) {
      cout << "am or pm?"<< endl;
      cin >> x;
      }
      hour2 = hour;
           if (hour>12){
               hour2 = hour-12;
               x = "pm";
           }

           if (minute<10){
                    m = "0";
           }
           if (minute>=9){
                   m = "";
           }
           if (second<10){
                   s = "0";
           }
           if (second>=9){
                   s = "";
           }
           for(i=0;i<15;i++)
           cout << endl;
           cout << "**********************" << "   " << "*********************" << endl;
           cout << "*    12-Hour Clock   *" << "   " << "*   24-Hour Clock   *" << endl;
           cout <<"*    "<<hour2<<" : " <<m<< minute <<" : "<<s<<second<< " " << x <<"  * " <<  "  *   " <<hour<<" : "<<m<<minute<<" : "<<s<<second<< "     *" <<endl;
           cout << "**********************" << "   " << "*********************" << endl;

           cout << "Press 1 for menu."<< endl;
           cout << "Press 2 to quit." << endl;
}
void MainMenu() {
    for(i=0;i<15;i++)
           cout<< endl;
                      cout << "       Main Menu          " << endl;
                      cout << "***************************"<< endl;
                      cout << "* 1 - Add One Hour        *"<< endl;
                      cout << "* 2 - Add One Minute      *"<< endl;
                      cout << "* 3 - Add One Second      *"<< endl;
                      cout << "* 4 - Exit Program        *"<< endl;
                      cout << "***************************"<< endl;

}
void NewTime() {
    for(i=0;i<15;i++)
               cout << endl;
               cout << "**********************" << "   " << "*********************" << endl;
               cout << "*    12-Hour Clock   *" << "   " << "*   24-Hour Clock   *" << endl;
               cout <<"*    "<<hour<<" : " <<m<< minute <<" : "<<s<<second<< " " << x <<"  * " <<  "  *   " <<hour<<" : "<<m<<minute<<" : "<<s<<second<< "     *" <<endl;
               cout << "**********************" << "   " << "*********************" << endl;

               cout << "Press 1 for menu."<< endl;
               cout << "Press 2 to quit." << endl;
}


int main()
{

       PrintTime();
       cin >> selection;

       while (selection <=0||selection >=3){
           cout << "Please enter a valid selection";
           cin >> selection;
       }
       while (selection ==1){
       if (selection == 1) {
       MainMenu();
       cin >> menu;
       if (menu == 1){
           hour = hour + 1;
       NewTime();
       cin >> selection;
       }
       else if (menu == 2){
           minute = minute + 1;
       NewTime();
       cin >> selection;
       }
       else if (menu == 3){
           second = second + 1;
       NewTime();
       cin >> selection;
       }
       else if (menu == 4){

       }

       }
       }
       if (selection == 2) {
                  cout << endl;
                  cout << "Goodbye.";
       }

     return 0;
}
