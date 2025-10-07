using System;

/*
문제
두 자연수 A와 B가 주어진다. 이때, A+B, A-B, A*B, A/B(몫), A%B(나머지)를 출력하는 프로그램을 작성하시오. 

입력
두 자연수 A와 B가 주어진다. (1 ≤ A, B ≤ 10,000)



출력
첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.
*/
class Program
{
    private string? _input;
    private string[]? _inputString = new string[2];

    private int[] nums = new int[2];
    static void Main()
    {
        Program program = new Program();
        program.run();
    }
    void run()
    {
        _input = Console.ReadLine();
        if (_input == null)
            throw new ArgumentException("input is null");
        _inputString = _input.Split(" ");

        for (int i = 0; i < 2; i++)
        {
            nums[i] = int.Parse(_inputString[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            int result = i switch
            {
                0 => nums[0] + nums[1],
                1 => nums[0] - nums[1],
                2 => nums[0] * nums[1],
                3 => nums[0] / nums[1],
                4 => nums[0] % nums[1],
                _ => throw new ArgumentException("error")
            };
            System.Console.WriteLine(result);
        }
    }
}