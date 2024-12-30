#include <iostream>
using namespace std;
int main (){

    string studentsName [5] = {"Lula" , "Mola", "Alice" , "Naol", "Chris"};
    double number_of_courses [5] = {5 ,7 ,8 ,13 ,9 };

    cout<<studentsName<<endl;  // display address of the array

    string *name = studentsName;
   // cout<<name<<endl;  // display address of arrays no need to use the "&" operator

    for (int i = 0 ; i <5 ; i++){
        cout<< *(name+i)<<endl;  // uses pointer to access the values in side the arrays

    }
    
return 0;
}