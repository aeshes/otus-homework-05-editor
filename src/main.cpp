#include "core/view.h"
#include "core/controller.h"
#include "shapes/shapes.h"

#include <memory>

int main()
{
    Document *doc = new Document;
    View* view = new View;
    view->setModel(doc);
    Controller* controller = new Controller(doc, view);

    controller->openDocument("draw.doc");
    controller->addCircle(1, 0, 3);
    controller->addLine(0, 0, 1, 1);
    controller->saveDocument("draw.doc");

    return 0;
}
