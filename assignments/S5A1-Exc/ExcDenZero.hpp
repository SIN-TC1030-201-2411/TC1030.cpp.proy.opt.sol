#pragma once

#include <exception>

class ExcDenZero : public std::exception {
public:
    virtual const char* what() noexcept;
};