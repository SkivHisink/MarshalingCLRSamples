using System.Diagnostics;
using clradopt;

namespace CLRSampleCSharp
{
    internal static class Program
    {
        [STAThread]
        static void Main(string[] args)
        {
            double[] input = new double[10];
            for (int i = 0; i < input.Length; i++)
            {
                input[i] = i;
                Debug.Write(input[i] + " ");
            }
            Debug.WriteLine("");
            ClrAdapter adapter = new ClrAdapter();
            adapter.Convert(input, input.Length);
            //using ()
            {
                //adapter.Convert(input);
                for (int i = 0; i < input.Length; i++)
                {
                    Debug.Write(input[i] + " ");
                }
            }
        }
    }
}