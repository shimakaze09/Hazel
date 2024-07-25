//
// Created by John on 25/07/2024.
//

#ifndef SANDBOX_WINDOW_HPP
#define SANDBOX_WINDOW_HPP

#include "Event.hpp"

namespace Hazel {
    struct WindowProps {
        std::string Title;
        unsigned int Width;
        unsigned int Height;

        WindowProps(const std::string& title = (std::string)("Hazel Engine"),
                    unsigned int width = 1280,
                    unsigned int height = 720)
            : Title(title), Width(width), Height(height) {}
    };

    class Window {
    public:
        using EventCallbackFn = std::function<void(Event &)>;

        virtual ~Window() = default;

        virtual void OnUpdate() = 0;

        virtual unsigned int GetWidth() const = 0;
        virtual unsigned int GetHeight() const = 0;

        // Window attributes
        virtual void SetEventCallback(const EventCallbackFn &callback) = 0;
        virtual void SetVSync(bool enabled) = 0;
        virtual bool IsVSync() const = 0;

        static Window *Create(const WindowProps &props = WindowProps());
    };
}// namespace Hazel

#endif//SANDBOX_WINDOW_HPP
