using System;
using System.Text;

class M10926
{
    StringBuilder _stringbulider = new StringBuilder();
    static void Main()
    {
        M10926 m10926 = new M10926();
        m10926.run();
    }

    void run()
    {
        string? input = Console.ReadLine();
        _stringbulider.Append(input + "??!");
        Console.Out.Write(_stringbulider.ToString());
    }
}