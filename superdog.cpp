//
// Created by Sg on 10.08.2022.
//

#include "superdog.h"

string Talent::getTitle() const {
    return title;
}

Swim::Swim() {
    title = "swim";
}

void Swim::ability() const {
    cout << "- I'm swimming!" << endl;
}

void Dance::ability() const {
    cout << "- I'm dancing!" << endl;
}

Dance::Dance() {
    title = "dance";
}

void Count::ability() const {
    cout << "- I'm counting!" << endl;
}

Count::Count() {
    title = "count";
}

void Dog::addTalent(Talent *T) {
    if(talents.find(T->getTitle()) == talents.end())
    {
        talents.insert(Int_Pair(T->getTitle(),T));
        cout << "-ok, talent " << T->getTitle() << " has been added!" << endl;
    }
    else
        cout << "I already have talent " << T->getTitle() << "!" << endl;
}

void Dog::showTalents() const {
    if(!talents.empty())
    {
        cout << "Dog " << name << " have talents:" << endl;
        for(Int_Pair t:talents)
            cout <<" - " << t.second->getTitle() << endl;
    }
    else
        cout << "The dog " << name << " has no talents, train it first!" << endl;
}

void Dog::executeCommand(const string& command) const {
    cout << "Dog " << name << ":" << endl;
    if(talents.find(command) != talents.end())
        talents.at(command)->ability();
    else
        cout << "- I don't know yet command '" << command << "' :( teach me pls!" << endl;

}

Dog::~Dog() {
    for_each(talents.begin(),talents.end(),[] (Int_Pair s){ delete(s.second); } );
    talents.clear();
}

void Dog::setName() {
    cout << "Enter the dog name:";
    cin >> name;
}

string Dog::getName() const {
    return name;
}
