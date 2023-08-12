#include "core/controller.h"
#include "core/observer.h"
#include "shapes/shapes.h"

#include <vector>
#include <memory>


/// \brief Интерфейс пользователя - это вид в паттерне MVC
class View : public Observer
{
public:
    View() = default;

    void setModel(Document* document);

    void update() override;

private:
    Document* document;
};

int main()
{
    Document *doc = new Document;

    View* view = new View;
    view->setModel(doc);

    Controller* controller = new Controller;
    controller->setModel(doc);

    controller->openDocument("draw.doc");
    controller->addCircle(1, 0, 3);
    controller->addLine(0, 0, 1, 1);
    controller->saveDocument("draw.doc");

    return 0;
}

void View::setModel(Document *document)
{
    this->document = document;
    this->document->addObserver(this);
}

void View::update()
{
    for (const auto& object : document->getShapes())
    {
        object->draw();
    }
}

