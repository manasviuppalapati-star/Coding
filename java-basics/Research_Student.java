class Student
{
	protected int StudentId;
	protected String name;
	Student(int StudentId, String name)
	{
	    this.StudentId = StudentId;
	    this.name =  name;
	}
	
	void displayDetails()
	{
		System.out.println(StudentId);
		System.out.println(name);
	}
}




public class Research_Student extends Student{
	String topic;

	public Research_Student(int StudentId,String name, String topic) {
		super(StudentId,name);
		this.topic = topic;	
	}
	
	void display()
	{
		super.displayDetails();
		System.out.println(topic);
	}

	public static void main(String[] args) {
		Student s1 = new Student(101,"Manasvi");
		s1.displayDetails();
		
		System.out.println();
		
		Research_Student r1 = new Research_Student(102,"manu","Quantum");
		r1.display();
		

	}

}
