

import java.util.Random;
import java.util.Scanner;

public class Gusseme {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("May I have your name");
        String name = scanner.next();
        while(name==""){
            //we do not have user name
            System.out.println("May I have your name");
             name = scanner.next();
        }

        System.out.println("Welcome=" + name + "Good Afternoon");
        System.out.println("Shall we begin");
        String shouldStart = scanner.next();
        //until the answer is not yes we won't continue
        while(!shouldStart.equals("yes")){
            System.out.println("Shall we begin");
             shouldStart = scanner.next();
        }
        int x = new Random().nextInt(20)+1;
        boolean win = false;
        int timeTried = 0;
        boolean shouldQuit = false;

        while(!shouldQuit){
            if(timeTried>=5){
                shouldQuit = true;
            } else {
                timeTried++;
                System.out.println("Please guess the number:");
                int userInput =scanner.nextInt();

                if(userInput==x) {
                    shouldQuit = true;
                    win = true;
                } else if(userInput>x){
                    System.out.println("Guess lower");
                }else {
                    System.out.println("Guess higher");
                }
            }
        }

        if(win) {
            System.out.println("Congrats ! You have won in your " + timeTried + "try");
        }else{
            System.out.println("Game Over !");
        }

        System.out.println("x was" + x);

    }
}
