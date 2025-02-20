//
// Created by John on 22/07/2024.
//

#ifndef SANDBOX_BASE_HPP
#define SANDBOX_BASE_HPP

#define BIT(x) (1 << x)

#ifdef HZ_ENABLE_ASSERTS
#define HZ_ASSERT(x, ...)                                   \
    {                                                       \
        if (!(x)) {                                         \
            HZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); \
            __debugbreak();                                 \
        }                                                   \
    }
#define HZ_CORE_ASSERT(x, ...)                                   \
    {                                                            \
        if (!(x)) {                                              \
            HZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); \
            __debugbreak();                                      \
        }                                                        \
    }
#else
#define HZ_ASSERT(x, ...)
#define HZ_CORE_ASSERT(x, ...)
#endif

#endif//SANDBOX_BASE_HPP
