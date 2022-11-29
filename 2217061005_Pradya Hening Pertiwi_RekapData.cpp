#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int fis[10],kim[10],mtk[10],bio[10];
	char nama[10][10];
	int bnykdata;
	float jumlah[10],jumlahFis,jumlahMtk,jumlahKim,jumlahBio;
	float rata[10];
	
	cout<<"Banyaknya Data : ";cin>>bnykdata;
	
	for(int i = 0; i< bnykdata; i++)
	{	cout<<"xxxxxxxxxxxxxxxxxxxxxx\n";
		cout<<"Data ke - "<<i+1 <<endl;
		cout<<"xxxxxxxxxxxxxxxxxxxxxx\n";
		cout<<"Nama\t\t :";cin>>nama[i];
		cout<<"Nilai Fisika\t : ";cin>>fis[i];
		cout<<"Nilai Matematika : ";cin>>mtk[i];
		cout<<"Nilai Kimia\t : ";cin>>kim[i];
		cout<<"Nilai Biologi\t : ";cin>>bio[i];
		cout<<endl;	
		jumlah[i] = fis[i] + mtk[i] + kim[i] + bio[i];
		rata[i] = jumlah[i]/4;
		
		
	}
	
	
	
	cout << setw(4) << "No" <<setw (15) << "Nama"
		 <<setw (15)<< "Fisika" <<setw(20)<< "Matematika"
		 <<setw(15)<< "Kimia" << setw(15)<<"Biologi"<<endl;
	
	for(int i = 0; i<bnykdata; i++){
		int no = i+ 1;
		cout << setw(4) << no << setw(15) << nama[i] << setw(13) << fis[i] 
			 << setw(18) << mtk[i] << setw(18) << kim[i] <<setw(14)<< bio[i]<<endl; 
	}
	
	cout << "\nRata - Rata Nilai Mahasiswa : " <<endl;
	for(int i=0; i<bnykdata; i++){
		cout<< nama[i] << "\t : " << rata[i] <<endl;
	}
	jumlahFis = 0;
	jumlahMtk = 0;
	jumlahKim = 0; 
	jumlahBio = 0;
	for (int i = 0; i < bnykdata ; i++){
		jumlahFis+=fis[i];
		jumlahMtk+=mtk[i];
		jumlahKim+=kim[i];
		jumlahBio+=bio[i];
	}
	cout<<"\nRata - Rata Mata Kuliah "<<endl;
	cout << "Fisika\t\t :"<<jumlahFis/bnykdata;
	cout<< "\nMatematika\t :"<<jumlahMtk/bnykdata;
	cout<< "\nKimia\t\t :"<<jumlahKim/bnykdata;
	cout<< "\nBiologi\t\t :"<<jumlahBio/bnykdata;
	
	return 0;
}

