//write a program to print all even numbers up to n

class Logic
{
    void PrintEvenNumber(int num)
    {
         for(int i = 1; i <= num; i++)
        {
            if(i % 2 == 0)
            {
                System.out.print(i + " ");
            }
        }
    }
    
        
}

class que87
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.PrintEvenNumber(20);
    }
}