// class method

// #include<iostream>
// using namespace std;
//   class MyClass { 
//   public:     
//     void MyMethod() { 
//     cout<<""<<endl;
//     }
//   };
//   int main(){
//     MyClass MyObj;
//     MyObj.MyMethod();
//     return 0;
//   }


// class parameters

#include<iostream>
using namespace std;
class mobile {       //class definition,n3 variables: brand,model,year
public :
string brand;
string model;
int year;
 mobile(string x,string y,int z){
    brand=x;
    model=y;
    year=z;
}
};
int main() {    //main function
      mobile mobileobj1("apple", "Xs", 2019);   //they have 2 obcts mobile:mobileobj1,mobileobj2
      mobile mobileobj2("vivo", "y30", 2020);
      cout << mobileobj1.brand << " " << mobileobj1.model << " " << mobileobj1.year << "\n";   //print the output of the brand ; cout
      cout << mobileobj2.brand << " " << mobileobj2.model << " " << mobileobj2.year << "\n";
         return 0;
}
