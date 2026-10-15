// Superclass representing a generic payment option
class Payment {
    protected double amount;

    // Constructor
    public Payment(double amount) {
        this.amount = amount;
    }

    // Method to be overridden by subclasses
    public void processPayment() {
        System.out.println("Processing a generic payment of $" + amount);
    }
}

// Subclass for Credit/Debit Card payments
class CardPayment extends Payment {
    private String cardNumber;
    private String cardHolder;

    // Constructor
    public CardPayment(double amount, String cardNumber, String cardHolder) {
        super(amount); // Initializes the amount in the superclass
        this.cardNumber = cardNumber;
        this.cardHolder = cardHolder;
    }

    // Overriding the processPayment method
    @Override
    public void processPayment() {
        // Masking card number for security display (e.g., ****1234)
        String maskedCard = "**** **** **** " + cardNumber.substring(cardNumber.length() - 4);
        System.out.println("💳 Processing Card Payment...");
        System.out.println("   Holder: " + cardHolder);
        System.out.println("   Card  : " + maskedCard);
        System.out.println("   Status: Success! Charged $" + amount);
    }
}

// Subclass for UPI app payments
class UPIPayment extends Payment {
    private String upiId;

    // Constructor
    public UPIPayment(double amount, String upiId) {
        super(amount); // Initializes the amount in the superclass
        this.upiId = upiId;
    }

    // Overriding the processPayment method
    @Override
    public void processPayment() {
        System.out.println("📱 Processing UPI Payment...");
        System.out.println("   UPI ID: " + upiId);
        System.out.println("   Status: Success! Transferred $" + amount);
    }
}

// Main Driver Class
public class ECommerceApp {
    public static void main(String[] args) {
        System.out.println("--- Welcome to the E-Commerce Checkout --- \n");

        // 1. Declare a Superclass reference variable
        Payment checkoutPayment;

        // 2. Point the superclass reference to a CardPayment object (Polymorphism)
        checkoutPayment = new CardPayment(1250.50, "4321567890123456", "John Doe");
        // Java resolves the method at runtime based on the actual object type
        checkoutPayment.processPayment(); 

        System.out.println("\n-----------------------------------------\n");

        // 3. Point the exact same superclass reference to a UPIPayment object
        checkoutPayment = new UPIPayment(45.00, "alex@okaxis");
        // The exact same method call now executes the UPI behavior
        checkoutPayment.processPayment();
    }
}
