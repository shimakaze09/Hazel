//
// Created by John on 22/07/2024.
//

#ifndef HAZEL_APPLICATION_HPP
#define HAZEL_APPLICATION_HPP

#include "Event.hpp"
#include <memory>
#include "Window.hpp"

namespace Hazel {
    class Application {
    public:
        Application();
        virtual ~Application();
        void Run();

    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running{true};
    };

    Application *CreateApplication();
}// namespace Hazel

#endif// HAZEL_APPLICATION_HPP
