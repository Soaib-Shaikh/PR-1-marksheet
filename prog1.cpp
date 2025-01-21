#include<iostream>
using namespace std;

int main()
{
    int rollno,maths,science,english,total;
    float avg;
    char name[20];

    

    cout<<"Enter rollno:";
    cin>>rollno;

    cout<<"Enter name: ";
    cin>>name;

    cout<<"Enter maths mark: ";
    cin>>maths;

    cout<<"Enter science mark: ";
    cin>>science;

    cout<<"Enter english mark: ";
    cin>>english;

    total = maths + science + english ;
    avg = total/3;

    cout<<endl;
    cout<<"-- Output --"<<endl;
    cout<<endl;

    cout<<"Rollno is: "<<rollno<<endl;
    cout<<"Name is: "<<name<<endl;
    cout<<"Maths Mark is: "<<maths<<endl;
    cout<<"Science Mark is : "<<science<<endl;
    cout<<"English Mark is : "<<english<<endl;
    cout<<"Total is: "<<total<<endl;
    cout<<"Avg is: "<<avg<<endl;

    if(maths>=35 && science>=35 && english>=35)
    {
        cout<<"Pass"<<endl;

         if(avg>=80)
        {
            cout<<"Grade A";
        }
        else if(avg>=60)
        {
            cout<<"Grade B";
        }
        else if(avg>=50)
        {
            cout<<"Grade C";
        }
        else
        {
            cout<<"Pass Class";
        }

        }
        else
        {
            cout<<"Fail";
        }

    // avg>=80
    // avg>=60
    // avg>=50
    // avg<50

   
    return 0;
}

