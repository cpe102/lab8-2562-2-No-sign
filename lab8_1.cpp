#include<iostream>
#include<iomanip> 
using namespace std;
float lo,inr,ppy,nb,pb,in,tot;
int n=1;
int main(){	
	cout<<"Enter initial loan:";
	cin>>lo;
	cout<<"Enter interest rate per year:";
	cin>>inr;
	cout<<"Enter amount you can pay per year:";
	cin>>ppy;
	nb=lo;
	pb=lo;cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	while(nb!=0){
	
	
	
	
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << n; 
	pb=nb;
	cout << setw(13) << left << pb;
	in=pb*inr/100;
	cout << setw(13) << left << in;
	tot=pb+in;
	cout << setw(13) << left << tot;
if(tot<=ppy){
		ppy=tot;
	}	
	cout << setw(13) << left << ppy;
	nb=tot-ppy;
	cout << setw(13) << left << nb;
	cout << "\n";
	n++;	
}
	return 0;
}
