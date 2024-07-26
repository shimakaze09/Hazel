//
// Created by John on 22/07/2024.
//

#include <functional>

#include "Application.hpp"
#include "ApplicationEvent.hpp"
#include "Log.hpp"

#include <Glad/glad.h>

namespace Hazel {
#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)
    Application::Application() {
        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window->SetEventCallback(BIND_EVENT_FN(OnEvent));
    }

    Application::~Application() {}

    void Application::OnEvent(Event &e) {
        EventDispatcher dispatcher(e);
        dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClose));
        HZ_CORE_TRACE("{0}", e.ToString());
    }

    bool Application::OnWindowClose(WindowCloseEvent &e) {
        m_Running = false;
        return true;
    }

    void Application::Run() {
        WindowResizeEvent e(1280, 720);
        if (e.IsInCategory(EventCategoryApplication)) {
            HZ_TRACE(e.ToString());
        }

        if (e.IsInCategory(EventCategoryInput)) {
            HZ_TRACE(e.ToString());
        }

        while (m_Running) {
            glClearColor(0, 1, 0, 1);
            glClear(GL_COLOR_BUFFER_BIT);
            m_Window->OnUpdate();
        }
    }
}// namespace Hazel