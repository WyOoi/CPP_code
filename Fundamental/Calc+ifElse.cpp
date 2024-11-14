#include<iostream>
using namespace std;

int main(){
	
	float height;
	float weight;
	
	cout << "Enter your height (m): ";
	cin >> height;
	cout << "Enter your weight (Kg): ";
	cin >> weight;
	
	float BMI =0.00;
	BMI = weight/( height*height);
	cout << BMI << endl ;
	
	if (BMI>40.00){
		cout << "Obesity Class III";
	}else if (BMI>=35.00 && BMI <=39.9){
		cout << "Obesity Class II";
	}else if (BMI>=30.00 && BMI <=34.9){
		cout << "Obesity Class II";
	}else if (BMI>=25.00 && BMI <=29.9){
		cout << "Overweight";
	}else if (BMI>=18.50 && BMI <=24.9){
		cout << "Normal weight";
	}else{
		cout << "Underweight";
	}
	return 0;
}
