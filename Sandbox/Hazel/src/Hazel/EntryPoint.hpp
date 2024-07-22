//
// Created by John on 22/07/2024.
//

#ifndef HAZEL_ENTRYPOINT_HPP
#define HAZEL_ENTRYPOINT_HPP

#define HZ_PLATFORM_WINDOWS

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application *Hazel::CreateApplication();

int main(int argc, char **argv) {
    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
    return 0;
}

#endif//HZ_PLATFORM_WINDOWS

#endif//HAZEL_ENTRYPOINT_HPP
