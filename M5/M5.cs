using System;

/*
문제
두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
첫째 줄에 A/B를 출력한다. 실제 정답과 출력값의 절대오차 또는 상대오차가 10-9 이하이면 정답이다.
*/
class M5
{
    private string? _input;
    private string[] _inputStrings = new string[2];
    static void Main()
    {
        M5 m5 = new M5();
        m5.run();
    }
    private void run()
    {
        _input = Console.ReadLine();
        if (_input == null)
            throw new ArgumentException("input is null");

        _inputStrings = _input.Split(" ");

        double answer = double.Parse(_inputStrings[0]) / double.Parse(_inputStrings[1]);

        System.Console.Write(answer);
    }
}