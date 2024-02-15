// # include <iostream>
// using namespace std;
// class   Hello{
//     public:
//     int num;
//     float number;
// };
// int main(){
//     Hello s1;
//     s1.num = 5;
//     s1.number= 3.12;
//     cout<<"the value of num is\t"<<s1.num ;
//     cout<<"\nthe values of number is\t"<<s1.number;
//     return 0;
// }



// constructor

// # include <iostream>
// using namespace std;
//  class emp{
//     public:
//     int a;
//     string b;

//     emp(){
//       cout<<"he";
//     }
//  };
//  int main(){
//     emp s;
// s.a=7;
// s.b="hello";
// cout<<"\nthe value of a"<<s.a;
// cout<<"\nthe value of b is "<<s.b;



//     return 0;
//  }


// constructor passed as parameters

# include <iostream>
using namespace std;

class employyee{
    string name;
    string place;
    int salary;
    employyee(string x, string y,  int z){
        name=x;
        place=y;
        salary=z;
    }
};
int main(){
    employyee em("freena", "pkd", 10000);
    employyee em1("bincy", "pkd", 1222222);

}



# include <iostream>
using namespace std;

class employyee{
public:
    string name;
    string place;
    int salary;
    
    // Constructor definition
    employyee(string x, string y, int z){
        name = x;
        place = y;
        salary = z; 
    }
};

int main(){
    // Creating objects of employyee class using the constructor
    employyee em("freena", "pkd", 10000);
    employyee em1("bincy", "pkd", 1222222);

    // Outputting the details of the employees
    cout << "Employee 1:" << endl;
    cout << "Name: " << em.name << endl;
    cout << "Place: " << em.place << endl;
    cout << "Salary: " << em.salary << endl;

    cout << "\nEmployee 2:" << endl;
    cout << "Name: " << em1.name << endl;
    cout << "Place: " << em1.place << endl;
    cout << "Salary: " << em1.salary << endl;

    return 0;
}
