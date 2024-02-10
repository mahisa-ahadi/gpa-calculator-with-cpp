// you can calculate your gpa with entering your letter grades and the credit of your courses

#include<iostream>
using namespace std;
float gpa(int num ,float point[], int credit[])
{
	float total[num],sum=0.00,sumC=0.00;
	for(int i=0;i<num;i++)
	{
		total[i]=point[i]*credit[i];
		sum+=total[i];
		sumC+=credit[i];
	}
	return sum/sumC;
}
int main(void)
{
	int num;
	cout<<"How many courses do you have?: ";
	cin>>num;
	string grade[num];
	int credit[num];
	float point[num];
	float total[num];
	for(int i=0;i<num;i++)
	{
		cout<<"enter the grade of your course "<<i+1<<" : ";
		cin>>grade[i];
		cout<<"enter the credit of your course "<<i+1<<" : ";
		cin>>credit[i];
		if(grade[i]=="A"||grade[i]=="a")
		point [i]=4.00;
		if(grade[i]=="A-"||grade[i]=="a-")
		point [i]=3.67;
		if(grade[i]=="B+"||grade[i]=="b+")
		point [i]=3.33;
		if(grade[i]=="B"||grade[i]=="b")
		point [i]=3.00;
		if(grade[i]=="B-"||grade[i]=="b-")
		point [i]=2.67;
		if(grade[i]=="C+"||grade[i]=="c+")
		point [i]=2.33;
		if(grade[i]=="C"||grade[i]=="c")
		point [i]=2.00;
		if(grade[i]=="D"||grade[i]=="d")
		point [i]=1.00;
		if(grade[i]=="F"||grade[i]=="f")
		point [i]=0.00;
	}
	cout<<"your gpa is "<<gpa(num,point,credit);
	return 0;
}