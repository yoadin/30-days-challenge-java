#include <iostream>
using namespace std;

int main()
{
	int school = 10;
	string schoolName = "Berhan";
	
	//int *pSchool_Address = &school;
	int *pTryout = &school;
	string *pTryout2 = &schoolName;
	
	cout<<pTryout<<endl;
	cout<<"Values the pointers are pointing \n ";
	cout<<*pTryout<<endl;  // display the value at the address
	cout<<"______________________"<<endl;
	cout<<pTryout2<<endl;  // display the address
	cout<<*pTryout2<<endl;
	return 0;
}