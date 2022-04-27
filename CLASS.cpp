//DWI CAHYO NUGROHO 2100018405
//QONITA AULYA 2100018407
//LIFA 2100018404
#include<iostream>
using namespace std;
class data{
public:
	void input();
	void proses();
	void output();
	
	private:
		string dosen;
		string matkul;
		int bnyk_nil;
		int nilai[100];
		int max;
		int min;
		int jumlah;
		float rata;
};
void data::input(){
	cout<<"Nama dosen= ";getline(cin,dosen);
	cout<<"Nama Matkul= ";getline(cin,matkul);
	cout<<"Banyak Nilai= ";cin>>bnyk_nil;
	nilai[bnyk_nil];
	for(int i=0;i<bnyk_nil;i++){
		cout<<"Masukan Nilai ["<<i+1<<"]= ";
		cin>>nilai[i];
	}
	jumlah=0;
}
void data::proses(){
	for(int i=0;i<bnyk_nil;i++){
		if(nilai[i]>max)
		max=nilai[i];
	}
	for(int j=0;j<bnyk_nil;j++){
		if(nilai[j]<min)
			min=nilai[j];
	}
	for(int i=0;i<bnyk_nil;i++){
		jumlah+=nilai[i];
	}
	rata=jumlah/bnyk_nil;
}
void data::output(){
	cout<<"Nama Dosen : "<<dosen;
	cout<<"\nNama Matkul : "<<matkul;
	cout<<"Nilai : \n";
	for(int i=0;i<bnyk_nil;i++){
		cout<<"Nilai ["<<i+1<<"] : "<<nilai[i];
		cout<<endl;
	}
	cout<<"Nilai Max = "<<max;
	cout<<"Nilai MIN = "<<min;
	cout<<"Nilai Rata = "<<rata;
}
int main(){
	data run;
	run.input();
	cout<<endl;
	run.proses();
	cout<<endl;
	run.output();
	}
