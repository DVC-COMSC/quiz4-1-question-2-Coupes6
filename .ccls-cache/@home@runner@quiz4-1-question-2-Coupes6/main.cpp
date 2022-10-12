 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double rate1 = 1.10;
	const double rate2 = 2.20;
	const double rate3 = 3.70;
	const double rate4 = 4.80;
	double totalc;
	double weight, distance, rate;

 cout << " Package Weight and distance: ";
  cin >> weight >> distance;

  if ((weight < 0) || (weight > 20)) {
    cout << "INVALID WEIGHT\n";
    return (0);
  }
  
  
if ((distance < 10) || (distance > 3000)) { 
    cout << " Invalid Shipping Distance\n";
   return (0);
  }

if (weight <= 2) {
    totalc = (distance / 500.00) * rate1;
    cout << setprecision(2) << fixed;
    cout << "Total price: " << totalc;
  return (0);
  }

  





else if ((weight > 2) && (weight <= 6)) {
    totalc = (distance / 500.00) * rate2;
    cout << setprecision(2) << fixed;
    cout << "Total: " << totalc;
  return (0);
  }

 
  
  
  
  
  else if ((weight > 6) && (weight <= 10)) {
    totalc = (distance / 500.00) * rate3;
    cout << setprecision(2) << fixed;
    cout << "Total: " << totalc;
  return (0);
  }

 
  
  
  
  
  
  
  
  else if ((weight > 10) && (weight < 20)) {
    totalc = (distance / 500.00) * rate4;
    cout << setprecision(2) << fixed;
    cout << "Total: " << totalc;
  return (0);
  }

else {
  cout << "INVALID.\n";
}
   
}


  
	

