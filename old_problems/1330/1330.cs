using System;

class M1330
{
    static void Main()
    {
        string? input = Console.ReadLine();
        if (input == null)
            throw new ArithmeticException("input null");

        short[] value = input.Split(" ").Select(short.Parse).ToArray();
        string check = value[0] > value[1] ? ">" : value[0] < value[1] ? "<" : "=="; 

        Console.Write(check);
    }
}