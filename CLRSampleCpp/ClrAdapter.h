#pragma once
#include "../VeryUsefulCodeLib/ArrayMagicConverter.hpp"
using namespace System;

namespace clradopt
{
	public ref class ClrAdapter
	{
	private:
		magic::ArrayMagicConverter* converter;
	public:
		ClrAdapter();

		void Convert(cli::array<double>^ input_array, int array_length);

		~ClrAdapter();
	};
}