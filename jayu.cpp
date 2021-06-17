#include<iostream>
using namespace std;

#include<stdio.h>
#include<conio.h>
#include"staff.h"
#include"company.h"
#include"payroll.h"
#include<string.h>

class menu
{
   public:
       staff s;
       company c;
       payroll p;

    void mainmenu()
    {
        int ch;
        do
        {
            cout<<"\n\n\n\n\n\t\t\t\t\t &*&*&*&*&*&***MAIN MENU***&*&*&*&*&*&";
            cout<<"\n\n\t\t\t\t\t\t 1.Add Employee Details ";
            cout<<"\n\n\t\t\t\t\t\t 2.Display Employee Details ";
            cout<<"\n\n\t\t\t\t\t\t 3.Display Company Details ";
            cout<<"\n\n\t\t\t\t\t\t 4.Search Employee Details ";
            cout<<"\n\n\t\t\t\t\t\t 5.Generate Payroll ";
            cout<<"\n\n\t\t\t\t\t\t 6.Delete Employee Details";
            cout<<"\n\n\t\t\t\t\t\t 0.Exit ";

            cout<<"\n\n\n\t\t\t\t Enter your choice : ";
            cin>>ch;

            switch(ch)
            {
                case 1:
                        s.add();
                        break;
                case 2:
                        s.Display();
                        break;

                case 3:
                        c.display();
                        break;

                case 4:
                        s.search();
                        break;

                case 5:
                        p.genPayroll();
                        break;
                case 6:
                        p.Delete();
                        break;

                case 0:
                        cout<<"\n\n\n\n\t\t\t\t\t:) :) :) :) :) :) :) :) :) :) :) :) :) :) :)";
                        cout<<"\n\t\t\t\t\t;)                                        ;)";
                        cout<<"\n\t\t\t\t\t;)     Thank you for your visit........   ;)";
                        cout<<"\n\t\t\t\t\t;)                Exited...               ;)";
                        cout<<"\n\t\t\t\t\t;)                                        ;)";
                        cout<<"\n\t\t\t\t\t:) :) :) :) :) :) :) :) :) :) :) :) :) :) :)";
                        break;
            }
        }while(ch!=0);


    }
};

void staff :: add()
{
    cout<<"\n\t Enter Employees Details...";
    cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
    cout<<"\n\t Enter Employee Id            : ";
    cin>>empID;

    cout<<"\n\t Enter Employee Fname         : ";
    cin>>fname;

    cout<<"\n\t Enter Employee Lname         : ";
    cin>>lname;

    cout<<"\n\t Enter Employee Gender        : ";
    cin>>g;

    while((strcmp(g,"f")!=0))
    {
        cout<<"\n\t Renter Employee Gender       : ";
        cin>>g;
    }

    cout<<"\n\t Enter Employee Age           : ";
    cin>>age;
    if(age>=70 || age<18)
    {
        cout<<"\n\t Sorry !!! you can't get employement...";
        //exit(1);
    }

    cout<<"\n\t Enter Employee Address       : ";
    cin>>addr;

    cout<<"\n\t Enter Employee City          : ";
    cin>>city;

    cout<<"\n\t Enter Employee Contact       : ";
    cin>>cont;
   while(strlen(cont)>10 || strlen(cont)<10)
    {
        cout<<"\n\t Re-enter Employee Contact    : ";
        cin>>cont;
    }


    cout<<"\n\t Enter Employee Qualification : ";
    cin>>qual;

    cout<<"\n\t Enter Employee Experience    : ";
    cin>>exp;

    cout<<"\n\t Enter Employee Working Days  : ";
    cin>>no_of_WDays;
    cout<<"\n---------------------------------------------------";
    cout<<"\n\n\t Select Designation From Given List...";
    cout<<"\n\t -> Manager";
    cout<<"\n\t -> Employee";
    cout<<"\n\t -> Worker";
    cout<<"\n---------------------------------------------------";

    cout<<"\n\t Enter Employee Designation   : ";
    cin>>des;
    if(strcmp(des,"Manager")==0)
    {
        sal=no_of_WDays*1000;
    }
    else if(strcmp(des,"Employee")==0)
    {
        sal=no_of_WDays*700;
    }
    else if(strcmp(des,"Worker")==0)
    {
        sal=no_of_WDays*400;
    }
    else
    {
        cout<<"\n\t Re-enter Employee Designation from the given list:";
        cin>>des;
    }

    cout<<"\n\t Employee Salary              : "<<sal;
    cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
    getch();
}

void staff :: Display()
{
    cout<<"\n\n\t Employee Details";
    cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
    cout<<"\n\t Employee Id             : "<<empID;
    cout<<"\n\t Employee First Name     : "<<fname;
    cout<<"\n\t Employee Last Name      : "<<lname;
    cout<<"\n\t Employee Gender         : "<<g;
    cout<<"\n\t Employee Age            : "<<age;
    cout<<"\n\t Employee Address        : "<<addr;
    cout<<"\n\t Employee City           : "<<city;
    cout<<"\n\t Employee Contact        : "<<cont;
    cout<<"\n\t Employee Qualification  : "<<qual;
    cout<<"\n\t Employee Experience     : "<<exp;
    cout<<"\n\t Employee Contact        : "<<cont;
    cout<<"\n\t Employee Working Days   : "<<no_of_WDays;
    cout<<"\n\t Employee Designation    : "<<des;
    cout<<"\n\t Employee Salary         : "<<sal;
    cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
    getch();
}


void staff  :: search()
{

}

void company  :: display()
{
    Name="HONESTY INFOTECH";
    regNo="bh123BH45";
    cont=9727280413;
    add="RAJKOT - 360004, GUJARAT - INDIA.";
    TEmp=200;

    cout<<"\n\t Company Details...";
    cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
    cout<<"\n\t Company Name             : "<< Name;
    cout<<"\n\t ComapanyRegistration No. : "<< regNo;
    cout<<"\n\t Company Contact No.      : "<< cont;
    cout<<"\n\t Company Address          : "<<add;
    cout<<"\n\t Company Total Employees  : "<<TEmp;
    cout<<"\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
    getch();
}

void payroll  :: Delete()
{

}

void payroll  :: genPayroll()
{

}

int main()
{
    int i;
    char user[20],pass[20],ch;


        cout<<"\n\t\t\t\t*************************************************************";
        cout<<"\n\t\t\t\t*                   HONESTY INFOTECH                        *";
        cout<<"\n\t\t\t\t*             -----------------------------                 *";
        cout<<"\n\t\t\t\t*              <Payroll Management System>                  *";
        cout<<"\n\t\t\t\t*************************************************************";


        cout<<"\n\n\t\t\t\t\t.............................................";
        cout<<"\n\n\t\t\t\t\t\t Enter User Name : ";
        cin>>user;
        cout<<"\n\t\t\t\t\t\t Enter password  : ";

        for(i=0;i<20;i++)
        {
            ch=getch();
            if(ch==13)
            {
                break;
            }

            pass[i]=ch;
            ch='*';
            cout<<ch;
        }
        pass[i]='\0';
        cout<<"\n\n\t\t\t\t\t.............................................";

        if(strcmp(user,"jayraj")==0 && strcmp(pass,"sarvaiya")==0)
        {
            cout<<"\n\n\t\t\t\t\t\t Login Successfully.........";
            getch();
            menu m;
            m.mainmenu();

        }
        else
        {
            cout<<"\n\n\t\t\t\t\t\t Invalid Login...";
        }
        getch();

    //staff s;
    //s.add();
    //s.Display();*/
    //company c;
    //c.display();
    return(0);

}

