#include <iostream>
#include <conio.h>
using namespace std;

int iniData[10];
int n;
    
int main()
{
	system("CLS");
  	cout<<"ALGORITMA BUBBLE SORT"<<endl;
  	cout<<"----------------------"<<endl;
	
	cout<<"Masukan Jumlah Data = ";
	cin>>n;
	cout<<endl;
    
    for (int i=0;i<n;i++){
    	cout<<"Masukan Data Ke-"<<i+1<<" = ";
    	cin>>iniData[i];
	}
	cout<<endl;

	cout<<"Proses Bubble Sort"<<endl;
	for (int i=0;i<n;i++){
	    cout<<"["<<iniData[i]<<"] ";
	}
	cout<<endl;
	for (int i=1; i<n;i++){
		for (int j=n-1; j>=i;j--){
			if (iniData[j]<iniData[j-1]){
				//tukar(j,j-1);
				int t;
			    t=iniData[j-1];
			    iniData[j-1]=iniData[j];
			    iniData[j]=t;
			}
		}
		for (int k=0;k<n;k++){
	    cout<<"["<<iniData[k]<<"] ";
	}
	cout<<endl;
	}
	cout<<endl;	
 	return 0;
}