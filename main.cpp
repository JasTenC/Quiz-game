#include <iostream>
using namespace std;


int main()
{
    //Introduction of program
    string lol;
   cout<< "---------- Quiz Game ----------\n";
   cout<< "Press enter to Start\n";
   cin.get();

   //Participants info
    string name, address;
    int age;
   cout<< "Type your full name : ";
   getline(cin, name);
   cout<< "How old are you? : ";
   cin>>age;
   cout<< "Where do you live? : ";
   cin.ignore();
   getline(cin, address);

cout<< endl;

   //Participants Output info
    string ready;
   cout<< "Hi, " <<name<<"! your "<<age<< " and you lived in "<<address<< ".\n";
   cout<< endl;
   cout<< "Are you ready to take your quiz? (yes or no) : ";
    cin>>ready;
     if(ready == "yes"){
        cout<< "goodluck !!\n";
        cout<< endl;
     }else{
        cout<< "Bye bye!\n";
        return 0;
     }

    // Start of quiz
   cout<< "Multiple choice : Write the correct answer.\n";
   cout<< endl;

   // Data types for Questions
   int q1;
   string q2;
   string q3;
   string q4;
   string q5;



   // Questions
   cout<< "What is 5 + 5? (10, 6, 9) : ";
    cin>>q1;
     if(q1 == 10){
        cout<<"   ("<<q1<< ") is Correct\n";
     }else{
        cout<<"   ("<<q1<< ") is Wrong\n";
     }

cout<< endl;

    cout<< "Am i Handsome? (yes or no) : ";
     cin>>q2;
      if(q2 == "yes"){
        cout<<"   ("<<q2<< ") is Correct\n";
     }else{
        cout<<"   ("<<q2<< ") is Wrong\n";
     }

cout<< endl;

     cout<< "Is programming fun? (yes or no) : ";
     cin>>q3;
      if(q3 == "yes"){
        cout<<"   ("<<q3<< ") is Correct\n";
     }else{
        cout<<"   ("<<q3<< ") is Wrong\n";
     }

cout<< endl;

     cout<< "Where do you live? (earth or mars) : ";
     cin>>q4;
      if(q4 == "earth"){
        cout<<"   ("<<q4<< ") is Correct\n";
     }else{
        cout<<"   ("<<q4<< ") is Wrong\n";
     }

cout<< endl;

     cout<< "What is first A or B? (a or b) : ";
     cin>>q5;
      if(q5 == "a"){
        cout<<"   ("<<q5<< ") is Correct\n";
     }else{
        cout<<"   ("<<q5<< ") is Wrong\n";
     }

     cout<< endl;

     //Ountro
     cout<< "Thank you for participating";

    return 0;
}
