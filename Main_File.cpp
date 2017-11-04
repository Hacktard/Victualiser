#include <iostream.h>
#include <fstream.h>
#include <stdio.h>
#include <process.h>
#include <conio.h>
#include <string.h>
#include <shellapi.h>

struct rev{
	char name[25];
	char review[200];
};

void order(){
   init:
   cout << "Select Food Brand \n";
   cout << "1. Burger King \n";
   cout << "2. Taco Bell \n";
   cout << "3. Dominos \n";
   cout << "4. Pizza Hut \n";
   cout <<  "5. KFC \n";
   cout << "6. I Want Go Local \n";
   int ch;
   cin >> ch;
   clrscr();
   switch(ch){
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
         	cout << "Which Service You Want To Use ? \n";
			cout << "1. Swiggy \n";
         	cout << "2. Faasos  \n";
         	cout << "3. Zomato \n";
			cout << "4. Food Panda \n";
         	int k;
         	cin >> k;
			switch(k){
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
               		cout << "Invalid Keyword, Please Enter Again \n";
					goto shard;
            }
				break;
      default:
			clrscr();
           	cout << "Invalid Keyword \n";
			goto init;
	}
}

void status(){
	//to be made;
}

void editrev(){
	fstream file1, file2; int count=0;
	file1.open("REVIEW.dat", ios::binary|ios::out);
	file2.open("TEMP.dat", ios::binary|ios::in);
	rev a, anew;
	cout<<"Enter your name \n";
	gets(anew.name);
	file1.read((char*)&a, sizeof(a));
	while(file1){
		if(strcmpi(anew.name,a.name)!=0)
			file2.write((char*)&a, sizeof(a));
		else
			count++;
		}
	if(!count){
		puts(anew.name);
		cout<<" did not match \n";
		}
	else{
		cout<<"Enter your new review \n";
		gets(anew.review);
		file2.write((char*)&anew, sizeof(anew));
		}
	remove("REVIEW.dat");
	rename("REVIEW.dat","TEMP.dat");
	file1.close();
	file2.close();
	
}

void view_rev(){
	fstream file("REVIEW.dat", ios::binary|ios::in);
	rev a,x; int check=0;
	cout<<"Enter the name of the person who's review you want to view!! \n";
	gets(x.name);
	file.read((char*)&a, sizeof(a));
	while(file){ 
		if(strcmpi(a.name,x.name)=0){ 
		cout<<a.name<<endl;
		cout<<a.review<<endl;
		}
		else check++;
	}
		if(!check)
			cout<<"sorry the name you have entered doesn't match \n";
		
	
	file.close();
}

void write_rev(){
	fstream file("REVIEW.dat",ios::binary|ios::app);
	rev x; 
	cout<<"Enter your name please!! \n";
	gets(x.name);
	cout<<"Enter your review \n";
	gets(x.review);
	file.write((char*)&x, sizeof(x));
	cout<<endl;
	file.close();
}

void main(){
	int ch;
	cout << "Welcome to Victualiser! \n";
	start:
	cout << "How can we help you? \n";
	cout << "1. Order Food\n";
   cout << "2. Delivery Status \n";
   cout << "3. View Customer Reviews \n";
	cout << "4. Write Review \n";
	cout << "5. Exit \n";
   cin >> ch;
	switch(ch){
      case 1: order(); break;
      case 2: status(); break;
		case 3: view_rev(); break;
      case 4: write_rev(); break;
		case 5:  exit(0); break;
      default : cout << "Invalid Keyword, Please enter again \n"; clrscr(); goto start;
	}
	goto start;
}
