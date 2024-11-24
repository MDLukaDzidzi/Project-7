#include <iostream>
#include <string>


int main()
{
    int number;
    
    std::string Django = "1";
    std::string HomeAlone = "2";
    std::string DarksWaters = "3";
    std::string FindingNemo = "4";
    std::string TheEvilDead = "5";


    std::string numbers;
    double num7 = 15;
    double num8 = 12;
    


    std::cout << "****MovieTicketBookings****\n";


    std::cout << "1.Django-Rated R \n";
    std::cout << "2.HomeAlone-Rated PG\n";
    std::cout << "3.DarksWaters-Rated PG-13\n";
    std::cout << "4.FindingNemo-Rated G\n";
    std::cout << "5.The Evil Dead-Rated NC-17 \n";
    std::cout << "please enter the movie you wish to watch via number \n";



   










    int main();
    {
        char choice;
        std::cin >> choice;
        switch (choice)
        {
        case '1': std::cout << " you have chosen Django ";
         
            std::cout << "the Movie you have chosen is 18+ please inform us you're age\n";
            std::cin >> number;
            if (number >= 18)
            {
                std::cout << "you're allowed to watch this movie!";
                std::cout << "How many adult Tickets do you wish to purchase?\n";
                std::cin >> number;
                double result = number * num7;
                std::cout << " the overall price of the ticket is " << result << "$" << std::endl;
                std::cout << "please insert the amount of money you're useing";
                std::cin >> number;
                if (number > result)
                { 
                    std::cout << "Please enjoy the movie!";
                
                }else if(number < result){
                    std::cout << "error not enough money inserted!";
                }
            

            }
            else if (number < 18) {
                std::cout << "you're not allowed to view this movie" << std::endl;
            } return 0;
            break;
        case '2': std::cout << " you have chosen HomeAlone ";
        {
            {
                std::cout << "the Movie you have chosen is rated PG\n";
                std::cout << "how many tickets would you like to purchase For adult?\n";
                std::cin >> number;
                double result = number * num7;
                std::cout << "how many tickets would you like to purchase for a child?\n";
                std::cin >> number; 
                double value = number * num8;

                std::cout << " the overall price of the ticket is " << result << "$ for the adult" << std::endl;
                std::cout << "the overall price of the ticket is " << value << "$ for the Kids" << std::endl;
                double total = result + value;
                std::cout << "the total price is " << total << "$" << std::endl;
                std::cout << "please insert the amount youre paying!\n";
                std::cin >> number;
                if (number < total) {
                    std::cout << "error not enough money inserted!";
                }
                else if (number > total) {
                    std::cout << "please enjoy the movie!";
                }
            }    return 0;
        }
            
        case '3': std::cout << " you have chosen DarksWaters ";
        {
            std::cout << "the movie you have chosen is rated PG-13 Please Confirm you're age to be able to watch this movie \n";
            std::cin >> number;
        } if (number < 13) {
            std::cout << "you aren't allowed to watch this movie";

        }
            else if (number >= 13) {
            std::cout << "you're allowed to watch this movie! \n";
            std::cout << "how many tickets would you like to purchase For adult?\n";
            std::cin >> number;
            double result = number * num7;
            std::cout << "how many tickets would you like to purchase for a child?\n";
            std::cin >> number;
            double value = number * num8;

            std::cout << " the overall price of the ticket is " << result << "$ for the adult" << std::endl;
            std::cout << "the overall price of the ticket is " << value << "$ for the Kids" << std::endl;
            double total = result + value;
            std::cout << "the total price is " << total << "$" << std::endl; 
            std::cout << "please insert the amount youre paying!\n";
            std::cin >> number;
            if (number < total) {
                std::cout << "error not enough money inserted!";
            }
            else if (number > total) {
                std::cout << "please enjoy the movie!";
            }return 0;


        }

            
        case '4': std::cout << " you have chosen FindingNemo ";
        {
            std::cout << "the Movie you have chosen is rated G\n";
            std::cout << "you're allowed to watch this movie\n";
            std::cout << "how many tickets would you like to purchase For adult?\n";
            std::cin >> number;
            double result = number * num7;
            std::cout << "how many tickets would you like to purchase for a child?\n";
            std::cin >> number;
            double value = number * num8;

            std::cout << " the overall price of the ticket is " << result << "$ for the adult" << std::endl;
            std::cout << "the overall price of the ticket is " << value << "$ for the Kids" << std::endl;
            double total = result + value;
            std::cout << "the total price is " << total << "$" << std::endl;
            std::cout << "please insert the amount youre paying!\n";
            std::cin >> number;
            if (number < total) {
                std::cout << "error not enough money inserted!";
            }
            else if (number > total) {
                std::cout << "please enjoy the movie!";
            }
        }    return 0;
            break;
        case '5': std::cout << " you have chosen The Evil Dead ";
            std::cout << "the Movie you have chosen is 17 please inform us you're age\n";
            std::cin >> number;
            if (number >= 17)
            {
                std::cout << "you're allowed to watch this movie!";
                std::cout << "How many adult Tickets do you wish to purchase?\n";
                std::cin >> number;
                double result = number * num7;
                std::cout << " the overall price of the ticket is " << result << "$" << std::endl;
                std::cout << "please insert the amount of money you're useing";
                std::cin >> number;
                if (number > result)
                {
                    std::cout << "Please enjoy the movie!";

                }
                else if (number < result) {
                    std::cout << "error not enough money inserted!";
                }


            }
            else if (number < 17) {
                std::cout << "you're not allowed to view this movie" << std::endl;
            } return 0;
            break;
        
        default: std::cout << " you have chosen nothing ";
            break;

        }

    }

    


       

    
        
     
    
        
    
     


   
       
        


    

    
   
    
    
    return 0;
} 

/*
 * Class: CMSC140 CRN
 * Instructor:
 * Project<number>
 * Description: (Give a brief description for Project)
 * Due Date:
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luka Dzidziguri
*/

