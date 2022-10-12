#pragma once

#include <iostream>

#include "Core/Macro.hpp"

COBRA_BEGIN

struct ApplicationData
{
    std::string title;
    int width;
    int height;
};

class Application
{
  public:
    Application(ApplicationData data);
    ~Application() = default;

    static Application* Get() { return s_instance; }

  private:
    static Application* s_instance;

    ApplicationData m_data;
};

COBRA_END