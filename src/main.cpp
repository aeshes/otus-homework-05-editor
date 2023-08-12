#include "core/controller.h"
#include "core/observer.h"
#include "shapes/shapes.h"

#include <memory>


/// \brief Интерфейс пользователя - это вид в паттерне MVC
class View : public Observer
{
public:
    View() = default;

    void setModel(Document* document);
    void setController(Controller* controller);

    void openDocument(const std::string& fileName);
    void saveDocument(const std::string& fileName);
    void addCircle(int x, int y, int radius);
    void addRectangle(int x, int y, int width, int height);
    void addLine(int x1, int y1, int x2, int y2);

    void update() override;

private:
    Document* document;
    Controller* controller;
};

int main()
{
    Document *doc = new Document;
    View* view = new View;
    view->setModel(doc);
    Controller* controller = new Controller(doc, view);
    view->setController(controller);

    view->openDocument("draw.doc");
    view->addCircle(1, 0, 3);
    view->addLine(0, 0, 1, 1);
    view->saveDocument("draw.doc");

    return 0;
}

void View::setModel(Document *document)
{
    this->document = document;
    this->document->addObserver(this);
}

void View::setController(Controller *controller)
{
    this->controller = controller;
}

void View::update()
{
    document->draw();
}

void View::openDocument(const std::string &fileName)
{
    document->open(fileName);
}

void View::saveDocument(const std::string &fileName)
{
    document->save(fileName);
}

void View::addCircle(int x, int y, int radius)
{
    controller->addShape(std::make_shared<Circle>(x, y, radius));
}

void View::addRectangle(int x, int y, int width, int height)
{
    controller->addShape(std::make_shared<Rectangle>(x, y, width, height));
}

void View::addLine(int x1, int y1, int x2, int y2)
{
    controller->addShape(std::make_shared<Line>(x1, y1, x2, y2));
}
