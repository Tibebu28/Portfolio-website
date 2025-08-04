#include <iostream>

using namespace std;

int main(){
	
	double wet;
	double het;
	double bmi = wet / (het * het) ;
	
	cout<<"Entery your weight"<<endl;
	cin>>wet;
	
	cout<<"Enter your height"<<endl;
	cin>>het;
	
	if(bmi < 18.5) {
		cout<<endl<<"Underweight"<<endl;
	}
	
	else if(bmi>18.5 && bmi<24.9){
		cout<<endl<<"Normal"<<endl;
	}
	
	else if(bmi>25 && bmi<29.9){
		cout<<endl<<"Overweihgt"<<endl;
	}
	
		else if(bmi>30){
		cout<<endl<<"Obese"<<endl;
	}
	
	else {
		cout<<endl<<"Invalid Input"<<endl;
	}
	
	
	 
	return 0;
}