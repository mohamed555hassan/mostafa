#include <iostream>

using namespace std;

int main()
{
    while(true){
        cout << " ahlan ya user ya habibi." << endl;
        int result;
        cout <<" what do you like to do today ?" <<endl << "1- cipher" << endl << "2- decipher"<< endl;
        cin >> result;
        if (result == 1){
            string text ;
            cout << "enter the message you want to cipher" <<endl;
            cin.get();
            getline(cin,text);
            for (int i = 0 ;i < text.length(); i++)
                switch( text[i])
            { case ' ' :
               cout << "   " ;
                break ;
          case 'a' :
            cout << ".-"<< ' ' ;
            break ;
          case 'b' :
            cout << "-..." << ' ' ;
            break ;
          case 'c' :
            cout << "-.-." << ' ' ;
            break ;
          case 'd' :
            cout << "-.." << ' ' ;
            break ;
          case 'e' :
            cout << "." << ' ' ;
            break ;
          case 'f' :
            cout << "..-." << ' ' ;
            break ;
          case 'g' :
            cout << "--." << ' ' ;
            break ;
          case 'h' :
            cout << "...." << ' ' ;
            break ;
          case 'i' :
            cout << ".." << ' ' ;
            break ;
          case 'j' :
            cout << ".---" << ' ' ;
            break ;
          case 'k' :
            cout << "-.-" << ' ' ;
            break ;
          case 'l' :
            cout << ".-.." << ' ' ;
            break ;
          case 'm' :
            cout << "--" << ' ' ;
            break ;
          case 'n' :
            cout << "-." << ' ' ;
            break ;
          case 'o' :
            cout << "---" << ' ' ;
            break ;
          case 'p' :
            cout << ".--." << ' ' ;
            break ;
          case 'q' :
            cout << "--.-" << ' ' ;
            break ;
          case 'r' :
            cout << ".-." << ' ' ;
            break ;
          case 's' :
            cout << "..." << ' ' ;
            break ;
          case 't' :
            cout << "-" << ' ' ;
            break ;
          case 'u' :
            cout << "..-" << ' ' ;
            break ;
          case 'v' :
            cout << "...-" << ' ' ;
            break ;
          case 'w' :
            cout << ".--" << ' ' ;
            break ;
          case 'x' :
            cout << "-..-" << ' ' ;
            break ;
          case 'y' :
            cout << "-.--" << ' ' ;
            break ;
          case 'z' :
            cout << "--.." << ' ' ;
            break ;
          default :
            cout << "you should enter letters only" << endl;



            }
           } else if (result == 2) {
            string morse , temp ;
            cout << "please enter text to decipher" << endl;
            cin.get();
            getline(cin,morse) ;
            morse += ' ' ;
            for (int i= 0;i < morse.length() ; i++){
                if (morse[i] != ' '){
                    temp += morse[i] ;
                } else if (morse[i] == ' ' || i == morse.length()-1){
                    if (temp == ".-"){
                        cout << "a" ;}
                        else if (temp == "-..."){
                            cout << "b" ;}
                            else if (temp == "-.-."){
                                cout << "c" ;}
                            else if (temp == "-.."){
                                cout << "d" ;}
                            else if (temp == "."){
                                cout << "e" ;}
                            else if (temp == "..-."){
                                cout << "f" ;}
                            else if (temp == "--."){
                                cout << "g" ;}
                            else if (temp == "...."){
                                cout << "h" ;}
                            else if (temp == ".."){
                                cout << "i" ;}
                            else if (temp == ".---"){
                                cout << "j" ;}
                            else if (temp == "-.-"){
                                cout << "k" ;}
                            else if (temp == ".-.."){
                                cout << "l" ;}
                            else if (temp == "--"){
                                cout << "m" ;}
                            else if (temp == "-."){
                                cout << "n" ;}
                            else if (temp == "---"){
                                cout << "o" ;}
                            else if (temp == ".--."){
                                cout << "p" ;}
                            else if (temp == "--.-"){
                                cout << "q" ;}
                            else if (temp == ".-."){
                                cout << "r" ;}
                            else if (temp == "..."){
                                cout << "s" ;}
                            else if (temp == "-"){
                                cout << "t" ;}
                            else if (temp == "..-"){
                                cout << "u" ;}
                            else if (temp == "...-"){
                                cout << "v" ;}
                            else if (temp == ".--"){
                                cout << "w" ;}
                            else if (temp == "-..-"){
                                cout << "x" ;}
                            else if (temp == "-.--"){
                                cout << "y" ;}
                            else if (temp == "--.."){
                                cout << "z" ;}
                            if( morse[i] == ' ' && morse[i+1] == ' ' && morse[i+2] ==' '){
                                cout << ' ' ;}
                            temp.erase(0,5) ;



                }
            }

        }
    }
    return 0;
}
