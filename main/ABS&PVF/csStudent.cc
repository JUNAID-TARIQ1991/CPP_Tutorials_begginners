#include<iostream>
#include"csStudent.hh"
#include"mathStudent.hh"
#include"Student.hh"
using namespace std;
void RemainingHours(csStudent *activity){
cout<<"Subject Remaining hours "<<activity->GetRemainingHours()<<endl;
}
int main(){
     csStudent Junaid("junaid","AA12",2022);
     Junaid.SetCsHour(40);
     Junaid.SetGeHour(60);
     Junaid.SetMathHour(20);
     cout<<"Junaid's remaining houres are "<<Junaid.GetRemainingHours()<<endl;
     csStudent *Zohaib=new csStudent("Zohaib","AA13",2023); // Arguments automatically passed to base class object also
     cout<<Zohaib->getid()<<endl; //member function of base class
     cout<<Zohaib->GetRemainingHours()<<endl;
     ////polymorphism
     mathStudent *Qudsia =new mathStudent("Qudsia","AA13",2021);

     RemainingHours(Zohaib);
     //RemainingHours(Qudsia);



}
