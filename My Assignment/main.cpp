#include<iostream>
#include<string>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include<conio.h>
#include<MMsystem.h>

using namespace std;

int s_t=200;
int introduction()      //This part displays the welcoming and purpose text display
{

    system("CLS");
    Sleep(500);
    PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\intro my name.wav", NULL, SND_SYNC);
    cout << "                                                      Hello" ;
    Sleep(s_t);
    cout << " dear " ;
    Sleep(s_t);
    cout << "user...!"  ;
    Sleep(2000);
    system("CLS");
    cout << "                                                      My "  ;
    Sleep(s_t);
    cout << "name"  ;
    Sleep(s_t);
    cout << " is"  ;
    Sleep(s_t);
    cout << " Security...!"  ;
    system("CLS");
    PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\by me.wav", NULL, SND_SYNC);
    cout << "                                          by"  ;
    Sleep(s_t);
    cout << " Eng"  ;
    Sleep(s_t);
    cout << " lenmsah Sedrique"  ;
    Sleep(s_t);
    system("CLS");
    PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\i was created.wav", NULL, SND_SYNC);
        cout << "                                       I "  ;
    Sleep(s_t);
        cout << "was "  ;
    Sleep(s_t);
        cout << "created "  ;
    Sleep(s_t);
        cout << "to "  ;
    Sleep(s_t);
        cout << "keep "  ;
    Sleep(s_t);
        cout << "your "  ;
    Sleep(s_t);
        cout << "personal "  ;
    Sleep(s_t);
        cout << "information "  ;
    Sleep(s_t);
        cout << "secured...! "  ;
    Sleep(3000);
    system("CLS");
    PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\press the key.wav", NULL, SND_SYNC);
    cout << "                                    press the Enter key to continiuo"  ;
    Sleep(2000);
    system("CLS");
    getch();
 return 0;
}

int encryptor()     //this part asks info to encrypted from the user

{
      int i;
      char str[75];

      PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\pleas enter e info.wav", NULL, SND_SYNC);
      cout<<"             please enter the information to be encrypted... :\t";
      cin>>str;

      for(i=0; (i<75 && str[i]!='0');i++)
        str[i]=str[i]+2;           //this says the key for encryption is 3
        cout<<"\n             Encrypted info: "<<str<<endl;
    return 0;
}
int  decryptor()          //this the code to decrypt the encrypted message

{

      int i;
      char str[75];

      PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\enter d code.wav", NULL, SND_SYNC);
      cout<<"             please enter the decryption code.....:\t";
      cin>>str;

      for(i=0; (i<75 && str[i]!='0');i++)
        str[i]=str[i]-2;           //the key for decryption is 3
        cout<<"\n              this the decrypted information: "<<str<<endl;
     return 0;
}
int user_status()         //this function ask prompt the user to choose what to do
{
    int x;
    PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\option 1.wav", NULL, SND_SYNC);
    cout<<"                    1:enter option (1) to encrypt an information:\n";
    Sleep(3000);
    PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\option 2.1.wav", NULL, SND_SYNC);
    cout<<"                    2:enter option (2) to decrypt an information :\n";
    Sleep(3000);
    PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\option 3.wav", NULL, SND_SYNC);
    cout<<"                    3:enter option (3) if its your first time to use Security:\n";

   return 0;
}

int main()               //this the main function
{
    int x;
    system("CLS");
    Sleep(2000);
    PlaySound ("C:\\Users\\CB programing\\Documents\\vood\\erro\\welcome to security.wav",NULL, SND_SYNC);
    cout<<"                                             Welcome ";
    Sleep(s_t);
    cout<<"to ";
    Sleep(s_t);
    cout<<"Security....!! ";
    Sleep(1000);
    system("CLS");
    PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\by eng lem sed.wav",NULL, SND_SYNC);
    system("CLS");
    cout<<"                                              By ";
    Sleep(s_t);
    cout<<"Eng ";
    Sleep(s_t);
    cout<<"Lemnsah Sedrique....!!";
    Sleep(3000);
    cout<<" ";
    cout<<" ";
    system("CLS");

    user_status();
    cin>>x;
    system("CLS");

      //i used the switch statement to replace the if, else statement
    switch(x)
    {
      case 1:              //the encryption precesor
        decryptor();
        Sleep(2000);

        break ;

      case 2:
        encryptor();

      cout<<"the first visible letters, it will be your decryption code....!!";

      case 3:
        introduction();



    PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\option 1.wav", NULL, SND_SYNC);
    cout<<"                    1:enter option (1) to encrypt an information:\n";
    Sleep(3000);
    PlaySound("C:\\Users\\computer solution\\Documents\\New folder\\tutos\\yes\\option 2.1.wav", NULL, SND_SYNC);
    cout<<"                    2:enter option (2) to decrypt an information :\n";
    Sleep(3000);
        cin>>x;
    system("CLS");

      //i used the switch statement to replace the if, else statement
     switch(x)
     {
      case 2:              //the encryption precesor
        decryptor();
        Sleep(2000);

        break ;

      case 1:
        encryptor();

       cout<<"the first visible letters, it will be your decryption code....!!";
     }
    }
  return 0;
}

