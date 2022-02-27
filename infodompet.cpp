#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>

using namespace std;

void database(){
    string danakebutuhan, danainvestasi, danakenakalan;
    //create and openfile
    ofstream dompet("Dompet.txt");
    //write
        dompet<<"+----------------------------------------------------------------+"<<endl;
        dompet<<"|                      WELCOME TO YOUR WALLET                    |"<<endl;
        dompet<<"+----------------------------------------------------------------+"<<endl;
        dompet<<"|      1. Total Kebutuhan        =    Jumlah Sisa Kebutuhan      |"<<endl;
        dompet<<"|      2. Total Investasi        =    Jumlah Dana Investasi      |"<<endl;
        dompet<<"|      3. Total Kenakalan        =    Jumlah Dana Kenakalan      |"<<endl;
        dompet<<"+----------------------------------------------------------------+"<<endl;
    //filesumber
    ifstream file_danakebutuhan;
    ifstream file_danainvestasi;
    ifstream file_danakenakalan;
    //operasi input
    while(file_danakebutuhan.open("Kebutuhan.txt")){
        getline(file_danakebutuhan, danakebutuhan);
        cout<<"Total Dana Kebutuhan: "<<danakebutuhan;
    }
    while(file_danainvestasi.open("Investasi.txt")){
        getline(file_danainvestasi, danainvestasi);
        cout<<"Total Dana Investasi: "<<danainvestasi;
    }
    while(file_danakenakalan.open("Kenakalan.txt")){
        getline(file_danakenakalan, danakenakalan);
        cout<<"Total Dana Kenakalan: "<<danakenakalan;
    }
    //closefile
    dompet.close();
    file_danakebutuhan.close();
    file_danainvestasi.close();
    file_danakenakalan.close();

    return 0;
}

void split(){
    long int income, investasi, kenakalan, kebutuhan;
    
    cout<<"+--------------------------------------------------------------------+"<<endl;
    cout<<"|                       SPLITTING DANA INCOME                        |"<<endl;
    cout<<"+--------------------------------------------------------------------+"<<endl;
    cout<<"|                      (20%) Dana Investasi                          |"<<endl;
    cout<<"|                      (30%) Dana Kenakalan                          |"<<endl;
    cout<<"|                      (50%) Dana Kebutuhan                          |"<<endl;
    cout<<"+--------------------------------------------------------------------+"<<endl;
    gecth();
    system("cls");
    cout<<"                        DANA MASUK/TOTAL : Rp ";
    cin>>income;

    investasi=0.2*income;
    kenakalan=0.3*income;
    kebutuhan=0.5*income;

    cout<<"Dana Investasi: Rp "<<investasi<<endl;
    cout<<"Dana Kenakalan: Rp "<<kenakalan<<endl;
    cout<<"Dana Kebutuhan: Rp "<<kebutuhan<<endl;

    //createfile
    ofstream file_danakebutuhan("Kebutuhan.txt");
    file_danakebutuhan<<"Dana Kebutuhan: "<<kebutuhan<<endl;
    ofstream file_danainvestasi("Investasi.txt");
    file_danainvestasi<<"Dana Investasi: "<<investasi<<endl;
    ofstream file_danakenakalan("Kenakalan.txt");
    file_danakenakalan<<"Dana Kenakalan: "<<kenakalan<<endl;
    //closefile
    file_danakebutuhan.close();
    file_danainvestasi.close();
    file_danakenakalan.close();
}

void totalkebutuhan(){
    long int income, investasi, kenakalan, kebutuhan;
    string kebutuhan_total;
    string danakebutuhan, danainvestasi, danakenakalan;
    
    kebutuhan=kebutuhan_total;
    kebutuhan_total=kebutuhan+kebutuhan;

    file_danakebutuhan.open("Kebutuhan.txt");
    ifstream file_danakebutuhan;
    while(file_danakebutuhan.open("Kebutuhan.txt")){
        getline(file_danakebutuhan, kebutuhan_total);
        cout<<"Total Dana Kebutuhan: "<<kebutuhan_total;
    }
}

void totalinvestasi(){
    long int income, investasi, kenakalan, kebutuhan;
    string investasi_total;
    string danakebutuhan, danainvestasi, danakenakalan;
    
    investasi=investasi_total;
    investasi_total=investasi+investasi;

    file_danainvestasi.open("Investasi.txt");
    ifstream file_danainvestasi;
    while(file_danainvestasi.open("Investasi.txt")){
        getline(file_danainvestasi, investasi_total);
        cout<<"Total Dana Investasi: "<<investasi_total;
    }
}

void totalkenakalan(){
    long int income, investasi, kenakalan, kebutuhan;
    string kenakalan_total;
    string danakebutuhan, danainvestasi, danakenakalan;
    
    kenakalan=kenakalan_total;
    kenakalan_total=kenakalan+kenakalan;

    file_danakenakalan.open("Kenakalan.txt");
    ifstream file_danakenakalan;
    while(file_danakenakalan.open("Kenakalan.txt")){
        getline(file_danakenakalan, kenakalan_total);
        cout<<"Total Dana Kenakalan: "<<kenakalan_total;
    }
}

int main(){
    char action;
    do{
        system("cls");
        cout<<"+----------------------------------------------------------------+"<<endl;
        cout<<"|                             TUJUAN                             |"<<endl;
        cout<<"+----------------------------------------------------------------+"<<endl;
        cout<<"|      1. Total Dana Tabungan    |    Jumlah Sisa Dana           |"<<endl;
        cout<<"|      2. Total Investasi        |    Jumlah Dana Investasi      |"<<endl;
        cout<<"|      3. Total Kenakalan        |    Jumlah Dana Kenakalan      |"<<endl;
        cout<<"|      4. Exit                   |    keluar                     |"<<endl;
        cout<<"+----------------------------------------------------------------+"<<endl;
        cout<<"Pilih Nomor: ";
        cin>>(action);

        switch (action){
            case '1':
                
                break;
            case '2':
                
                break;
            case '3':
                ;
                break;
            case '4':
                
                break;
            case '5':
                continue;
                break;
        }
        
    }while (action != '5');
    
    return 0;
}