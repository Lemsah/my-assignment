#include<iostream>
#include<string>
#include<stdlib.h>
#include<windows.h>
#include<dos.h>
#include<conio.h>

using namespace std;

int s_t=400;
int introduction()      //This part displays the welcoming and purpose text display
{

    system("CLS");
    Sleep(1000);
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
    cout << " by"  ;
    Sleep(s_t);
    cout << " Eng"  ;
    Sleep(s_t);
    cout << " Sedrique"  ;
    Sleep(s_t);
    Sleep(2000);
    system("CLS");
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
    cout<<"                    enter (1) to encrypt an information:\n";
    Sleep(3000);
    cout<<"                    enter (2) to decrypt an information :\n";
    Sleep(3000);
    cout<<"                    enter (3) if its your first time to use Security:\n";

   return 0;
}

int main()               //this the main function
{
    int x;
    system("CLS");
    Sleep(2000);
    cout<<"                                             Welcome ";
    Sleep(s_t);
    cout<<"to ";
    Sleep(s_t);
    cout<<"Security....!! ";
    Sleep(2000);
    system("CLS");
    cout<<"                                              By ";
    Sleep(s_t);
    cout<<"Eng ";
    Sleep(s_t);
    cout<<"Sedrique....!!";
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

         cout<<"           enter (1) to encrypt an information:\n";
          Sleep(3000);
         cout<<"           enter (2) to decrypt an information :\n";
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
     }
    }
  return 0;
}

