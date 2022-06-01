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
        cout << "Destructor of Birthday class" <<endl;
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
Person(string name ,const Birthday& dateofBirth){
    this->name=name;
    this->dateofBirth=dateofBirth;
}
void printInfo(){
    cout << name << " was born on ";
    dateofBirth.printDate();
}
~Person(){
    cout << "Destructor of Person class" << endl;
}

private:
    string name;
    Birthday dateofBirth;
};
int main(){
    Birthday b(2, 3, 2002);
    Person p1("Ali",b);
    p1.printInfo();
    return 0;
}
 


