module;

#include <vector>

export module core.observer;

/// \brief Observer - это наблюдатель в паттерне "Наблюдатель"
export class Observer
{
public:
    virtual void update() = 0;
};

/// \brief Интерфейс наблюдаемого объекта в паттерне "Наблюдатель".
export class Observable
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
