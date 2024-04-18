#include "ExcDenZero.hpp"

const char* ExcDenZero::what() noexcept {
    return "Fracción con Denominador Zero !";
}