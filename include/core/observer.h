#pragma once

#include <vector>
#include <memory>

class Observer
{
public:
    virtual void update() = 0;
};

class Observable
{
public:
    void addObserver(Observer *observer)
    {
        observers.push_back(observer);
    }

    void notify()
    {
        for (auto observer : observers)
        {
            observer->update();
        }
    }
private:
    std::vector<Observer *> observers;
};
