/*Question1:  Enter  cost of 3 items from the user (using float data type)-a pencil,a pen and an eraser.You have to output the total cost of the items back to the user as their bill.
(Addional:You can also try adding 18 %GST tax to the items in the bill as an advanced problem)*/

#include <iostream>
using namespace std;

int main (){
	float pencil,pen,eraser;
	
	cout<<" Price of Pencil:";
	cin>>pencil;
	
	cout<<" Price of Pen:";
	cin>>pen;
	
	cout<<" price of Eraser:";
	cin>>eraser;
	
   float total_cost= pencil+pen+eraser;
	cout<<"Total Cost of item with adding 18% of GST is:"<<(total_cost+(0.18*total_cost))<<"rs"<<endl;
	
   return 0;
}

// output:
// Price of Pencil:10
//  Price of Pen:12
//  price of Eraser:5
// Total Cost of item with adding 18% of GST is:31.86rs