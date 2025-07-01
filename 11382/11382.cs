/*
문제
꼬마 정민이는 이제 A + B 정도는 쉽게 계산할 수 있다. 이제 A + B + C를 계산할 차례이다!

입력
첫 번째 줄에 A, B, C (1 ≤ A, B, C ≤ 1012)이 공백을 사이에 두고 주어진다.

출력
A+B+C의 값을 출력한다.
*/

using System;

class M11382
{
    static void Main()
    {
        long sum = 0;
        string? input = Console.ReadLine();

        if (input == null) throw new ArgumentException("input null");
        long[] value = new long[3];
        value = input.Split(" ").Select(long.Parse).ToArray();
        foreach (long v in value)
        {
            sum += v;
        }

        Console.Write(sum);
    }
}