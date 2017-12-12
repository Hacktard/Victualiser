//Libraries included

#include <iostream.h>
#include <fstream.h>
#include <stdio.h>
#include <process.h>
#include <conio.h>
#include <string.h>
#include <shellapi.h>

//class defined

class rev
{
	char n[200];
	char name[30];     					 		//class member
	public:
		char name_c(char x[])
		{
			if(strcmpi(name,x)==0)
			return 1;
			else return 0;            //member functions
		}
		void review_c()
		{
			gets(n);
		}
		void input()
		{
			cout<<endl<<"Enter the name:\n";
		 	gets(name);
		 	cout<<"Enter the review\n";
		 	gets(n);
		}
		void display()
		{
			cout<<endl;
			cout<<"Name :  ";
			puts(name);
			cout<<"Review :  ";
			puts(n);
			cout<<endl;
		}
		void disn()
		{
			cout<<"\nAll the reviews are:-\n";
		 	puts(name);
		 	cout<<endl;
		 	puts(n);
		 	cout<<endl;
		}
		void change()
		{ 
			char newinfo[200];
			gets(newinfo);
	 		strcpy(n,newinfo);
	 	}
};

//functions

void order()
{
	init:
	cout<<"Select Food Brand \n";
	cout<<"1. Burger King \n";
	cout<<"2. Taco Bell \n";
	cout<<"3. Dominos \n";
	cout<<"4. Pizza Hut \n";
	cout<<"5. KFC \n";
	cout<<"6. I Want To Go Local \n";
	int ch;
	cin>>ch;
	clrscr();
	switch(ch)
	{
		case 1:
			ShellExecute(NULL, "open", "http://bkdelivery.in/order-online/?utm_source=google&utm_medium=cpc&utm_campaign=aug&utm_term=bk20&utm_content=brand&gclid=Cj0KCQjw4eXPBRCtARIsADvOjY0h2hnajP7PrHqOZdcwsEIlpWf4swRLrMFaJqG_a-sfyKgwLrhhc7AaAgLhEALw_wcB",NULL, NULL, SW_SHOWNORMAL);
			break;
		case 2:
			ShellExecute(NULL, "open", "https://www.tacobell.com/delivery",NULL, NULL, SW_SHOWNORMAL);
			break;
		case 3:
			ShellExecute(NULL, "open", "https://pizzaonline.dominos.co.in",NULL, NULL, SW_SHOWNORMAL);
			break;
		case 4:
			ShellExecute(NULL, "open", "https://online.pizzahut.co.in",NULL, NULL, SW_SHOWNORMAL);
			break;
		case 5:
			ShellExecute(NULL, "open", "https://online.kfc.co.in",NULL, NULL, SW_SHOWNORMAL);
			break;
		case 6:
			clrscr();
			shard:
			cout<<"Which Service You Want To Use ? \n";
			cout<<"1. Swiggy \n";
			cout<<"2. Faasos  \n";
			cout<<"3. Zomato \n";
			cout<<"4. Food Panda \n";
			int k;
			cin>>k;
			switch(k)
			{
				case 1:
					ShellExecute(NULL, "open", "https://www.swiggy.com/delhi?utm_source=Google-Sok&utm_source=Google-Sok&utm_medium=CPC&utm_medium=CPC&utm_campaign=google_web_desktop_order_na_search_delhi_ncr_search_brand_newuser&utm_campaign=Google_Web_Desktop_Order_NA_Search_Brand_NewUser_DelhiNCR&gclid=Cj0KCQjw4eXPBRCtARIsADvOjY05xhv3M0d_Lx-RKnw9S3CBc2-c9r9uvvdUXyv-DABTtrqAM1DJ-DEaAhDmEALw_wcB",NULL, NULL, SW_SHOWNORMAL);
					break;
				case 2:
					ShellExecute(NULL, "open", "https://order.faasos.io",NULL, NULL, SW_SHOWNORMAL);
					break;
				case 3:
					ShellExecute(NULL, "open", "https://www.zomato.com/ncr/order-food-online?open=now&utm_source=Google&utm_campaign=SEM-Web-O2-Head-NCR_Exact&utm_medium=CPC&utm_term=Zomato&gclid=Cj0KCQjw4eXPBRCtARIsADvOjY2fJr_U6tQB-_GFzTjL_xLQQW1dyHKalSeexX2Hqc8FGCe0BDhbauAaAkKjEALw_wcB",NULL, NULL, SW_SHOWNORMAL);
					break;
				case 4:
					ShellExecute(NULL, "open", "https://www.foodpanda.in",NULL, NULL, SW_SHOWNORMAL);
					break;
				default:
					clrscr();
					cout<<"Invalid Keyword, Please Enter Again \n";
					goto shard;
				}
			break;
		default:
			clrscr();
			cout << "Invalid Keyword \n";
			goto init;
	}
}

void status()
{
	init:
	int a;
	cout<<"From which site did you used to make your order \n";
	cout<<"Select Food Brand \n";
	cout<<"1. Burger King \n";
	cout<<"2. Taco Bell \n";
	cout<<"3. Dominos \n";
	cout<<"4. Pizza Hut \n";
	cout<<"5. KFC \n";
	cout<<"6. I ordered local \n";
	cin>>a;
	switch(a)
	{
		case 1:
			ShellExecute(NULL, "open", "http://bkdelivery.in/order-online/?utm_source=google&utm_medium=cpc&utm_campaign=aug&utm_term=bk20&utm_content=brand&gclid=Cj0KCQjw4eXPBRCtARIsADvOjY0h2hnajP7PrHqOZdcwsEIlpWf4swRLrMFaJqG_a-sfyKgwLrhhc7AaAgLhEALw_wcB",NULL, NULL, SW_SHOWNORMAL);
			break;
		case 2:
			ShellExecute(NULL, "open", "https://www.tacobell.com/delivery",NULL, NULL, SW_SHOWNORMAL);
			break;
		case 3:
			ShellExecute(NULL, "open", "https://pizzaonline.dominos.co.in",NULL, NULL, SW_SHOWNORMAL);
			break;
		case 4:
			ShellExecute(NULL, "open", "https://online.pizzahut.co.in",NULL, NULL, SW_SHOWNORMAL);
			break;
		case 5:
			ShellExecute(NULL, "open", "https://online.kfc.co.in",NULL, NULL, SW_SHOWNORMAL);
			break;
		case 6:
			clrscr();
			shard:
			cout<<"Which Service did you used? \n";
			cout<<"1. Swiggy \n";
			cout<<"2. Faasos  \n";
			cout<<"3. Zomato \n";
			cout<<"4. Food Panda \n";
			int k;
			cin>>k;
			switch(k)
			{
				case 1:
					ShellExecute(NULL, "open", "https://www.swiggy.com/delhi?utm_source=Google-Sok&utm_source=Google-Sok&utm_medium=CPC&utm_medium=CPC&utm_campaign=google_web_desktop_order_na_search_delhi_ncr_search_brand_newuser&utm_campaign=Google_Web_Desktop_Order_NA_Search_Brand_NewUser_DelhiNCR&gclid=Cj0KCQjw4eXPBRCtARIsADvOjY05xhv3M0d_Lx-RKnw9S3CBc2-c9r9uvvdUXyv-DABTtrqAM1DJ-DEaAhDmEALw_wcB",NULL, NULL, SW_SHOWNORMAL);
					break;
				case 2:
					ShellExecute(NULL, "open", "https://order.faasos.io",NULL, NULL, SW_SHOWNORMAL);
					break;
				case 3:
					ShellExecute(NULL, "open", "https://www.zomato.com/ncr/order-food-online?open=now&utm_source=Google&utm_campaign=SEM-Web-O2-Head-NCR_Exact&utm_medium=CPC&utm_term=Zomato&gclid=Cj0KCQjw4eXPBRCtARIsADvOjY2fJr_U6tQB-_GFzTjL_xLQQW1dyHKalSeexX2Hqc8FGCe0BDhbauAaAkKjEALw_wcB",NULL, NULL, SW_SHOWNORMAL);
					break;
				case 4:
					ShellExecute(NULL, "open", "https://www.foodpanda.in",NULL, NULL, SW_SHOWNORMAL);
					break;
				default:
					clrscr();
					cout<<"Invalid Keyword, Please Enter Again \n";
					goto shard;
			}
			break;
		default:
			clrscr();
			cout<<"Invalid Keyword \n";
			goto init;
	}
}

void view_all()
{
	fstream file("REVIEW.dat", ios::binary|ios::in);
	rev a;
	cout<<endl;
	while(file.read((char*)&a, sizeof(a)))
	{
		a.disn();
	}
	file.close();
}

void view_rev()
{
	start:
	cout<<"You want to: \n1. View all the Reviews \n2.Some Specific Review\n";
	int a;
	cin>>a;
	if(a==1)
	{
		view_all();
	}
	else 
		if(a==2)
		{  
			char nm[30];
			fstream file("REVIEW.dat", ios::binary|ios::in);
			rev z;
			int check=0;
			cout<<"Enter the name of the person who's review you want to view!!\n";
			gets(nm);
			while(file.read((char*)&z, sizeof(z)))
			{			
				if(z.name_c(nm))
				{	
					z.display();
					check++;
				}
			}
			if(!check)
			{
				cout<<endl<<"The name you have entered doesn't match! Invalid input! \n";
				goto start;
			}
			file.close();
		}
}

void write_rev()
{
	fstream file1("REVIEW.dat",ios::binary|ios::out|ios::app);
	rev a;
	a.input();
	file1.write((char*)&a, sizeof(a));
	cout<<endl;
	file1.close();
}

//main function

void main()
{
	int ch;
	cout<<"Welcome to Victualiser! \n";
	start:
	cout<<"How can we help you? \n";
	cout<<"1. Order Food\n";
	cout<<"2. Delivery Status \n";
	cout<<"3. View Customer Reviews \n";
	cout<<"4. Write Review \n";
	cout<<"5. Exit \n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			order();
			break;
		case 2:
			status();
			break;
		case 3:
			view_rev();
			break;
		case 4:
			write_rev();
			break;
		case 5:
			exit(0);
			break;
		default:
			cout<<"Invalid Keyword, Please enter again \n";
			clrscr();
			goto start;
	}
	goto start;
}
