using System.Diagnostics;

namespace MarshalingSampleCSharp
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
            using (var adapter = new MarshalingAdapter())
            {
                adapter.Convert(input);
                for (int i = 0; i < input.Length; i++)
                {
                    Debug.Write(input[i] + " ");
                }
            }
        }
    }
}