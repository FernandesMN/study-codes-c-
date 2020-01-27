#include <iostream>
#include "fila.hpp"

using namespace std;

int main(){
	Queve <int> A(5);
	//CQueve <int> B(5);

	try{
		A.enqueve(20);
		A.enqueve(45);
		A.enqueve(31);
		A.enqueve(25);
		A.enqueve(13);
		A.show();

		cout<<"-----------------------------------"<<endl;

		A.dequeve();
		A.dequeve();
		A.show();

		cout<<"-----------------------------------"<<endl;

		A.enqueve(76);	
		A.show();
	}catch(underflow_error){
	    cout<<"Is not possible remove data from an empty stack."<<endl;
    }catch(overflow_error){
        cout << "There's no room in stack." << endl;
    }
	return 0;
}