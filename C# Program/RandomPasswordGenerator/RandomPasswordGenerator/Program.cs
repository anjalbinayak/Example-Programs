using System;
using System.Text;

class RandomPasswordGenerator
{
    static void Main(string[] args)
    {
        Re:
        RandomNumberGenerator generator = new RandomNumberGenerator();
        Console.WriteLine("Press Enter To Generate Random Password.");
        Console.ReadKey();

        string pass = generator.RandomPassword();
        Console.WriteLine($"Random password = {pass}.\n");

        Console.WriteLine("Do you want to generate another password? (Y/N)");
        string ans = Console.ReadLine();
        if (ans == "Y")
        {
            goto Re;

        }

    }
}

public class RandomNumberGenerator
{
    // Generate a random number between two numbers    
    public int RandomNumber(int min, int max)
    {
        Random random = new Random();
        return random.Next(min, max);
    }

    // Generate a random string with a given size and case.   
    // If second parameter is true, the return string is lowercase  
    public string RandomString(int size, bool lowerCase)
    {
        StringBuilder builder = new StringBuilder();
        Random random = new Random();
        char ch;
        for (int i = 0; i < size; i++)
        {
            ch = Convert.ToChar(Convert.ToInt32(Math.Floor(26 * random.NextDouble() + 65)));
            builder.Append(ch);
        }
        if (lowerCase)
            return builder.ToString().ToLower();
        return builder.ToString();
    }
    public string RandomPassword()
    {
        StringBuilder builder = new StringBuilder();
        builder.Append(RandomString(4, true));
        builder.Append(RandomNumber(1000, 9999));
        builder.Append(RandomString(2, false));
        return builder.ToString();
    }
}