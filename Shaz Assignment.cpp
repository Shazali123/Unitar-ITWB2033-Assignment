#include <iostream>
#include <iomanip>
#include <limits>
#include <stdio.h>

using namespace std;

int getDisc(int total, int totalregister) {

    int discount;

   	if (totalregister > 30) {

        discount = 10 * total / 100;
        int newTotal = total - discount;

    cout << "Discount                                           :              RM" << discount << endl;
    cout << "Total fee after discount                           :              RM" << newTotal << endl;
    cout << "New fee per person                                 :              RM" << newTotal/totalregister << endl;
    cout << "****************************************************************************************** " << endl;
    }

    else {

    cout << "Discount                                           :              -" << endl;
    cout << "Fee per person                                     :              RM" << total/totalregister << endl;
    cout << "****************************************************************************************** " << endl;
    }
	
	return(0);
    }


int calcFee(string coursecode, int totalregister) {

   double total;

   if (coursecode == "1"){
   int fee = 150;
   total = fee * totalregister;
   cout << "                                                   ANN Consultancy " << endl;
   cout << "****************************************************************************************** " << endl;
   cout << "Course                                             :              MS Office " << endl;
   cout << "Fees per person                                    :              RM150 " << endl;
   cout << "Number of persons enrolled                         :              " << totalregister << endl;
   cout << "Total Fees                                         :              RM" << fixed <<setprecision(2) << total << endl;
   return(total);

   }

   else if (coursecode == "2"){
   int fee = 200;
   total = fee * totalregister;
   cout << "                                                   ANN Consultancy " << endl;
   cout << "****************************************************************************************** " << endl;
   cout << "Course                                             :              Web Development " << endl;
   cout << "Fees per person                                    :              RM200 " << endl;
   cout << "Number of persons enrolled                         :              " << totalregister << endl;
   cout << "Total Fees                                         :              RM" << fixed << setprecision(2) << total << endl;
   return(total);
   }

   else if (coursecode == "3"){
   int fee = 300;
   total = fee * totalregister;
   cout << "                                                   ANN Consultancy " << endl;
   cout << "****************************************************************************************** " << endl;
   cout << "Course                                             :              Mobile Apps Development " << endl;
   cout << "Fees per person                                    :              RM300 " << endl;
   cout << "Number of persons enrolled                         :              " << totalregister << endl;
   cout << "Total Fees                                         :              RM" << fixed << setprecision(2) << total << endl;
   return(total);


   }

   else {
            cout << "******************************************************************************************" << endl;
            cout << "Invalid Input" << endl;
            total = 0;
            return(total);
        }

}

int main()

{

int totalpersons;
int totalfees;
string input;
double discount=0;

    cout << "------------------------------------------------------------------------- " << endl;
    cout << "|             Short Courses        | Course code |         Fee (RM)     | " << endl;
    cout << "------------------------------------------------------------------------- " << endl;
    cout << "|     Ms Office                    |      1      |         150.00       | " << endl;
    cout << "------------------------------------------------------------------------- " << endl;
    cout << "|     Web Development              |      2      |         200.00       | " << endl;
    cout << "------------------------------------------------------------------------- " << endl;
    cout << "|     Mobile Apps Development      |      3      |         300.00       | " << endl;
    cout << "------------------------------------------------------------------------- " << endl;



    cout << "" << endl;
    cout << "Enter Course Code:    (1-3) (N to exit) " << endl;

    cin >> input;

while (input !="N"){

  if (input =="1" || input =="2" || input =="3") {
  cout << "Enter Number of people: " << endl;

  cin >> totalpersons;


  totalfees = calcFee(input, totalpersons);
  getDisc (totalfees, totalpersons);


 cout << "Enter Course Code:    (1-3) (N to exit) " << endl;

 cin >> input;
  } 
  else {

    cout << "Invalid Input. Please Enter a Value Between 1 to 3 " << endl;

    cout << "Enter Course Code:    (1-3) (N to exit) " << endl;

    cin >> input;

  }
}
cout << "" << endl;
cout << "Thank you for using the program!" << endl;


return 0;

}
