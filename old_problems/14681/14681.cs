using System;

class M14681
{
    static void Main()
    {
        string? input = Console.ReadLine();
        int posX = int.Parse(input);
        input = Console.ReadLine();
        int posY = int.Parse(input);

        int Out = posX > 0 && posY > 0 ? 1 :
                    posX > 0 && posY < 0 ? 4 :
                    posX < 0 && posY > 0 ? 2 :
                    3;
        Console.Write(Out);
    }
}