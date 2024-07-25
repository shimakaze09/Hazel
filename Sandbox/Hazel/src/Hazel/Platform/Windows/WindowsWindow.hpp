//
// Created by John on 25/07/2024.
//

#ifndef SANDBOX_WINDOWS_WINDOW_HPP
#define SANDBOX_WINDOWS_WINDOW_HPP

#include "Window.hpp"
#include <Glad/glad.h>
#include <GLFW/glfw3.h>

namespace Hazel {
    class WindowsWindow : public Window {
    public:
        WindowsWindow(const WindowProps &props);

        virtual ~WindowsWindow();

        void OnUpdate() override;

        inline unsigned int GetWidth() const override { return m_Data.Width; }
        inline unsigned int GetHeight() const override { return m_Data.Height; }

        // Window attributes
        inline void SetEventCallback(const EventCallbackFn &callback) override {
            m_Data.EventCallback = callback;
        }

        void SetVSync(bool enabled) override;
        bool IsVSync() const override;

    private:
        virtual void Init(const WindowProps &props);
        virtual void Shutdown();


    private:
        GLFWwindow *m_Window;

        struct WindowData {
            std::string Title;
            unsigned int Width, Height;
            bool VSync;
            EventCallbackFn EventCallback;
        };

        WindowData m_Data;
    };
}// namespace Hazel

#endif//SANDBOX_WINDOWS_WINDOW_HPP
