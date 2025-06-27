using System;

class M3
{
    static void Main(string[] args)
    {
        string? _input = Console.ReadLine();
        if (_input == null)
            throw new ArgumentException("input is null!");
        string[] _inputSplit = _input.Split(" ");
        System.Console.Write(int.Parse(_inputSplit[0]) - int.Parse(_inputSplit[1]));
    }
}