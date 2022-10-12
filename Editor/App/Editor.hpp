#include <Core/Application.hpp>

class CobraEditor : public cobra::Application
{
  public:
    CobraEditor() : Application({"Cobra Editor", 1280, 720}) {}
};