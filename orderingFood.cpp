#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char name[30];
	char sand1[]="Cheese veggie sandwich",
		 sand2[]="Salmon & cheese sandwich",
		 sand3[]="Chicken Caesar Sandwich";
	char chicken1[]="(Quebec homemade) Quiche",
		 chicken2[]="Bagel with Cream Cheese",
		 chicken3[]="(East Village Chicken) Pie";
	char beverage1[]="Coffee",
		 beverage2[]="Green Tea",
		 beverage3[]="Hot Chocolate",
		 beverage4[]="Milk",
		 beverage5[]="juice" ;
	int choice,quantity,price;
	static int sum;
    string item_code;
	char temp_item_code,n;
	system("CLS"); //for clearing the screen
cout<<"\t\tWELCOME to the 7-23 Cafe\t\n\n";

cout<<".............................................................................."<<endl;

	cout<<"Please Enter Your Name: ";
		cin.getline(name, 40);
	cout<<"Hello "<<name<<"\n\nWhat would you like to order ?\n\n";

	start:


	cout<<"\t\t\t\t--------Menu--------\n\n";

	cout<<"1) Sandwiches\n";
	cout<<"2) chicken\n";
	cout<<"3) Beverages\n";
	cout<<"4) Set meals\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)

	 {

	 	cout<<"\n ....................MENU ITEMS......................\n\n"<<
    " Itemcode \t\tName                          \tPrice"
     <<"\n A1 \t\tCheese and Veggie sandwich	  \t$30 \n"
     <<"\n A2 \t\tSalmon & cheese sandwich	  \t$34 \n"
	 <<"\n A3 \t\tChicken Caesar Sandwich	          \t$32 \n\n\n";

	 	cout<<"\nPlease Enter the item code: ";
		cin>>item_code;
		temp_item_code=item_code[1];
		switch(temp_item_code){
			case '1':
				cout<<"\1) "<<sand1<<"\n";
				break;
			case '2':
				cout<<"2) "<<sand2<<"\n";
				break;
			case '3':
				cout<<"3) "<<sand3<<"\n";
				break;
			default:
				cout<<"You did not enter a valid choice... Please re-enter.";
				break;
		}

			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(temp_item_code)
			{
			case '1': price = 30*quantity;
			break;

			case '2': price = 34*quantity;
			break;

			case '3': price = 32*quantity;
			break;


			}

			sum=sum + price;
			system("CLS");
			switch (temp_item_code)
			{
			 case '1':
			 cout<<"\t\t\t--------Your Order details---------\n\n";
			 cout<<""<<quantity<<" "<<sand1;
			 cout<<"\nYour Total Bill is $"<<sum<<"\n\n\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From 7-23 Cafe \n\n";
			 break;
			 case '2':
			 cout<<"\t\t--------Your Order Details---------\n";
			 cout<<""<<quantity<<"  "<<sand2;
			 cout<<"\nYour Total Bill is $"<<sum<<"\n\n\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From 7-23 Cafe \n\n";
			 break;
			 case '3':
			 cout<<"\t\t--------Your Order Details---------\n\n\n";
			 cout<<""<<quantity<<" "<<sand3;
			 cout<<"\nYour Total Bill is $"<<sum<<"\n\n\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From 7-23 Cafe \n\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>n;
			if(n=='Y' || n=='y')
			{
			  goto start;

			}



		}

else if(choice==2)

	 {

	 	cout<<"\n ....................MENU ITEMS......................\n\n"<<
    " Itemcode \t\tName                          \tPrice"
     <<"\n B1 \t\t(Quebec homemade) Quiche           \t$28 \n"
     <<"\n B2 \t\tBagel with Cream Cheese	           \t$20 \n"
	 <<"\n B3 \t\t(East Village Chicken) Pie          \t$28 \n\n\n";

	 	cout<<"\nPlease Enter the item code: ";
		cin>>item_code;
		temp_item_code=item_code[1];
		switch(temp_item_code){
			case '1':
				cout<<"\1) "<<chicken1<<"\n";
				break;
			case '2':
				cout<<"2) "<<chicken2<<"\n";
				break;
			case '3':
				cout<<"3) "<<chicken3<<"\n";
				break;
			default:
				cout<<"you didn't enter a valid choice...please re-enter.";
		}

			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(temp_item_code)
			{
			case '1': price = 28*quantity;
			break;

			case '2': price = 20*quantity;
			break;

			case '3': price = 28*quantity;
			break;


			}

			sum+=price;
			 system("CLS");
			switch (temp_item_code)
			{
			 case '1':
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<chicken1;
			 cout<<"\nYour Total Bill is:$"<<sum<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From 7-23 Café \n";
			 break;
			 case '2':
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<chicken2;
			 cout<<"\nYour Total Bill is: $"<<sum<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From 7-23 Café\n";
			 break;
			 case '3':
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<chicken3;
			 cout<<"\nYour Total Bill is: $"<<sum<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From 7-23 Café\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>n;
			if(n=='Y' || n=='y')
			{
			  goto start;

			}



		}



else if(choice==3)

	 {

	 	cout<<"\n ....................MENU ITEMS......................\n\n"<<
    " Itemcode \tName                 \t\tPrice"
     <<"\n C1 \t\tCoffee   \t \t\t$36 \n"
     <<"\n C2 \t\tGreen Tea	\t\t$28 \n"
     <<"\n C3 \t\tHot Chocolate\t\t\t$28 \n"
     <<"\n C4 \t\tMilk	\t\t\t$26 \n"
	 <<"\n C5 \t\tJuice   \t\t        $26 \n\n\n";
	 	cout<<"\nPlease Enter the item code: ";
		cin>>item_code;
		temp_item_code=item_code[1];
		switch(temp_item_code){
			case '1':
				cout<<"\1) "<<beverage1<<"\n";
				break;
			case '2':
				cout<<"2) "<<beverage2<<"\n";
				break;
			case '3':
				cout<<"3) "<<beverage3<<"\n";
				break;
			case '4':
				cout<<"4) "<<beverage4<<"\n";
				break;
			case '5':
				cout<<"5) "<<beverage5<<"\n";
				break;
			default:
				cout<<"You did not enter a valid choice...please re-enter.";
		}

			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(temp_item_code)
			{
			case '1': price = 36*quantity;
			break;

			case '2': price = 28*quantity;
			break;

			case '3': price = 28*quantity;
			break;

			case '4': price = 26*quantity;
			break;

			case '5': price = 26*quantity;
			break;


			}
			
			sum+=price;
			 system("CLS");
			switch (temp_item_code)
			{
			 case '1':
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<beverage1;
			 cout<<"\nYour Total Bill is:$"<<sum<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From 7-23 Café \n";
			 break;
			 case '2':
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<beverage2;
			 cout<<"\nYour Total Bill is: $"<<sum<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From 7-23 Café\n";
			 break;
			 case '3':
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<beverage3;
			 cout<<"\nYour Total Bill is: $"<<sum<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From 7-23 Café\n";
			 break;
			  case '4':
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<beverage4;
			 cout<<"\nYour Total Bill is: $"<<sum<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From 7-23 Café\n";
			 break;
			  case '5':
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<beverage5;
			 cout<<"\nYour Total Bill is: $"<<sum<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From 7-23 Café\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>n;
			if(n=='Y' || n=='y')
			{
			  goto start;

			}



		}
else{

	cout<<"\n ....................MENU ITEMS......................\n\n"<<
    " Itemcode \tName \t\tSet Includes                          \t\t\tPrice"
     <<"\n S1 \tRefreshing Breakfast\tCoffee+Bagel with cream cheese \t\t\t\t$48 \n"
     <<"\n S2 \tBest Value Breakfast\tMilk+Chicken Caesar Sandwich+Bagel with Cream Cheese\t$60 \n"
	 <<"\n S3 \tVeggie Lunch\t\tJuice+Cheese veggie sandwich         \t\t\t$50 \n"
	 <<"\n S4 \tPower Lunch\t\tJuice+Coffee+Salmon & cheese sandwich+Pie    \t\t$90 \n"
	 <<"\n S5 \tAfternoon Tea Set\tCoffee or Tea+Quiche or Pie  \t\t\t\t$50\n\n\n";
}

	 }
