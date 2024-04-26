#include<iostream>
#include<stdlib.h>
using namespace std;
void calculategpa();
 void calculatecgpa();
 
int main()
{
    system("cls");
int choice; 
 cout<<"                  WELCOME | GPA & CGPA CALCULATOR                      "<<endl; 
 cout<<"-----------------------------------------------------------------------"<<endl;
 cout<<"MENU:"<<endl;
 cout<<"     1.Calculate GPA(Grade Point Average)"<<endl;
 cout<<"     2.Calculate CGPA(Cumulative grade Point Average)"<<endl;
 cout<<"     3.Exit Application"<<endl;
 cout<<"-----------------------------------------------------------------------"<<endl;
 sub:
 cout<<"Enter your choice:"<<endl;
cin>>choice;
switch (choice)
{
case 1:
    calculategpa();
    break;
case 2:
calculatecgpa();
break;
case 3: 
exit(EXIT_SUCCESS);
default:
cout<<"You have Entered a wrong choice.Try Again!"<<endl;
goto sub;
break;
   
}
   
    return 0;
}
void calculategpa(){
    int q;
    cout<<"---------------------GPA Calculating---------------------------"<<endl;
    cout<<"How many Subjects points do you want to Calculate? : ";
    cin>>q;
    cout<<endl;
    float credit[q];
    float point[q];
    for(int i=0;i<q;i++){
        cout<<"Enter the Credit Point Assigned for the Subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<"Enter the Grade Point Awarded for the Subject "<<i+1<<": ";
        cin>>point[i];
        cout<<"--------------------"<<endl;
    }
        float sum;
        float total;
        for(int j=0;j<q;j++){
            total=credit[j]*point[j];
            sum=sum+total;
        }
        float totalcr=0;
        for(int k=0;k<q;k++){
            totalcr=totalcr+credit[k];
        }
        cout<<"\n\n\nTotal Points: "<<sum<<" | Total Credits: "<<totalcr<<" | Total GPA: "<<sum/totalcr<<endl;

    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                calculategpa();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }

}
void calculatecgpa(){
    system("cls");
    int l;
    cout<<"--------------------------CGPA Calculating -----------------------------\n\n"<<endl;
    cout<<"How many semester results do you want input? :";
    cin>>l;
    cout<<"\n\n"<<endl;
    float semes[l];
    for(int i=0;i<l;i++){
        cout<<"Enter Semester "<<i+1<<" Result(GPA): "<<endl;
        cin>>semes[i];
    }
    float semtot=0;
    for(int j=0;j<l;j++){
        semtot=semtot+semes[j];
    }
    cout<<"Your CGPA is::"<<semtot/l<<endl;
    sub:
    int inmenu;
    cout<<"1. Go Back to Main Menu"<<endl;
    cout<<"2. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                main();
                break;
        case 2:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}