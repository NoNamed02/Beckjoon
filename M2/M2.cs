using System;

class M2
{
    static void Main(string[] args)
    {
        int sum = 0;
        int[] nums = new int[2];
        string? input = Console.ReadLine();
        if (input == null)
        {
            throw new ArgumentException("input is null!");
        }
        string[] inputs = input.Split(" ");

        for (int i = 0; i < 2; i++)
        {
            nums[i] = int.Parse(inputs[i]);
            sum += nums[i];
        }
        if (nums[0] <= 0 || nums[1] >= 10)
        {
            throw new ArgumentException("num range error!");
        }

        System.Console.Write(sum);
    }
}