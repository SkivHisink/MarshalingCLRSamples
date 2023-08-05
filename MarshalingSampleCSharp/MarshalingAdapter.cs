using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace MarshalingSampleCSharp
{
    internal class MarshalingAdapter:IDisposable
    {
        [DllImport("MarshalingSampleCpp.dll")]
        static protected extern IntPtr CreateArrayMagicConverter();
        [DllImport("MarshalingSampleCpp.dll")]
        static protected extern void Convert(IntPtr converter, double[] input_array, int array_length);
        [DllImport("MarshalingSampleCpp.dll")]
        static protected extern void DisposeArrayMagicConverter(IntPtr converter);
        IntPtr converter;
        public MarshalingAdapter()
        {
            this.converter = CreateArrayMagicConverter();
        }

        public void Convert(double[] input_array)
        {
            Convert(converter, input_array, input_array.Length);
        }
        public void Dispose()
        {
            DisposeArrayMagicConverter(converter);
        }
    }
}
