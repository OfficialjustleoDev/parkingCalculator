#include <iostream>
using namespace std;
int main(int maxcharge,int customer1,int customer2, int customer3,int customertotal,int
chargetotal) {
float charge1;
float charge2;
float charge3;
cout << "Enter 1st hour = ";
cin >> customer1;//1st record in hours
cout << endl;
cout << "Enter 2nd hour = ";
cin >> customer2;//2nd record in hours
cout << endl;
cout << "Enter 3rd hour = ";
cin >> customer3;//3rd record in hours
cout << endl;
if (customer1 <= 3) {
charge1 = 12;//3 or less hours ,pay minimum of R12
}
else if (customer1 > 3 && customer1 < 24) {
charge1 =(0.90 *customer1)+12+customer1;//R12 minimum+0.90 per hour more
}
else if (customer1 >= 24) {
charge1 = maxcharge;//R24 Maximum
};
if (customer2 >= 3) {
if (customer2 <= 3) {
charge2 = 12;//3 or less hours ,pay minimum of R12
}
else if (customer2 > 3 && customer2 < 24) {
charge2 = (0.90 * customer2) + 12 + customer1;//R12 minimum+0.90 per 
hour more
}
else if (customer2 >= 24) {
charge2 = maxcharge;//R24 Maximum
}
};
if (customer3 >= 1) {
if (customer3 <= 3) {
charge3 = 12;//3 or less hours ,pay minimum of R12
}
else if (customer3 > 3 && customer3 < 24) {
charge3 = (0.90 * customer3) + 12 + customer1;//R12 minimum+0.90 per 
hour more
}
else if (customer3 >= 24) {
charge3 = maxcharge;//R24 Maximum
}
};
customertotal = customer1 + customer2 + customer3;//add all 3 customers hours
chargetotal = charge1 + charge2 + charge3;
cout << "Car" << " " << "Hours" << " " << "Charge" << " "
<< endl;
cout << "1" << " " << customer1 << " " <<charge1 << endl;
cout << "2" << " " << customer2 << " " << charge2 << endl;
cout << "3" << " " << customer3<< " " << charge3 << endl;
cout << "TOTAL" << " " << customertotal << " " << chargetotal
<< endl;
system("pause>0");
return 0;
}