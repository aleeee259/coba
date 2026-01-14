#include <iostream>
using namespace std;

int main() {
    int suara[3]={0}, p;
    string nama[3]={"Ale","Momon","Ika"};

    do{
        cout<<"1.Ale 2.Momon 3.Ika 0.Selesai : ";
        cin>>p;
        if(p>=1 && p<=3) suara[p-1]++;
    }while(p!=0);

    int win=0;
    for(int i=1;i<3;i++)
        if(suara[i]>suara[win]) win=i;

    cout<<"\nHasil Voting:\n";
    for(int i=0;i<3;i++)
        cout<<nama[i]<<" : "<<suara[i]<<" suara\n";

    cout<<"Pemenang: "<<nama[win]<<endl;
    return 0;
}