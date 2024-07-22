//
// Created by John on 22/07/2024.
//

#include "Application.hpp"
#include "ApplicationEvent.hpp"
#include "Log.hpp"

namespace Hazel {
    Application::Application() {}

    Application::~Application() {}

    void Application::Run() {
        WindowResizeEvent e(1280, 720);
        if (e.IsInCategory(EventCategoryApplication)) {
            HZ_TRACE(e.ToString());
        }

        if (e.IsInCategory(EventCategoryInput)) {
            HZ_TRACE(e.ToString());
        }

        while (true) {}
    }
}// namespace Hazel