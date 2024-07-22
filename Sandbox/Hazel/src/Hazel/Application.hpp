//
// Created by John on 22/07/2024.
//

#ifndef HAZEL_APPLICATION_HPP
#define HAZEL_APPLICATION_HPP

namespace Hazel {
    class Application {
    public:
        Application();
        virtual ~Application();
        void Run();
    };

    Application *CreateApplication();
}// namespace Hazel

#endif// HAZEL_APPLICATION_HPP
