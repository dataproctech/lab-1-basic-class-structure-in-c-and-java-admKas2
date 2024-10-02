public class Car {
    // Attributes
    String make;
    String model;
    int year;
    // Constructor
    public Car(String make, String model, int year){
        this.make = make;
        this.model = model;
        this.year = year;
    }
    // Method to display car information
    public void displayInfo(){
        System.out.println(make + " " + model +  " " + year);
    }

    public static void main(String[] args) {
        // Create a Car object
        Car x = new Car("volkswagen", "golf", 2005);
        // Display car details
        x.displayInfo();
    }
}