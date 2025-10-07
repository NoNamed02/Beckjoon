/*
문제
(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.


(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가, 둘째 줄에 (2)의 위치에 들어갈 세자리 자연수가 주어진다.



출력
첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.
*/

using System;

class M2588
{
    static void Main()
    {
        int[] input = new int[2];
        int[] output = new int[4];

        for (int i = 0; i < 2; i++)
        {
            string? tempInput = Console.ReadLine();
            if (tempInput == null) throw new ArgumentException("input null");
            input[i] = int.Parse(tempInput);
        }
        for (int i = 0; i < 3; i++)
        {
            output[i] = input[0] * ((input[1] / (int)Math.Pow(10, i)) % 10);
        }
        for (int i = 0; i < 3; i++)
        {
            int digitValue = (int)Math.Pow(10, i);
            output[3] += output[i]*digitValue;
        }

        foreach (int Out in output)
                Console.WriteLine(Out);
    }
}