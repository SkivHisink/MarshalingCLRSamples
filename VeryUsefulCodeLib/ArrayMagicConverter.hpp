// TODO: Need to use library instead of files
#include <iostream>
#include <tuple>

namespace magic
{
	class ArrayMagicConverter
	{
	private:
		int* test_variable;
	public:
		ArrayMagicConverter()
		{
			test_variable = new int[10];
		}

		void convert(double* arr, long array_length)
		{
			for (int i = 0; i < array_length / 2; i++)
			{
				std::swap(arr[i], arr[array_length - 1 - i]);
			}
		}

		~ArrayMagicConverter()
		{
			delete[] test_variable;
		}
	};
}
