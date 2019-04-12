#include<iostream>

using namespace std;

double input (string text){
    double nilai ;
    cout<<"input nilai "<<text<<" : ";cin>>nilai;
    return nilai;
}

void grade(double nilai){

if(nilai>81)
    cout<<"NILAI ANDA : A";

else if (nilai>61)
    cout<<"NILAI ANDA : B";

else if (nilai>41)
    cout<<"NILAI ANDA : C";

else if(nilai>21)
    cout<<"NILAI ANDA : D";

else cout<<"NILAI ANDA : E";

}
struct nilai {
    double uts, uas, tugas, absen,total;};
main(){

nilai hs;

hs.uts = input("UTS");
hs.uas = input("UAS");
hs.tugas = input("TUGAS");
hs.absen = input("ABSEN");

hs.total=(hs.uts*0.2)+(hs.uas*0.3)+(hs.tugas*0.35)+(hs.absen*0.15);
cout<<"Hasil Keseluruhan nilai : "<<hs.total<<endl;
grade(hs.total);

}
