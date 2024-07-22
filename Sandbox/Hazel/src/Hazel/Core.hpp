//
// Created by John on 22/07/2024.
//

#ifndef HAZEL_CORE_HPP
#define HAZEL_CORE_HPP

#ifdef HZ_PLATFORM_WINDOWS
#ifdef HZ_BUILD_DLL
#define HAZEL_API __declspec(dllexport)
#else
#define HAZEL_API __declspec(dllimport)
#endif
#else
#error Hazel only supports Windows!
#endif

#endif//HAZEL_CORE_HPP
