#include <iostream>
using namespace std;
void univ()
{
cout<<"\n =============================================";
cout<<"\n |                                           |";
cout<<"\n |         ELECTRICAL ENGINEERING            |";
cout<<"\n |    UNIVERCITY TECNOLOGY OF YOGYAKARTA     |";
cout<<"\n |                                           |";
cout<<"\n =============================================";
cout<<endl<<endl;
}
  struct huruf
{
  double uts,uas,tugas,absen;
  string nama;
};

double masukan (string ipk){
    double nilai ;
    cout<<"   masukan nilai  "<<ipk<<"   :   ";cin>>nilai;
    return nilai ;
}
void grade (double nilai)
{
    if (nilai > 81)
        cout<<"  Nilai anda :  A ";
    else if (nilai > 61)
        cout<<"  Nilai anda :  B ";
    else if (nilai > 41)
        cout<<"  Nilai anda :  C ";
    else if (nilai > 21)
        cout<<"  Nilai anda :  D ";
    else
        cout<<"  Nilai anda :  E ";
    cout<<endl<<endl;
}
main (){
univ();
string nama,nim,prodi;
huruf nilai;
double nilakhir;

    cout<<"  Nama  : ";cin>>nama;
    cout<<"  NIM   : ";cin>>nim;
    cout<<"  Prodi : ";cin>>prodi;
    cout<<endl;
    nilai.uts   =  masukan ("UTS");
    nilai.uas   =  masukan ("UAS");
    nilai.tugas =  masukan ("TUGAS");
    nilai.absen =  masukan ("ABSEN");
    nilakhir    = (nilai.uts*20/100)+(nilai.uas*30/100)+(nilai.tugas*35/100)+(nilai.absen*15/100);
    cout<<endl;
    cout<<"  Nilai akhir anda : "<< nilakhir <<endl;
    grade(nilakhir);

}
