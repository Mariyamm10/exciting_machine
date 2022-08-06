// bakery management sstem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<cstring>
#include<string>

using namespace std;

struct foodItem
{
	int serial_no;
	char food_itemname[40];
	float price;
	
};
struct customer
{
	int cust_id;
	char name[20];
	int no_ofitems;
	float total;
	
};
void Keep_record(int total);
void adminpanel();
void Addition();
void showMenu();

int _tmain(int argc, _TCHAR* argv[])
{
	
	int option;
	cout<<"                ====================================="<<endl;
	cout<<"                            WELCOME     "<<endl;
	cout<<"                                   TO       "<<endl;
	cout<<"                                     BAKERY       "<<endl;
	cout<<"                 ====================================="<<endl; 
	cout<<"\n\n\t\t\t>>1.Customer";
	cout<<"\n\t\t\t>>2.Admin Panel";
	cout<<"\n\t\t\t>>3.Exit";	
	cout<<"\n\n\nEnter suitable option:";
	cin>>option;
	int choice,bill=0,x,total=0;

	switch(option)
		{
			case 1:
				{
					menu:
				showMenu();
				cout<<"Enter suitable choice:";
				cin>>choice;
				if(choice==1)
				{
					cout<<"You ordered Cream rolls"<<endl;
					cout<<"Please enter quantity:";
					cin>>x;
					total=total+(x*145);
					cout<<"Total=PKR."<<total;
				}
					if(choice==2)
				{
					cout<<"You ordered Chocolate Cake"<<endl;
					cout<<"Please enter quantity:";
					cin>>x;
						total=total+(x*1950);
					cout<<"Total=PKR."<<total;
				}
					if(choice==3)
				{
					cout<<"You ordered Muffin"<<endl;
					cout<<"Please enter quantity:";
					cin>>x;
						total=total+(x*650);
					cout<<"Total=PKR."<<total;
				}
					if(choice==4)
				{
					cout<<"You ordered French Toast"<<endl;
					cout<<"Please enter quantity:";
					cin>>x;
					total=total+(x*100);
					cout<<"Total=PKR."<<total;
					
				}	if(choice==5)
				{
					cout<<"You ordered Fruit Basket"<<endl;
					cout<<"Please enter quantity:";
					cin>>x;
						total=total+(x*490);
					cout<<"Total=PKR."<<total;
				}	if(choice==6)
				{
					cout<<"You ordered Dounuts"<<endl;
					cout<<"Please enter quantity:";
					cin>>x;
						total=total+(x*130);
					cout<<"Total=PKR."<<total;
				}	if(choice==7)
				{
					cout<<"You ordered Coffee"<<endl;
					cout<<"Please enter quantity:";
					cin>>x;
						total=total+(x*100);
					cout<<"Total=PKR."<<total;
				}	if(choice==8)
				{
					cout<<"You ordered Tea"<<endl;
					cout<<"Please enter quantity:";
					cin>>x;
						total=total+(x*80);
					cout<<"Total=PKR."<<total;
				}	if(choice==9)
				{
					cout<<"You ordered Bread"<<endl;
					cout<<"Please enter quantity:";
					cin>>x;
					total=total+(x*120);
					cout<<"Total=PKR."<<total;
				}	if(choice==10)
				{
					cout<<"You ordered Milkshake"<<endl;
					cout<<"Please enter quantity:";
					cin>>x;
					total=total+(x*230);
					cout<<"Total=PKR."<<total;
				}
				else  
				{
				cout<<"\nInvalid Id"<<endl;
			}
		    	}
				int y;
				cout<<"\nDO YOU WANT TO BUY ANOTHER DELICIOUS:";
				cout<<"\nEnter 1 for yes.\n";
				cin>>y;
				if(y==1){
					goto menu;
				}
				else {
				break;}

			case 2:
				adminpanel();
				break;
				
			case 3:
				cout<<"\n\t\t\tTHANKS FOR COMING TOHAPPY BAKERY MANAGEMENT SYSYEM"<<endl;
				
			default:
				cout<<"Invalid Number:"<<endl;
		}
	
	char check;
	do
	{
		Keep_record(total);
		cout<<"Do you want to enter another record:";
		cin>>check;
	}
	while(check=='G'||check=='g');
}

void Keep_record(int total)
{

	int cus=0;
	customer bf;
	fstream f;
	if(f.is_open())
	{
	f<<"\t\t\tWECLOME TO HAPPY BAKERY MANAGEMENT SYSTEM";
	f.open("C:MyBakeryMa_file.txt",ios::app|ios::out);
	f<<"_________________________________________________________________________________"<<endl;
	f<<"|Serial no.|  Customer id   |   Customer  Name     |   Food Items   |   Total   |"<<endl;
    	cout<<"\nEnter Your(customer) Id:\n";
		cin>>bf.cust_id;
		cus++;
		cout<<"Enter your(customer) Name:\n";
		cin.ignore();
		cin.getline(bf.name,sizeof(bf.name));
		cout<<"Enter number of items you brought:\n";
		cin>>bf.no_ofitems;		
		bf.total=total;
		f<<"|     "<<cus<<"|     "<<bf.cust_id<<"\t     |"<<bf.name<<"\t    |"<<bf.no_ofitems<<"|\t"<<bf.total;
		
	}
	else
	{
		cout<<"File not found";
	}
}

void adminpanel()
{
	int option,password;
	admin:
	cout<<" \n                    ***********************"<<endl;
    cout<<"                        Welcome to Admin Panel"<<endl;
    cout<<"                        ***********************"<<endl<<endl;
    cout<<"\tENTER PASSWORD:";
    cin>>password;
	if(password==12345)
	{
	cout<<"\n\t\t\t>>1.Add product";
	cout<<"\n\t\t\t>>2.MAIN MENU view";
	cout<<"\n\t\t\t>>3.View Product";
	
	cout<<"\n\n\nEnter suitable option";
	cin>>option;
	switch(option)
	{
		case 1:
			Addition();
			break;
			
		case 2:
			showMenu();
			break;
			
		case 3:
			int numb;
			cout<<"Please Enter the product number:";
			cin>>numb;
			if(numb==1)
			{
				cout <<"\t\t___________________________________"<<endl;
				cout << "\t\t|S.No  | ITEM NAME     |   PRICE  |"<<endl;
	            cout << "\t\t-----------------------------------"<<endl;
            	cout << "\t\t|  1   | Cream Rolls   | PKR.145  |"<<endl;
		    }
				if(numb==2)
				{
					cout <<"\t\t___________________________________"<<endl;
					cout << "\t\t|S.No  | ITEM NAME     |   PRICE  |"<<endl;
	           		cout << "\t\t-----------------------------------"<<endl;
	           		cout << "\t\t|  2   |Chocolate cake | PKR.1950 |"<<endl;
				}
					if(numb==3)
				{
					cout <<"\t\t___________________________________"<<endl;
				cout << "\t\t|S.No  | ITEM NAME     |   PRICE  |"<<endl;
	            cout << "\t\t-----------------------------------"<<endl;
	            cout << "\t\t|  3   |   Muffin      | PKR.650  |"<<endl;
				}
					if(numb==4)
				{
						cout <<"\t\t___________________________________"<<endl;
				cout << "\t\t|S.No  | ITEM NAME     |   PRICE  |"<<endl;
	            cout << "\t\t-----------------------------------"<<endl;
	            cout << "\t\t|  4   | French Toast  | PKR.100  |"<<endl;
				}	if(numb==5)
				{
					cout <<"\t\t___________________________________"<<endl;
				cout << "\t\t|S.No  | ITEM NAME     |   PRICE  |"<<endl;
	            cout << "\t\t-----------------------------------"<<endl;
	            cout << "\t\t|  5   | Fruit Basket  | PKR.490  |"<<endl;
				}	
				if(numb==6)
				{
					cout <<"\t\t___________________________________"<<endl;
				cout << "\t\t|S.No  | ITEM NAME     |   PRICE  |"<<endl;
	            cout << "\t\t-----------------------------------"<<endl;
	            cout << "\t\t|  6   |    Dounuts    | PKR.130  |"<<endl;
				}	
				if(numb==7)
				{
					cout <<"\t\t___________________________________"<<endl;
				cout << "\t\t|S.No  | ITEM NAME     |   PRICE  |"<<endl;
	            cout << "\t\t-----------------------------------"<<endl;
	            cout << "\t\t|  7   |    Coffee     | PKR.100  |"<<endl;
				}
					if(numb==8)
				{
					cout <<"\t\t___________________________________"<<endl;
				cout << "\t\t|S.No  | ITEM NAME     |   PRICE  |"<<endl;
	            cout << "\t\t-----------------------------------"<<endl;
	            cout << "\t\t|  8   |     Tea       | PKR.80   |"<<endl;
				}
					if(numb==9)
				{
					
				cout <<"\t\t___________________________________"<<endl;
				cout << "\t\t|S.No  | ITEM NAME     |   PRICE  |"<<endl;
	            cout << "\t\t-----------------------------------"<<endl;
	            cout << "\t\t|  9   |    Bread      | PKR.120  |"<<endl;
	            
				}
					if(numb==10)
				{
				cout <<"\t\t___________________________________"<<endl;
				cout << "\t\t|S.No  | ITEM NAME     |   PRICE  |"<<endl;
	            cout << "\t\t-----------------------------------"<<endl;
	            cout << "\t\t|  10  |   Milkshake   | PKR.230  |"<<endl;
				}
			
			break;
			
				
		default:
			adminpanel();
		}
	}
	if(password!=12345)
	{
		cout<<"Invalid password";
	}
	goto admin;
}

 void showMenu() 
{
	cout << "Menu: " << endl<<endl;
	cout << "\t\t___________________________________"<<endl;
	cout << "\t\t|S.No  | ITEM NAME     |   PRICE  |"<<endl;
	cout << "\t\t-----------------------------------"<<endl;
	cout << "\t\t|  1   | Cream Rolls   | PKR.145  |"<<endl;
	cout << "\t\t|  2   |Chocolate cake | PKR.1950 |"<<endl;
	cout << "\t\t|  3   |   Muffin      | PKR.650  |"<<endl;
	cout << "\t\t|  4   | French Toast  | PKR.100  |"<<endl;
	cout << "\t\t|  5   | Fruit Basket  | PKR.490  |"<<endl;
	cout << "\t\t|  6   |    Dounuts    | PKR.130  |"<<endl;
	cout << "\t\t|  7   |    Coffee     | PKR.100  |"<<endl;
	cout << "\t\t|  8   |     Tea       | PKR.80   |"<<endl;
	cout << "\t\t|  9   |    Bread      | PKR.120  |"<<endl;
	cout << "\t\t|  10  |   Milkshake   | PKR.230  |"<<endl;
	newproduct:
	cout << "\t\t-----------------------------------"<<endl;
}
void Addition()
{
	start:
	struct foodItem foo;
	char add;
	cout<<"Enter Serial number:";
	cin>>foo.serial_no;
	cout<<"Enter Item name:";
	cin.getline(foo.food_itemname,sizeof(foo.food_itemname));
	cin.ignore();
	cout<<"Enter price:";
	cin>>foo.price;
	cout<<"Do you want to add another record:(Y and N)";
	cin>>add;
	switch(add)
	{
		case 'Y':
		case 'y':
			goto start;
		break;
		
		case 'N':
		case 'n':
		newproduct:	
	break;
	}
	

