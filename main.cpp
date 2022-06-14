/*
CBSE Class 12 Computer Science Project
Employee Data Management Program
*/

//Header Files
#include <iostream>
#include <fstream>

//Stream Declarations
fstream file,tempfile;

//Last Employee ID
int empid;

//Class For Employee
class employee {
	//Private Data Members
	private:
	int age,yoj,empid,exp;
	long salary;
	string name, emailid, address;

	//Public Member Functions Prototypes
	public:
	void input(int n){
        if(n==1)
	{
		goto skip;
	}
	empid=lempid;
	skip:
	cout<<"Enter Employee Details: \nEmployee ID: "<<empid<<endl;
	cout<<"\nName: ";
	gets(name);
	age=18;
	do
	{
		cout<<"\nAge: ";
		cin>>age;
		if(age>=61 || age<=17)
		{
			cout<<"Age limit is between 18 yrs and 60 yrs.";
		}
	}
	while(age<=17 || age>=61);
	cout<<"\nAddress: ";
	gets(address);
	cout<<"\nEmail ID: ";
	gets(emailid);
	do
	{
		cout<<"\nYear of Joining: ";
		cin>>yoj;
		if(yoj<=1949 || yoj>=2017)
		{
			cout<<"Limit is between 1950 and 2016";
		}
	}
	while(yoj<=1949 || yoj>=2017);
	cout<<"\nSalary: ";
	cin>>salary;
	calc_exp();

}

    }
	void calc_exp(void);
	void output(void);

	//Accessor Functions
	int retempid(void);
	int retexp(void);
	int retsalary(void);
};

//Object Declaratons
employee emp,lemp;



using namespace std;


int main() {
    cout << "Hello, World" << endl;
    return 0;
}