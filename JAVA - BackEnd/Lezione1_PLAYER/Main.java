public class Main {
    public static void main(String[] args) {
        Player p1 = new Player("cristiano", "ronaldo", 7, "20260128");
//        System.out.println(p1.getAbbString());
//
//        System.out.println(p1.newMethod());

        p1.setName("pippO");
        p1.setSurname("forTE");
        p1.setNumber(101);
        p1.setDateOfBth("19980728");

        System.out.println(p1);
    }
}
