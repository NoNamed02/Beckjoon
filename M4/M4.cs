using System;

class M4
{
    private string? _input;
    private string[] _inputStrings = new string[2];
    static void Main(string[] args)
    {
        M4 Program = new M4();
        Program.Run();
    }

    void Run()
    {
        _input = Console.ReadLine();
        if (_input == null)
            throw new ArgumentException("input null!");

        _inputStrings = _input.Split(" ");
        int sum = int.Parse(_inputStrings[0]) * int.Parse(_inputStrings[1]);

        System.Console.Write(sum);
    }
}