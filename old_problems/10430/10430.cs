using System;

class M10430
{
    /*
        문제
        (A+B)%C는 ((A%C) + (B%C))%C 와 같을까?

        (A×B)%C는 ((A%C) × (B%C))%C 와 같을까?

        세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

        입력
        첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)

        출력
        첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
    */
    static void Main()
    {
        string? input = Console.ReadLine();
        string[] stringValue;
        int[] Value = new int[3];
        int[] output = new int[4];

        if (input == null)
            throw new ArgumentException("input null");
        stringValue = input.Split(" ");
        for (int i = 0; i < 3; i++)
        {
            Value[i] = int.Parse(stringValue[i]);
            if (Value[i] < 2 || Value[i] > 10000)
                throw new ArgumentException("range Error");
        }
        output[0] = (Value[0] + Value[1]) % Value[2];
        output[1] = ((Value[0] % Value[2]) + (Value[1] % Value[2])) % Value[2];
        output[2] = (Value[0] * Value[1]) % Value[2];
        output[3] = ((Value[0] % Value[2]) * (Value[1] % Value[2])) % Value[2];

        foreach (int Out in output)
        {
            Console.Out.WriteLine(Out);
        }
    }
}