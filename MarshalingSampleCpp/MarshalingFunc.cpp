#include "MarshalingFunc.h"

magic::ArrayMagicConverter* CreateArrayMagicConverter()
{
	auto result = new magic::ArrayMagicConverter();
	return result;
}

void Convert(magic::ArrayMagicConverter* converter, double* input_array, int array_length)
{
	converter->convert(input_array, array_length);
}

void DisposeArrayMagicConverter(magic::ArrayMagicConverter* converter)
{
	delete converter;
}
