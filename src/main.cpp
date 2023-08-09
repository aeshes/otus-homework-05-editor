#include "core/model.h"
#include "core/view.h"
#include "core/controller.h"
#include "shapes/shapes.h"

#include <memory>

int main()
{
    Model* model = new Model;
    View* view = new View(model);
    Controller* controller = new Controller(model, view);

    Point center(1, 0);
    controller->addShape(std::make_shared<Circle>(center, 3));

    Point p(0, 0);
    Point q(1, 1);
    controller->addShape(std::make_shared<Line>(p, q));
    controller->saveDocument("draw.doc");

    return 0;
}
