import java.util.Random;

public class Wolf implements Animal {

    private String name;
    private int age, energy;

    public Wolf(String n, int a) {
        name = n;
        age = a;
        energy = 20;
    }

    public String eat(String foodType) {
        if (foodType.equals("fish"))
            energy += 25;
        else if (foodType.equals("sheep"))
            energy += 35;
        else if (foodType.equals("human"))
            energy += 50;
        else
            energy += 10;

        return "new energy is " + energy;
    }

    public void poop() {
        energy -= 10;
    }

    public String hunt() {
        energy -= 25;
        Random rand = new Random();
        if (rand.nextInt() % 2 == 0) {
            System.out.println("successful");
            energy += 15;
            return "Successful hunt";
        }
        return "unsuccessful hunt";
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    private int calculateTTL() {
        return ((2 * energy) / age);
    }

    public int getEnergy() {
        return energy;
    }

    public int getTTL() {
        return calculateTTL();
    }

    @Override
    public void sleep() {
        energy += 15;
    }

}