#ifndef PERSON_HH
#define PERSON_HH
using namespace std;
class Person
{
private:
    /* data */
    string name;
    int age;
    //int id;
public:
    Person(string n, int a){
        name=n;
        age=a;
    }
    void Display_info(){
        cout<<"NAME "<<name<<endl;
        cout<<"Age "<<age<<endl;
    }
    string GetName(){
        return name;
    }
    int GetAge(){
        return age;
    }


    
};


#endif