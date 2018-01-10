//Names of students in group: Julia Nentwig
//Date: 11/8/2017
//Homework # 10
//Problem # (Savitch problem 6-1) 
#include <fstream>
#include <iostream>
#include <climits>

int main( )
{
    using namespace std;
    ifstream in_stream;
    ofstream out_stream;
    int largestNum = INT_MIN;
	int smallestNum = INT_MAX;
	
    in_stream.open("infile.dat");
    out_stream.open("outfile.dat");
	
	while(!in_stream.eof()){
		int val;
		in_stream >> val;
		if(val<=smallestNum)
			smallestNum = val;
		if(val>=largestNum)
			largestNum = val;	
	}
    
    cout << "The smallest number is:" << smallestNum << '\n'      
		<< "The largest number is:" << largestNum
		<< endl;
	out_stream << "The smallest number is:" << smallestNum << '\n'      
		<< "The largest number is:" << largestNum
		<< endl;
		
	in_stream.close( );
    out_stream.close( );
    
    return 0;
}
