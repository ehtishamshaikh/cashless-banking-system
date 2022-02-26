#include <iostream>
using namespace std;
class cust{
	long long int rnum;
	double balance=100000;
	public:
		void set_rnum(long long int x)
		{
			rnum=x;
		}
		void update_balance(double x)
		{
			if (x<=balance)
			{
				balance=balance-x;
				cout<<endl<<"Transaction Successful";
			}
			else {
				cout <<endl<<"Not enough balance ";
			}
		}
		double get_balance()
		{
			cout<<endl<<"Your Remaining Balance: "<<endl<<balance;
		}
	static void fund_transfer();
void reversal()
{
	int id;
	cout<<endl<<"Enter Transaction ID: ";
	cin>> id;
	
}		
void bill_pay()
{
	int ch;
	cout <<endl<<"1. K-Electric"<<endl<<"2. SSGC"<<endl<<"3. KWSB"<<endl<<"4. Mobile Credit"<<endl;
	cin>>ch;
	if (ch==1)
	{
		int amount;
		cout<<endl<<"NOTE: Rs.25 will be charged extra ";
		cout<<endl<<"Enter Your Bill Amount: ";
		
		cin>> amount;
		cust c;
		 update_balance(amount+25);
		 get_balance();
		
	}
	if (ch==2)
	{
		int amount;
		cout<<endl<<"NOTE: Rs.15 will be charged extra ";
		cout<<endl<<"Enter Your Bill Amount: ";
		
		cin>> amount;
		cust c;
		 update_balance(amount+15);
		 get_balance();
	}
	if (ch==3)
	{
		int amount;
		cout<<endl<<"NOTE: Rs.10 will be charged extra ";
		cout<<endl<<"Enter Your Bill Amount: ";
		
		cin>> amount;
		cust c;
		 update_balance(amount+10);
		 get_balance();
	}
	if (ch==4)
	{
		int chh;
		cout<<endl<<"Choose Network: "<<endl<<"1. Ufone"<<endl<<"2. Moblink"<<endl<<"3. Zong"<<endl;
		cin>>chh;
		
		if (chh==1)
		{
			int amount;
			cout<<endl<<"NOTE: Minimum Amount is Rs. 200 ";
			cout<<endl<<"Enter Credit Amount: ";
			
			cin>> amount;
			if (amount>=200)
			{
				cust c;
			 update_balance(amount);
			 get_balance();
			}
			else {
				cout<<endl<<"Invalid Amount ";
			}
			
		}
		if (chh==2)
		{
			int amount;
			cout<<endl<<"NOTE: Minimum Amount is Rs. 200 ";
			cout<<endl<<"Enter Credit Amount: ";
			
			cin>> amount;
			if (amount>=200)
			{
				cust c;
			 update_balance(amount);
			 get_balance();
			}
			else{
				cout<<endl<<"Invalid Amount ";
			}
		}
		if (chh==3)
		{
			int amount;
			cout<<endl<<"NOTE: Minimum Amount is Rs. 200 ";
			cout<<endl<<"Enter Credit Amount: ";
			
			cin>> amount;
			if (amount>=200)
			{
				cust c;
			 update_balance(amount);
			 get_balance();
			}
			else{
				cout<<endl<<"Invalid Amount ";
			}
		}
		
	}
}	
};
void cust::fund_transfer()
{
	{
			long long int rnum;
			double trans;
			cout<<"Enter Account Number Of Recipient (without dashes): ";//13 digit
			cin >> rnum;
			
			int counter=0;
			//cout<<"ss";       
		    while(rnum!=0)
		    {
	 
		        rnum=rnum/10;
				counter++;
		    	
			}
			if (counter ==13)
			{
			cust c;
			c.set_rnum(rnum);
			cout<<endl<<"Enter Amount you want to transfer: ";
			cin>>trans;
			c.update_balance(trans);
			c.get_balance();
			}
			else {
				cout<<endl<<"Invalid Account Number ";
			}
			
		}	
}


main()
{
	cust c1;
	
//	c1.fund_transfer();
	c1.bill_pay();
	
	
}
