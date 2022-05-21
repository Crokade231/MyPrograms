import java.lang.*;


class Summation
{
	public int Sum(int iNo)       
	{
		int iCnt = 0;
		int iAdd = 0;

		if(iNo<0)
		{
			iNo = -iNo;
		}

		for(iCnt = 1; iCnt <= iNo; iCnt++)
		{
			iAdd = iAdd + iCnt;
		}
	
		return iAdd;
	}
}

class program23
{
	public static void main (String arr[])
	{
		int iValue = 5;
		int iRet = 0;

		Summation sobj = new Summation();
		iRet = sobj.Sum(iValue);

		System.out.println(iRet);

	}
}