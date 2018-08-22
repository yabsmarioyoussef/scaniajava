public class Main {

    public static void main(String[] args) {
        Wolf wolf = new Wolf("Mario", 23);

        System.out.println("energy of wolf is " + wolf.getEnergy());
        System.out.println("name of wolf is " + wolf.getName());
        System.out.println("age of wolf is " + wolf.getAge());
        System.out.println("Wolf eats fish and now have " + wolf.eat("fish") + " energy");
        wolf.poop();
        wolf.sleep();
        wolf.sleep();
        wolf.hunt();
        System.out.println("wolf have " + wolf.getEnergy() + " energy");
        System.out.println("wolfs time to live is " + wolf.getTTL() + " years");
    }

}
