using System;

class M2753
{
    static void Main()
    {
        int? value = int.Parse(Console.ReadLine());
        int Out = (value % 4 == 0 && value % 100 != 0) || value % 400 == 0 ? 1 : 0;
        Console.Write(Out);
    }
}