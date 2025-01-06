package animals;
public class Animal{
	public void speak(){
		System.out.println("Animal is speaking...");
	}

	public void eat(){
		System.out.println("Animal is eating...");
	}
	
	public void sleep(){
		System.out.println("Animal is sleeping...");
	}

	String name = "Unnamed Animal";
	//需將權限設為public zoo.java才能執行到 Animal的method
}
