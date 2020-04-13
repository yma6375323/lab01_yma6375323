#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n = 0,m = 0;
    double lim = 0, pi = 0, f=1.0;
    cout.setf(ios::fixed);/*Display in fixed point notation*/
    cout.setf(ios::showpoint);/*always display the decimal point*/
    cout.precision(3); /*Set the number of digits to display after the decimal point to 3*/
    while (n != 1){
        
        cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";
        cin>>n;

        while (n == 0){
        	pi = 4.00;
            cout<<"The approximate value of pi using 1 term is: ";
        	cout<<pi<<endl;
        	cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";
        	cin>>n;
        }
        while (n == 1){
        	pi = 2.667;
            cout<<"The approximate value of pi using 2 terms is: ";
            cout<<pi<<endl;
        	cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):\n";
        	cin>>n;
        	
        }

        if (n == (-1)){

            return 0;
        }

        for (m = 0; m <= n ; m = m + 1){
            lim = lim + (pow(-1,m)*f)/(2*m+1);
        }
        pi = 4 * lim;

        cout<<"The approximate value of pi using ";
        cout<<n+1;
        cout<<" terms is: ";
        cout<<pi<<endl;

        pi = 0;
        lim = 0;
        m = 0;
         
    }
    
    return 0;

}

