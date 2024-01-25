#include<iostream>
#include<fstream>
using namespace std;
class dat{
    string country;
   string city;
    public:
    void getdata(){
        ofstream fout;
        fout.open("country.txt");
        cout<<"Enter the name of country: "<<endl;
        cin>>country;
        // fout.write();
        fout<<country;
        fout.close();
        ofstream fout1;
         fout1.open("city.txt");
        cout<<"Enter the name of city: "<<endl;
        // city = new char(10);
        cin>>city;
        // fout1.write((char *)&city,sizeof(city));
        fout1<<city;
        fout1.close();    
    }
    void display(){
        ifstream fin;
        fin.open("country.txt");
        string s;
        while (getline(fin,s))
        {
            cout<<s<<endl;
        }
        ifstream fin1;
        fin1.open("city.txt");
        string s1;
        while (getline(fin1,s1))
        {
            cout<<s1<<endl;
        }
        
    }
};
int main()
{
    dat d;
    d.getdata();
    d.display();
    // d = new dat[10];
    // for (int i = 0; i < 10; i++)
    // {
    //     d[i].getdata();
    // }
    



 
 return 0;
}