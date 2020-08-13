#include<iostream>
using namespace std;
struct Stage{
	int hour;
	int minutes;
	int seconds;
}stages[3], *poinsStages = stages;
void askData();
void averageStages(Stage *);
int main(){
	askData();
	averageStages(poinsStages);
	return 0;
}
void askData(){
	for (int i = 0; i < 3; ++i){
		cout<<"Stage #"<<i+1<<endl;
		cout<<"Hours: ";
		cin>>(poinsStages+i)->hour;
		cout<<"Minutes: ";
		cin>>(poinsStages+i)->minutes;
		cout<<"Seconds: ";
		cin>>(poinsStages+i)->seconds;
	}
}
void averageStages(Stage *stage){
	int hour = 0, min = 0, sec = 0, day = 0;
	for (int i = 0; i < 3; ++i){
		hour += (stage+i)->hour;
		min += (stage+i)->minutes;
		sec += (stage+i)-> seconds;
	}
	if (sec > 60){
		min++;
		sec -= 60;
	}
	if (min > 60){
		hour++;
		min -= 60;
	}
	if (hour > 24){
		day ++;
		hour -= 24;
	}
	cout<<"Average Stages: "<<endl;
	cout<<"Day: "<<day<<endl;
	cout<<"Hours: "<<hour<<endl;
	cout<<"Minutes: "<<min<<endl;
	cout<<"Seconds: "<<sec<<endl;
}