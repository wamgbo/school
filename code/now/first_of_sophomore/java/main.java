public class main{

	static void swap(int num,int num2)
	{
		int temp=num;
		num=num2;
		num2=temp;
	}
	public static void main(String args[])
	{
		int num[]=new int[2];
		int num2[]=new int[2];
		num=123;
		num2=321;
		swap(num,num2);
		System.out.print(num+","+num2);

	}
}
