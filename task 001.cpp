#include<iostream>
using namespace std;
int vv=0;

struct pp
{
    int nice;
    string namee;
    string fathersnamee;
    int agee;
    string addresse;
    string provincee;

} az[10];

void open();
void addvoter();
void findbyname();

class person
{
public:
    int ni;
    string na;
    string fa;
    int ag;
    string ad;
    string pr;
    void displaylist()
    {
        cout<<"NIC NO  "<<ni<<endl;
        cout<<"NAME    "<<na<<endl;
        cout<<"FA NAME "<<fa<<endl;
        cout<<"AGE     "<<ag<<endl;
        cout<<"ADDRESS "<<ad<<endl;
        cout<<"PRO     "<<pr<<endl;
        cout<<endl;

    }
    void input(int nn,string NAME,string FATHERNAME,int AGE,string add,string pro)
    {
        ni=nn;
        na=NAME;
        fa=FATHERNAME;
        ag=AGE;
        ad=add;
        pr=pro;
        displaylist();
    }


};


int main()
{
    int n;
    cout << "1.ADD NEW VOTER"<<endl;
    cout << "2.DISPLAY LIST OF ALL VOTER"<<endl;
    cout << "3.FIND A VOTER BY NAME "<<endl;
    cout << "4.EXIT "<<endl;
    cout<<"your choice ";
    cin>>n;
    switch(n)
    {
    case 1:
        addvoter();
        break;
    case 2:
        open();
        break;
    case 3:
        findbyname();
        break;
    case 4:
        exit(1);
        break;
    default:

        break;
    }
}

void addvoter()
{
    vv++;

        cout<<"1.NIC CARD NO  : = ";
        cin>>az[vv].nice;
        cout<<"2.NAME         : = ";
        cin>>az[vv].namee;
        cout<<"3.FATHERS NAME : = ";
        cin>>az[vv].fathersnamee;
        cout<<"4.AGE          : = ";
        cin>>az[vv].agee;
        cout<<"5.ADDRESS      : = ";
        cin>>az[vv].addresse;
        cout<<"6.PROVINCE     : = ";
        cin>>az[vv].provincee;
        main();
};
void open()
{
    person person1;

    for(int i=1; i<=vv; i++)
    {
        person1.input(az[i].nice,az[i].namee,az[i].fathersnamee,az[i].agee,az[i].addresse,az[i].provincee);
    }
    main();

};

void findbyname()
{
    person person1;
    string xm;
    cout<<"enter name ";
    cin>>xm;
    for(int i=1;i<=vv;i++)
        {
        if(az[i].namee==xm)
        {
            person1.input(az[i].nice,az[i].namee,az[i].fathersnamee,az[i].agee,az[i].addresse,az[i].provincee);
        }

    }
main();
};

