#include<iostream>
using namespace std;
int main()
{
    string name_of_students [5] = {"Kal","Bob","Mulu","Liya","Alem"};
    double gpa[5] = {3.48 , 3.5 , 3.87 , 3.67 , 3.00};
    cout<<name_of_students<<endl;  //displays the respective address(0x7fffffffcfd0)
    cout<<name_of_students[3]<<endl;  // display the 4th element (Liya)

    cout<<gpa[0]<<endl; // display the first element(3.48)

    return 0;  
}