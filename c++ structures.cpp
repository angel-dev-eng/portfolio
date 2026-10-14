#include <iostream>
 #include <cstring>
 using namespace std;
 struct music{
     char title[50];
     char author[30];
     char genre[35];
     int ofview;
 };
 int main(){
     struct music song_number1;
     struct music song_number2;
     struct music song_number3;
     struct music song_number4;
     struct music song_number5;

     
     strcpy(song_number1.title, "Palagi");
     strcpy(song_number1.author, "TJ Monterde");
     strcpy(song_number1.genre, "Pop");
     song_number1.ofview = 15,674,231;
    
     strcpy(song_number2.title, "Sining");
     strcpy(song_number2.author, "Dionela");
     strcpy(song_number2.genre, "R&B");
     song_number2.ofview = 102955445;
     
     strcpy(song_number3.title, "Uhaw");
     strcpy(song_number3.author, "Dilaw");
     strcpy(song_number3.genre, "Alternative / Pop");
     song_number3.ofview = 65740231;
     
     strcpy(song_number4.title, "Ere");
     strcpy(song_number4.author, "JK Labajo");
     strcpy(song_number4.genre, "Pop / Rock");
     song_number4.ofview = 95489932;

     strcpy(song_number5.title, "Pasilyo");
     strcpy(song_number5.author, "Sunkissed Lola");
     strcpy(song_number5.genre, "OPM / Pop");
     song_number5.ofview = 31168742;
     
     cout<<"************************"<<endl;
     cout<<"       MUSIC NUMBER 1     "<<endl;
     cout<<"************************"<<endl;
     cout<<"SONG TITLE: "<< song_number1.title <<endl;
     cout<<"SONG AUTHOR: "<< song_number1.author <<endl;
     cout<<"SONG GENRE: "<< song_number1.genre <<endl;
     cout<<"SONG VIEWS: "<< song_number1.ofview <<endl;
     cout<<"************************"<<endl;

     cout<<"************************"<<endl;
     cout<<"       MUSIC NUMBER 2     "<<endl;
     cout<<"************************"<<endl;
     cout<<"SONG TITLE: "<< song_number2.title <<endl;
     cout<<"SONG AUTHOR: "<< song_number2.author <<endl;
     cout<<"SONG GENRE: "<< song_number2.genre <<endl;
     cout<<"SONG VIEWS: "<< song_number2.ofview <<endl;
     cout<<"************************"<<endl;

     cout<<"************************"<<endl;
     cout<<"       MUSIC NUMBER 3     "<<endl;
     cout<<"************************"<<endl;
     cout<<"SONG TITLE: "<< song_number3.title <<endl;
     cout<<"SONG AUTHOR: "<< song_number3.author <<endl;
     cout<<"SONG GENRE: "<< song_number3.genre <<endl;
     cout<<"SONG VIEWS: "<< song_number3.ofview <<endl;
     cout<<"************************"<<endl;

     cout<<"************************"<<endl;
     cout<<"       MUSIC NUMBER 4     "<<endl;
     cout<<"************************"<<endl;
     cout<<"SONG TITLE: "<< song_number4.title <<endl;
     cout<<"SONG AUTHOR: "<< song_number4.author <<endl;
     cout<<"SONG GENRE: "<< song_number4.genre <<endl;
     cout<<"SONG VIEWS: "<< song_number4.ofview <<endl;
     cout<<"************************"<<endl;

     cout<<"************************"<<endl;
     cout<<"       MUSIC NUMBER 5     "<<endl;
     cout<<"************************"<<endl;
     cout<<"SONG TITLE: "<< song_number5.title <<endl;
     cout<<"SONG AUTHOR: "<< song_number5.author <<endl;
     cout<<"SONG GENRE: "<< song_number5.genre <<endl;
     cout<<"SONG VIEWS: "<< song_number5.ofview <<endl;
     cout<<"************************"<<endl;
     return 0;
 }