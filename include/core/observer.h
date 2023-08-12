#pragma once

#include <vector>

/// \brief Observer - это наблюдатель в паттерне "Наблюдатель"
class Observer
{
public:
    virtual void update() = 0;
};

/// \brief Интерфейс наблюдаемого объекта в паттерне "Наблюдатель".
class Observable
{
public:
    /// Добавляет наблюдателя
    void addObserver(Observer *observer)
    {
        observers.push_back(observer);
    }

    /// Отправляет сообщение всем наблюдателям
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
