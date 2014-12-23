#include <iostream>
#include <cmath>
using namespace std;

float BMI(float height, float weight)
{
cout<<"Please enter your height in inches: ";
cin>>height;
cout<<"Please enter your weight in pounds: ";
cin>>weight;

float bmi;
bmi=((weight/(height*height))*703);

return bmi;
}

void healthy(float bmi)
{
if(bmi<18.5)
	cout<<"Your Body Mass Index is "<<bmi<<" and according to cdc.gov, you are underweight"<<endl;

else if((bmi>18.5)&&(bmi<24.9))
	cout<<"Your Body Mass Index is "<<bmi<<" and according to cdc.gov, this is a normal weight."<<endl;

else if((bmi>25)&&(bmi<29.9))
	cout<<"Your Body Mass Index is "<<bmi<<" and according to cdc.gov, this is considered overweight. Please see a health counselor or fitness trainer to discuss your options."<<endl;

else
	cout<<"Your Body Mass Index is "<<bmi<<" and according to cdc.gov, this is considered Obese. Please see a health counselor or fitness trainer to discuss your options."<<endl;

return;
}

int main()
{
float height;
float weight;
float index;

index = BMI(height, weight);
healthy(index);

return 0;
}
