#include <iostream.h>
#include <fstream.h>
#include <stdio.h>
#include <process.h>
#include <conio.h>
#include <shellapi.h>

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

}

void view_rev(){

}

void write_rev(){

}

void main(){
	cout << "Welcome to Victualiser! \n";
   start:
	cout << "How can we help you? \n";
	cout << "1. Order Food\n";
	cout << "2. Delivery Status \n";
	cout << "3. View Customer Reviews \n";
	cout << "4. Write Review \n";
	cout << "5. Exit \n";
	int ch;
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
