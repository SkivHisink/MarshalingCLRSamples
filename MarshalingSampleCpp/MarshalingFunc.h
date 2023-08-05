#pragma once
#include "../VeryUsefulCodeLib/ArrayMagicConverter.hpp"

extern "C" __declspec(dllexport)
magic::ArrayMagicConverter * CreateArrayMagicConverter();

extern "C" __declspec(dllexport)
void Convert(magic::ArrayMagicConverter * converter, double* input_array, int array_length);

extern "C" __declspec(dllexport)
void DisposeArrayMagicConverter(magic::ArrayMagicConverter * converter);