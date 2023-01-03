#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
#include<cstdlib>
#include<iomanip>
using namespace std;

int main(){
	
    int count =0;
    double sum = 0, sum2 = 0, mean, sd;
   
    ifstream source ;
	source.open("score.txt") ;
	
    string textline;
	while (getline(source,textline))
	{
        float input = atof(textline.c_str());
        sum += input;
        sum2 += pow(input, 2);
        count++;
    }
    mean= sum/count;
    sd= sqrt(sum2/count- mean*mean);

	cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;
    source.close();
    
	return 0;
}