//
// Created by John on 22/07/2024.
//

#include <Hazel.hpp>

class Sandbox : public Hazel::Application {
public:
    Sandbox() {}

    ~Sandbox() {}
};

Hazel::Application *Hazel::CreateApplication() {
    return new Sandbox();
}
