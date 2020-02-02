#include <iostream>
#include <stdlib.h>
#include <vector>
#include "Participant.h"
#include "Roman.h"
#include "Francez.h"
#include "German.h"
using namespace std;

 void Meniu()
{
        system("CLS");
        cout<<"Alegeti optiunea dorita:"<<endl;
        cout<<"1. Adaugare participant"<<endl;
        cout<<"2. Afisare sumar"<<endl;
        cout<<"3. Iesire"<<endl;
}
    Participant* CreeazaParticipant()
{
    system("CLS");
    cout<<"Alegeti nationalitatea:"<<endl;
    cout<<"0. Roman"<<endl;
    cout<<"1. Francez"<<endl;
    cout<<"2. German"<<endl;
    cout<<"3. Alta"<<endl;
    cout<<"Introduceti nationalitatea:"<<endl;
    unsigned short a;
    cin>>a;
    switch (a)
    {
        case 0:{Participant* concurent=new Roman();return concurent; break;}
        case 1:{Participant* concurent=new Francez();return concurent; break;}
        case 2:{Participant* concurent=new German();return concurent; break;}
        case 3:{Participant* concurent=new Participant();return concurent; break;}

    }

}
int main()
{

    vector <Participant*> pntParticipanti;
        Meniu();
        cout<<"Introduceti:"<<endl;
            unsigned short b;
            cin>>b;
                //if((b<1)&&(b>3))
                //{
                  //  cout<<"Reintroduceti optiunea:"<<endl;
                   // cin>>b;
                //}
                while((b!=1)&&(b!=2)&&(b!=3))
                {
                    cout<<"Introduceti din nou: "<<endl;
                    cin>>b;
                }
                    unsigned short roman=0,francez=0,german=0,alta=0;
                while(b!=3)
                {
        if (b!=0&&b<=2)
        {
            if(b==1){;pntParticipanti.push_back(CreeazaParticipant());}
                else if (b==2)//aici e greseala
                {system("CLS");
                for(unsigned int idx=0; idx<pntParticipanti.size();++idx)
                    switch (pntParticipanti[idx]->Vorbeste())
                    {
                    case 0: roman++;break;
                    case 1: german++;break;
                    case 2: francez++;break;
                    case 3: alta++;break;
                    }
                    if (roman>0||german>0||francez>0||alta>0) cout<<"Participanti inscrisi pana acum: "<<endl;
                         if (roman>0||german>0||francez>0||alta>0) {cout<<roman<<" Romani"<<endl;
                                                              cout<<german<<" Germani"<<endl;
                                                              cout<<francez<<" Francezi"<<endl;
                                                              cout<<alta<<" Altii"<<endl;}
                        system("pause");
                }
            system("CLS");
            Meniu();
            cout<<"Introduceti"<<endl;
             cin>>b;
        }}
        pntParticipanti.clear();
    return 0;
}
