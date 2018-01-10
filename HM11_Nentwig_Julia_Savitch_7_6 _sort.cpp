//Name: Julia Nentwig
//Date: 11/13/2017
//Homework # 11
//Problem # (Savitch problem 7-6) 
#include <fstream>
#include <iostream>
const int MAX_NUMBER = 240000;
template <class T>
void swap(T& v0, T& v1);
void sortarray(int a[], int numberUsed);
void populatearray(int a[], int& numberUsed, std::ifstream& stream);
int main(){
	using namespace std;
    ifstream in_stream;
    ofstream out_stream;
    
    in_stream.open("infile.dat");//
    out_stream.open("outfile.dat");
    int numberUsed, a[MAX_NUMBER];//
	populatearray(a, numberUsed, in_stream);
    sortarray(a, numberUsed);
    //input values to out_stream
	for(int i = 0; i < numberUsed; i++){
    	out_stream << a[i] << '\n';
	}
	
    in_stream.close( );
    out_stream.close( );
    return 0;
}
void populatearray(int a[], int& numberUsed, std::ifstream& stream){
	for(numberUsed = 0; stream >> a[numberUsed]; numberUsed++);
}
void sortarray(int a[], int numberUsed){
	for (int i = 1; i < numberUsed; i++){
		int hold = a[i], j;
		for(j = i-1; a[j]>hold && j >= 0; j--){
			a[j+1]=a[j];
		}
		a[j+1] = hold;
	}
}
template <class T>
void swap(T& v0, T& v1)
{
	T temp = v0;
	v0 = v1;
	v1 = temp;
}
