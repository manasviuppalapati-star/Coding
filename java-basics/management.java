// Abstract superclass representing a generic employee
abstract class Employee {
    protected int empId;
    protected String name;

    // Constructor to initialize base employee fields
    public Employee(int empId, String name) {
        this.empId = empId;
        this.name = name;
    }

    // Abstract method: Has no body and MUST be implemented by subclasses
    public abstract void calculateSalary();

    // Regular concrete method shared by all subclasses
    public void displayDetails() {
        System.out.println("Employee ID : " + empId);
        System.out.println("Name        : " + name);
    }
}

// Subclass for Permanent Employees
class PermanentEmployee extends Employee {
    private double monthlySalary;
    private double bonus;

    public PermanentEmployee(int empId, String name, double monthlySalary, double bonus) {
        super(empId, name);
        this.monthlySalary = monthlySalary;
        this.bonus = bonus;
    }

    @Override
    public void calculateSalary() {
        double totalSalary = monthlySalary + bonus;
        super.displayDetails(); 
        System.out.println("Type        : Permanent Employee");
        System.out.println("Net Salary  : $" + totalSalary);
    }
}

// Subclass for Contractual/Hourly Employees
class ContractEmployee extends Employee {
    private double hourlyRate;
    private int hoursWorked;

    public ContractEmployee(int empId, String name, double hourlyRate, int hoursWorked) {
        super(empId, name);
        this.hourlyRate = hourlyRate;
        this.hoursWorked = hoursWorked;
    }

    @Override
    public void calculateSalary() {
        double totalSalary = hourlyRate * hoursWorked;
        super.displayDetails(); 
        System.out.println("Type        : Contract Employee");
        System.out.println("Net Salary  : $" + totalSalary);
    }
}

// Main Driver Class matching your requested name
public class management {

    public management() {
        // Constructor block
    }

    public static void main(String[] args) {
        System.out.println("=== Corporate Payroll Management System ===\n");

        // 1. Using a superclass reference to run a PermanentEmployee object
        Employee emp1 = new PermanentEmployee(101, "Alice Jones", 5000.0, 800.0);
        emp1.calculateSalary(); 

        System.out.println("\n-------------------------------------------\n");

        // 2. Using the same superclass reference pattern to run a ContractEmployee object
        Employee emp2 = new ContractEmployee(202, "Bob Smith", 45.0, 120);
        emp2.calculateSalary(); 
    }
}
