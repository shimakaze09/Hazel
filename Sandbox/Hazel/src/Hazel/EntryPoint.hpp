//
// Created by John on 22/07/2024.
//

#ifndef HAZEL_ENTRYPOINT_HPP
#define HAZEL_ENTRYPOINT_HPP

extern Hazel::Application *Hazel::CreateApplication();

int main(int argc, char **argv) {
    Hazel::Log::Init();
    HZ_CORE_WARN("Initialized Log!");
    int a = 5;
    HZ_INFO("Hello! Var={0}", a);

    auto app = Hazel::CreateApplication();
    app->Run();
    delete app;
    return 0;
}

#endif//HAZEL_ENTRYPOINT_HPP
