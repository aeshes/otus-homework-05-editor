#include "core/model.h"
#include "core/view.h"
#include "core/controller.h"
#include "shapes/shape.h"
#include "shapes/circle.h"

#include <memory>

int main()
{
    std::shared_ptr<Model> model = std::make_shared<DrawModel>();
    std::shared_ptr<View> view = std::make_shared<View>(model);
    std::shared_ptr<Controller> controller = std::make_shared<Controller>(model, view);

    Point center(1, 0);
    std::shared_ptr<Shape> circle = std::make_shared<Circle>(center, 3);

    controller->addShape(circle);
    controller->saveDocument("draw.doc");

    return 0;
}
