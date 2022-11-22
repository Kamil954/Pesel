namespace Pesel;
class Program
{
    static void Main(string[] args)
    {

        string[] lines = System.IO.File.ReadAllLines(@"/Users/kamilkozik/Downloads/pesel.txt");
        long[] arr = Array.ConvertAll(lines, long.Parse);
       
        // a)
        Console.WriteLine("Pesel task a)");

        int BornInDecember = 0;

        foreach (long pesel in arr)
        {
            long a = (pesel/ 100000000) % 10;
            long b = (pesel / 10000000) % 10;

            if (a==1 && b==2)
            {
                BornInDecember += 1;
            }
        }
       
        Console.WriteLine("Number of poeple born in december: " + BornInDecember);


        
    }
}

