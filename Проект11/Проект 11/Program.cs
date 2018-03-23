using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Проект_11
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = 0;
            int a = 0;

            do
            {
                a = Convert.ToInt16(Console.ReadLine());
                if (a > 0 && a % 2 == 0 && a % 10 == 8)
                    sum += a;

            } while (a != 0);

            Console.WriteLine("Sum: " + sum);
            Console.ReadKey();
        }
    }
}
