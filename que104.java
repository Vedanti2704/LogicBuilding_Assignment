// Write a program to count total number of factors of a given number


class Logic
{
    void CountFactors(int iNo)
    {
        int iCnt = 1;
        int iFactorCnt = 0;

        while(iCnt <= iNo)
        {
            if(iNo % iCnt == 0)
            {
                iFactorCnt++;
            }

            iCnt++;
        }

        System.out.println("Total factors are : " + iFactorCnt);
    }
}

class que104
{
    public static void main(String args[])
    {
        Logic obj = new Logic();

        obj.CountFactors(20);
    }
}
