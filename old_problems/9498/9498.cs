using System;

class M9498
{
    static void Main()
    {
        string? input = Console.ReadLine();
        if (input == null)
            throw new ArgumentException("input null");
        int value = int.Parse(input);
        char grade = value >= 90 ? 'A' : value >= 80 ? 'B' : value >= 70 ? 'C' : value >= 60 ? 'D' : 'F';

        Console.Write(grade);
    }
}