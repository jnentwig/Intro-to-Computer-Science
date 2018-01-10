//can calculate either temperature, pressure, or volume according to ideal gas law, units do not matter
#include<iostream>
using namespace std;
void findTemp(double num, double& finalPres, double& finalVol, double& finalTemp);
void findVol(double num, double& finalPres, double& finalVol, double& finalTemp);
void findPres(double num,double& finalPres, double& finalVol, double& finalTemp);
int main() {
	double pi, vi, ti, num;
	double finalTemp, finalVol, finalPres;
	cout << "What is the initial pressure?\n";
	cin >> pi;
	cout << "What is the initial volume?\n";
	cin >> vi;
	cout << "What is the initial temperature?\n";
	cin >> ti;
	num = (pi*vi)/ti;
	
	char find;
	cout << "Would you like to find Temperature, Pressure, or Volume?\n";
	cin >> find;
	switch(find){
		case 'T':
			findTemp(num, finalPres, finalVol, finalTemp);
			break;
		case 'V':
			findVol(num, finalPres, finalVol, finalTemp);
			break;
		case 'P':
			findPres(num, finalPres, finalVol, finalTemp);
			break;	
		default:
			cout <<	"Not Valid";
	}
	cout << "The final temperature is " << finalTemp << '\n'
		<< "The final volume is " << finalVol << '\n'
		<< "The final pressure is " << finalPres << endl;
		return 0;
}
void findTemp(double num, double& finalPres, double& finalVol, double& finalTemp){
	cout << "What is the final Volume?\n";
	cin >> finalVol;
	cout << "What is the final Pressure?\n";
	cin >> finalPres;
	finalTemp = (finalPres*finalVol)/num;
}
void findVol(double num, double& finalPres, double& finalVol, double& finalTemp){
	cout << "What is the final Temperature?\n";
	cin >> finalTemp;
	cout << "What is the final Pressure?\n";
	cin >> finalPres;
	finalVol = (finalTemp * num)/finalPres;
}
void findPres(double num,double& finalPres, double& finalVol, double& finalTemp){
	cout << "What is the final Temperature?\n";
	cin >> finalTemp;
	cout << "What is the final Volume?\n";
	cin >> finalVol;
	finalPres = (finalTemp * num)/finalVol;
}
