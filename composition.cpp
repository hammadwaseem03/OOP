#include<iostream>
using namespace std;
class Birthday{
public:  
    Birthday(){
        cout << "Constructor of Birthday class" <<endl;
    }
    Birthday(int m,int d,int y){
    month=m;
    year=y;
    day=d;
    cout << "Constructor of Birthday class" << endl; 
    }
    
    ~Birthday(){
        std::cout << "Destructor of Birthday class" <<endl;
    }
    void printDate(){
        cout << month << "/" << day << "/" << year <<endl;
    }
private:
    int month;
    int day; 
    int year;
};

class Person{
public: Person(){

}
Person(string ,const Birthday&){

}

~Person(){
    cout << "Destructor of Person class" << endl;
}
void printInfo(){
    cout << name << " was born on ";
dateofBirth.printDate();
}
private:
string name;
Birthday dateofBirth;
};
int main(){
 Birthday b(2, 2, 2000);
 Person p1("Ali",b);
 p1.printInfo();
return 0;
}



