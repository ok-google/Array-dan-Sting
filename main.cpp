#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char input[100], kopi[100], kopi2[100];
    int kounter; int vokal=0; int konsonan=0;int besar=0;int kecil=0;int gang=0, offset, gantine;
    cout<<"Input User       = ";
    cin.getline(input, 100);
    kopi==strcpy(kopi, input);
    cout<<"Original         = "<<input<<endl;
    cout<<"Reserved         = "<<strrev(kopi)<<endl;
    kopi==strcpy(kopi, input);
    cout<<endl;
    cout<<"Uppercase        = "<<strupr(kopi)<<endl;
    cout<<"Lowercase        = "<<strlwr(kopi)<<endl;
    for(kounter=0; kounter<strlen(input); kounter++){
        if(input[kounter]>='A' && input[kounter]<='Z'){
            besar++;
           }
        else if(input[kounter]==' '){
            gang=0;
        }
        else{
            kecil++;
        }
    }
    cout<<endl;
    cout<<"Ucase total      = "<<besar<<endl;
    cout<<"Lcase total      = "<<kecil<<endl;
    kopi==strcpy(kopi, input);
    kopi2==strcpy(kopi2, input);
    for(kounter=0; kounter<strlen(input); kounter++){
        if(input[kounter]=='a' || input[kounter]=='i' || input[kounter]=='u' ||
           input[kounter]=='e' || input[kounter]=='o' || input[kounter]=='A' ||
           input[kounter]=='I' || input[kounter]=='U' || input[kounter]=='E' || input[kounter]=='O'){
            vokal++;
            kopi[kounter]=' ';//Menghilang Huruf Vokal;
           }
        else if(input[kounter]==' '){
            gang++;
        }
        else{
            konsonan++;
            kopi2[kounter]=' ';//Menghilangkan Huruf Bukan Vokal
        }
    }
    cout<<endl;
    cout<<"Vocals           = "<<vokal<<endl;
    cout<<"!Vocals          = "<<konsonan<<endl;
    cout<<"Spaces           = "<<gang<<endl;
    cout<<endl;
    cout<<"Hide Vocals      = "<<kopi<<endl;
    cout<<"Hide !Vocals     = "<<kopi2<<endl<<endl;
    cout<<"Input Offset     = ";
    cin>>offset;
    kopi==strcpy(kopi, input);
    for(kounter=0; kounter<strlen(input); kounter++){
        if(kopi[kounter]==' '){
            kopi[kounter]=' ';
        }
        else{
        gantine=int(kopi[kounter])+offset;//Merubah ke kode ASCII
        kopi[kounter]=char (gantine);//Merubah ASCII ke Karakter
        }
    }
    cout<<"Offset Text      = "<<kopi;
    cout<<endl;
}
