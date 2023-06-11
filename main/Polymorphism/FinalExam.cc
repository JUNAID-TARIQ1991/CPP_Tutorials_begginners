#include<iostream>
#include "FinalExam.hh"
using namespace std;

    int main(){
        int questions;
        int missed;
        cout<<"How many question in math paper?"<<endl;
        cin>> questions;
        cout<<"How many junaid missed?"<<endl;
        cin>> missed;
        FinalExam *Junaid_math=new FinalExam(questions,missed);
        FinalExam Zohaib_math(12,0);
        //cout<<"Junaid's math score is "<<Junaid_math->GetScore()<<endl;//here request for memeber with -> due to pointer type 
        cout<<"Zohaib's math score is "<<Zohaib_math.GetScore()<<endl;//here non pointer type due to we request with ".""
        //cout<<"Junaid's math each question score is "<<Junaid_math.getpointEach()<<endl;
        cout<<"Junaid's math grade is "<<Junaid_math.GetLetterGrade()<<endl;
        //FinalExam *Zohaib = new FinalExam(10,0);
        //cout<<"Zohaib's math score is "<<Zohaib.GetScore()<<endl;

        

        


        return 0;
    }
                    