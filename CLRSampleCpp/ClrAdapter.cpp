#include "ClrAdapter.h"
#include "ClrAdapter.h"

clradopt::ClrAdapter::ClrAdapter()
{
	converter = new magic::ArrayMagicConverter();
}

void clradopt::ClrAdapter::Convert(cli::array<double>^ input_array, int array_length)
{
	pin_ptr<double> pinnedArray = &input_array[0];  // Получение указателя на первый элемент массива
	double* ptr = pinnedArray;
	converter->convert(ptr, (long)array_length);
}

clradopt::ClrAdapter::~ClrAdapter()
{
	delete converter;
}
