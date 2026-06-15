// Write a program to calculate how many even and how many odd numbers are present betwwen 1 and N

class Logic
{
    void CountEvenOdd(int iNo)
    {
        int iCnt = 1;
        int iEvenCnt = 0;
        int iOddCnt = 0;

        while(iCnt <= iNo)
        {
            if(iCnt % 2 == 0)
            {
                iEvenCnt++;
            }
            else
            {
                iOddCnt++;
            }

            iCnt++;
        }

        System.out.println("Even Numbers Count : " + iEvenCnt);
        System.out.println("Odd Numbers Count  : " + iOddCnt);
    }
}

class que102
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.CountEvenOdd(50);
    }
}
