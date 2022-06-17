//Write a function that takes an integer i and returns a string with the integer backwards followed by the original integer.

//To illustrate:

//"123"
//We reverse "123" to get "321" and then add "123" to the end, resulting in "321123".

//Examples
//ReverseAndNot(123) ➞ "321123"

//ReverseAndNot(152) ➞ "251152"

//ReverseAndNot(123456789) ➞ "987654321123456789"
//Notes
//i is a non-negative integer.
//Bonus: By using System.Linq this should be completed in one line of code.

namespace ReverseAndNot
{
    using System;
    using System.Collections;

    internal class Reverse_And_Not
    {
        static void Main(string[] args)
        {
            //--------Below just converts user input string to an int to use in the method----------
            Console.WriteLine("Hello. Please input the number to be reversed and then press enter.");

            string input;
            input = Console.ReadLine();

            int inputNumber;
            Int32.TryParse(input, out inputNumber);

            Console.WriteLine("\nThank you. Here is your number reversed and not:");

            // ----------Calling the method here-----------
            Console.WriteLine(doReverseAndNot(inputNumber));

            Console.ReadLine();
        }

        private static string doReverseAndNot(int inputNum)
        {
            Stack<char> numbers = new Stack<char>();

            string str = inputNum.ToString();
            string reversedStr = "";

            for (int i = 0; i < str.Length; i++)
            {
                numbers.Push(str[i]);
            }

            for (int i = 0; i < str.Length; i++)
            {
                string poppedChar = numbers.Pop().ToString();

                reversedStr += poppedChar;
            }

            return reversedStr + str;
        }
    }
}