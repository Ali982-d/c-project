#include<iostream>
#include<iomanip>

using namespace std;
//HERE THREE STRUCTURE ARE DEFINE AND THIER DATA IS TAKEN BY FUNCTION................
struct DATE
{
	int year;
	int month;
	int day;
};
struct PLACE
{
	string address;
	string city;
	string state;
	int zip;
};
struct EMPLYINFO
{
	int emply_code;
	string name;	
	int payrate;
	int no_of_hours;
	int Gross_salary;
	DATE birthdate;
	PLACE residence;
};

//HERE FOUR FUNTION ARE WRITTEN THEIR PROTOTYPE .....................
void emply(EMPLYINFO [],int);
void calculate(double [] ,int);
void winner();
void display();
//IT'S A MAIN FUNTION IN WHICH DATA TAKKEN.............................

main()
{
	                 
	                 int repeat_program;
	                 repeat_program:
	int choice;
	cout<<"\t\t\t================================================================================="<<endl<<endl;
	cout<<"\t\t\t\t\t\t  ***** WELCOME TO THE STORE *****"<<endl<<endl;
	cout<<"\t\t\t================================================================================="<<endl<<endl;
	cout<<"\t\t\t IN THIS PROGRAM WE CALCULATE THE EMPLOYEE SALARIES AND WEEKLY PRIZE WINNER.....:"<<endl<<endl;
	cout<<"\t\t\t_________________________________________________________________________________"<<endl<<endl;
	
	/*cout<<"\t\t\tpress 1 for Employee info and calculate the salary of the Store:"<<endl<<endl;
	//cout<<"\t\t\tpress 2 for buy the products from the Store :"<<endl<<endl;
	//cout<<"\t\t\tpress 3 for Weekly Price Winner Customers :"<<endl<<endl;
	//cout<<"\t\t\tEnter your Choice :"<<endl;
	//cout<<"\t\t\t...";
	cin>>choice;*/
	//CREATING THE ARRAY IN WHICH CALCULATE THE SALARIES ................................
		   	int size;
		   	
		   	cout<<"\t\t\t Enter the size of Employee Array you wants to creat:"<<endl<<endl;
		   	cout<<"\t\t\t...";
	        cin>>size;
	        //CALLING THE FUNCTION.................
	  	    EMPLYINFO no_of_hours[size];
	        emply(no_of_hours,size);
	        //ANOTHER FUNCTION CALL..................
	        int size2=3;
	        double Winner1[size2];
	        calculate(Winner1,size2);
	        //FUNCTION CALL FOR CONGURALATOIN ..................
	        winner();
	        //CALLING A FUNTOIN FOR WECOME AGAING AND FOR THANKS..................
	        display();
	        cout<<"\t\t\t Do you want to do it again ... 1 to continue "<<endl<<endl;
	        int repeat;
	        cout<<"\t\t\t....";
	        cin>>repeat;
	        if(repeat==1)
	        {
	        	goto repeat_program;
			}
}
//FUNTION DEFINATION..................................
void emply(EMPLYINFO A[],int size)
{
	cout<<endl<<endl;
	
	for (int i=0; i<size ;i++)
	{
		
		cout<<"\t\t\t Enter the employee name :"<<endl<<endl;
		cout<<"\t\t\t...";
		cin>>A[i].name;
		cout<<endl<<endl;
		
		cout<<"\t\t\t Enter the employee code:"<<endl<<endl;
		cout<<"\t\t\t...";
		cin>>A[i].emply_code;
		cout<<endl<<endl;
	do
	{
		
		cout<<"\t\t\t Enter the birthdate year:"<<endl<<endl;
		cout<<"\t\t\t...";
		cin>>A[i].birthdate.year;
		cout<<endl<<endl;
		
	}
	
	while(A[i].birthdate.year>=1994 || A[i].birthdate.year<1919);
	
	do
	{
		
		cout<<"\t\t\t Enter the birthdate month:"<<endl<<endl;
		cout<<"\t\t\t...";
		cin>>A[i].birthdate.month;
		cout<<endl<<endl;
    }
    while(A[i].birthdate.month <1 || A[i].birthdate.month >12);
    
    do
    {
	
		cout<<"\t\t\t Enter the birthdate day:"<<endl<<endl;
		cout<<"\t\t\t...";
		cin>>A[i].birthdate.day;
		cout<<endl<<endl;
    }
    while(A[i].birthdate.day<1 || A[i].birthdate.day >31);

	   	cout<<"\t\t\t Enter the address:"<<endl<<endl;
	   	cout<<"\t\t\t...";
		cin>>A[i].residence.address;
		cout<<endl<<endl;
		
		cout<<"\t\t\t Enter the city:"<<endl<<endl;
		cout<<"\t\t\t...";
		cin>>A[i].residence.city;
		cout<<endl<<endl;
		
		cout<<"\t\t\t Enter the state :"<<endl<<endl;
		cout<<"\t\t\t...";
		cin>>A[i].residence.state;
		cout<<endl<<endl;
		
		cout<<"\t\t\t Enter the Zip code :"<<endl<<endl;
		cout<<"\t\t\t...";
		cin>>A[i].residence.zip;
		cout<<endl<<endl;
		
		cout<<"\t\t\t THE DATA HAS BEEN TAKKEN ......"<<endl<<endl;
		cout<<"\t\t\t_______________________________________________________________"<<endl<<endl;
		
		cout<<"\t\t\t Enter the working hours of Employees :"<<endl<<endl;
		cout<<"\t\t\t...";
        cin>>A[i].no_of_hours;
        cout<<endl<<endl;
        
	    cout<<"\t\t\t Enter the pay_Rate of Emploees :"<<endl<<endl;
	    cout<<"\t\t\t...";
	    cin>>A[i].payrate;
	    cout<<endl<<endl;
	    
	    //CALCULATING THE SALARIES....................
	    cout<<"\t\t\t THE SALARIES OF EMPLOYEES ......"<<endl<<endl;
	    cout<<"\t\t\t______________________________________________________________________________________________________________________________________"<<endl<<endl;
	    A[i].Gross_salary=(A[i].no_of_hours)*(A[i].payrate);
	    cout<<"\t\t\t Name of Employee  :"<<A[i].name<<" ||  "<<"Code of Employee : "<<A[i].emply_code<<" ||   "<<"Gross_salary  ="<<A[i].Gross_salary<<endl<<endl;
	    cout<<endl<<endl;
	    cout<<"\t\t\t_________________________________________________________________________________________________________________________________________"<<endl<<endl;
	    
    }           
}
//FUNTION DEFINE .......................
void calculate(double Arr[] ,int x)
{

	cout<<endl<<endl;
	
	cout<<"\t\t\t Enter first 3 customers money who,s Got the weekly prize :"<<endl<<endl;
	
	//WEEKLY WINNER CALCULATION..................
	for(int i=1;i<4;i++)
	{
		
		
	cout<<"\t\t\t Enter "<<i<<" customer money :"<<endl<<endl;
	cout<<"\t\t\t...";
	cin>>Arr[i];
	cout<<endl<<endl;
	
    cout<<"\t\t\t WEEKLY WINNERS ...."<<endl<<endl;
    cout<<"\t\t\t________________________________________________________________________"<<endl<<endl;	
    if(Arr[i] >= 50000)
	{
		
		cout<<"\t\t\t The customer "<<i<<"    Got the first prize  :"<<endl<<endl;
		
	}
	
	else if(Arr[i] >40000 && Arr[i] < 50000 )
	 {
	 	
	 	cout<<"\t\t\t The customer "<<i<<"    Got  the second prize  :"<<endl<<endl;
	 	
	 } 
	 else if(Arr[i] >30000 && Arr[i]  <40000 )
	 {
	 	
	 	cout<<"\t\t\t The customer "<<i<<"    Got the Third price  :"<<endl<<endl;
	 	
	 }
	 else 
	 {
	 	
	 	cout<<"\t\t\t Invalid Input   :"<<endl<<endl;
	 	
	 }
    }
    cout<<"\t\t\t___________________________________________________________________"<<endl<<endl;
}
//FUNTION DEFINE......................
void winner()
{
	cout<<endl<<endl;
	cout<<"\t\t\t ___________________________________________________________________"<<endl<<endl;
	cout<<"\t\t\t Conguralation To All Three Weekly Prize Winner,s :"<<endl<<endl;
	cout<<"\t\t\t ___________________________________________________________________"<<endl<<endl;
}
//FUNTION DEFINATION...........
void display()
{
	cout<<endl<<endl;
	cout<<"\t\t\t ___________________________________________________________________"<<endl<<endl;
	cout<<"\t\t\t  THANKS FOR SHOPPING HERE ......."<<endl<<endl;
	cout<<"\t\t\t  WELCOME AGAIN ....."<<endl<<endl;
	cout<<"\t\t\t ___________________________________________________________________"<<endl;
}

