//
// Created by Sg on 10.08.2022.
//
#include <string>
#include <iostream>
#include <map>
#include <algorithm>
#pragma once
using namespace std;
typedef pair <string, class Talent*> Int_Pair;

class Talent
{
protected:
    string title = "-";
public:
    Talent() = default;
    string getTitle() const;
    virtual void ability() const = 0;
    virtual ~Talent() = default;
};
class Swim: public Talent
{
public:
    void ability() const override;
    Swim();
};
class Dance: public Talent
{
public:
    void ability() const override;
    Dance();
};
class Count: public Talent
{
public:
    void ability() const override;
    Count();
};
class Dog
{
    string name;
    map<string, class Talent*> talents;
public:
    void addTalent(Talent *T);
    void showTalents() const;
    void setName();
    string getName() const;
    void executeCommand(const string& command) const;
    ~Dog();
};
