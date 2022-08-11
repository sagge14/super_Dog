#include <iostream>
#include "superdog.h"

int main() {
    cout << "---Super dog---" << endl;
    Dog myDog;
    myDog.setName();
    cout << "Ok, our dog name - " << myDog.getName() << endl;
    system("pause");

    while (true)
    {
        system("cls");
        string command;
        cout << "---Super dog---" << endl;
        cout << "Valid command format: '1'  for add dog talent;" << endl;
        cout << "                      '2'  for execute command;" << endl;
        cout << "                      '3'  for show dog talents;" << endl;
        cout << "                      '4'  for exit."<< endl;
        cout << "Enter the command:";
        cin  >> command;

        if(command == "1")
        {
            while (true)
            {
                system("cls");
                cout << "---Choose talent---" << endl;
                cout << "Valid command format: 'dance'  for teach a dog to dance;" << endl;
                cout << "                      'swim'   for teach a dog to swim;" << endl;
                cout << "                      'count'  for teach a dog to count;" << endl;
                cout << "                      'exit'  for go to start menu."<< endl;
                cout << "Enter the command:";
                cin  >> command;
                system("cls");

                if(command == "exit")
                    break;
                else if (command == "dance")
                    myDog.addTalent(new Dance());
                else if (command == "swim")
                    myDog.addTalent(new Swim());
                else if (command == "count")
                    myDog.addTalent(new Count());
                else
                    cout << "Unknown command!" << endl;

                system("pause");
            }
        }
        else if(command == "2")
        {
            while (true)
            {
                system("cls");
                cout << "---Choose command---" << endl;
                cout << "Valid command format: 'dance'  execute the dance command;" << endl;
                cout << "                      'swim'   execute the swim command;" << endl;
                cout << "                      'count'  execute the count command;" << endl;
                cout << "                      'exit'  for go to start menu."<< endl;
                cout << "Enter the command:";
                cin  >> command;
                system("cls");

                if(command == "exit")
                    break;

                myDog.executeCommand(command);
                system("pause");
            }
        }
        else if (command == "3")
        {
            system("cls");
            myDog.showTalents();
            system("pause");
        }
        else if(command == "4")
            break;
    }
    cout << "---Bye, bye---" << endl;
    system("pause");

    return 0;
}
