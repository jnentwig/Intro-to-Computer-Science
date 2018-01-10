//Name: Julia Nentwig
//Date: 12/04/2017
//Homework # 14
//Problem # (Savitch problem 8-9)

//
#include <fstream>
#include <iostream>
#include <vector>

template <class T>
void swap(T& v0, T& v1);
void sortvector(std::vector<int> &a, int size);
void populatevector(std::vector<int> &a, std::ifstream& stream);
int main(){
	using namespace std;
    ifstream in_stream;
    ofstream out_stream;
    
    in_stream.open("input_enormous.txt");
    out_stream.open("output.txt");
    vector<int> a;
    populatevector(a, in_stream);
    int numberUsed = a.size();
    sortvector(a, numberUsed);
    //input values to out_stream
	for(int i = 0; i < numberUsed; i++){
    	out_stream << a[i] << '\n';
	}
	
    in_stream.close( );
    out_stream.close( );
    return 0;
}
void populatevector(std::vector<int> &a, std::ifstream& stream){
	for(int tmp; stream >> tmp; a.push_back(tmp));
}
void sortvector(std::vector<int> &a, int size){
	for (int i = 1; i < size; i++){
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

