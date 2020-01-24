#include<iostream>
using namespace std;
printO(int n,int m){
	if(n<=0 || m<=0)
	{
		cout<<"Invallid input";
		
	}
	else{
		for(int k=1;k<=n;k++){
		
			
	
		for(int i=1;i<=m;i++){
			cout<<"O";
			
		}
		cout<<"\n";
	}
}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
