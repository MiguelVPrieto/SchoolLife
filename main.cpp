#include <iostream>
#include <cstdlib>

int main() {
    srand(time(NULL));
    int monday = 0;
    int tuesday = 0;
    int wednesday = 0;
    int thursday = 0;
    int test = 0;
    bool pass = false;
    int understood = 0;
    int understood_counter = 0;
    bool trained = false;
    int train_counter = 0;
    bool cats = false;
    int test_choice;
    bool cheat  = false;
    bool caught = false;
    bool friends = false;
    bool angry = false;
    int mum_choice = 0;
    bool happy = false;

    std::cout << "Welcome to Life Game\n";
    std::cout << "You are a student at Codecademy's International School.\n";
    std::cout << "There is an upcoming c++ test on Friday\n\n\n";

    std::cout << "Its Monday afternoon. There are 4 days for the upcoming test. What will you do?\n\n";
    std::cout << "1. Study For The Test\n";
    std::cout << "2. Train For The Test\n";
    std::cout << "3. Enjoy Your Free Time\n\n\n";
    std::cin >> monday;

    if (monday == 1) {
        int answer = std::rand() % 5;
        if (answer == 0) {
            std::cout << "You study for the test and understand the whole content.\n\n\n";
            understood++;
        } else if (answer == 1) {
            std::cout << "You study for the test and understand part of the content.\n\n\n";
            understood_counter += 5;
        } else if (answer == 2) {
            std::cout << "You study for the test and understand very little of the content.\n\n\n";
            understood_counter++;
        } else if (answer == 3) {
            std::cout << "You study for the test but don't understand the content.\n\n\n";
        } else if (answer == 4) {
            std::cout << "You try to study for the test but is distracted by a cat video popup.\n\n\n";
            understood_counter--;
            cats = true;
        }
    } else if (monday == 2) {
        int answer = std::rand() % 3;
        if (answer == 0) {
            std::cout << "You train for the test and creates a wonderful minigame.\n\n\n";
            understood++;
            trained = true;
        } else if (answer == 1) {
            std::cout << "You train for the test but you aren't able to make your program work.\n\n\n";
            train_counter += 1;
        } else if (answer == 2) {
            std::cout << "You try to train for the test but is distracted by a cat video popup.\n\n\n";
            train_counter--;
            cats = true;
        }
    } else if (monday == 3) {
        std::cout << "You enjoy the rest of your afternoon watch cute cat videos\n\n\n";
        cats = true;
    }

    while (understood_counter >= 10) {
        understood_counter -= 10;
        understood++;
    }

    while (train_counter >= 2) {
        train_counter -= 2;
        trained = true;
    }

    std::cout << "One day has passed.\n";
    std::cout << "Its Tuesday afternoon. There are 3 days for the upcoming test. What will you do?\n\n";
    std::cout << "1. Study For The Test\n";
    std::cout << "2. Train For The Test\n";
    std::cout << "3. Enjoy Your Free Time\n\n\n";
    std::cin >> tuesday;

    if (tuesday == 1) {
        int answer = std::rand() % 5;
        if (answer == 0) {
            std::cout << "You study for the test and understand the whole content.\n\n\n";
            understood++;
        } else if (answer == 1) {
            std::cout << "You study for the test and understand part of the content.\n\n\n";
            understood_counter += 5;
        } else if (answer == 2) {
            std::cout << "You study for the test and understand very little of the content.\n\n\n";
            understood_counter++;
        } else if (answer == 3) {
            std::cout << "You study for the test but don't understand the content.\n\n\n";
        } else if (answer == 4) {
            std::cout << "You try to study for the test but is distracted by a cat video popup.\n\n\n";
            understood_counter--;
            cats = true;
        }
    } else if (tuesday == 2) {
        int answer = std::rand() % 3;
        if (answer == 0) {
            std::cout << "You train for the test and creates a wonderful minigame.\n\n\n";
            understood++;
            trained = true;
        } else if (answer == 1) {
            std::cout << "You train for the test but you aren't able to make your program work.\n\n\n";
            train_counter += 1;
        } else if (answer == 2) {
            std::cout << "You try to train for the test but is distracted by a cat video popup.\n\n\n";
            train_counter--;
            cats = true;
        }
    } else if (tuesday == 3) {
        std::cout << "You enjoy the rest of your afternoon watch cute cat videos\n\n\n";
        cats = true;
    }

    while (understood_counter >= 10) {
        understood_counter -= 10;
        understood++;
    }

    while (train_counter >= 2) {
        train_counter -= 2;
        trained = true;
    }

    std::cout << "One day has passed.\n";
    std::cout << "Its Wednesday afternoon. There are 2 days for the upcoming test. What will you do?\n\n";
    std::cout << "1. Study For The Test\n";
    std::cout << "2. Train For The Test\n";
    std::cout << "3. Enjoy Your Free Time\n\n\n";
    std::cin >> wednesday;

    if (wednesday == 1) {
        int answer = std::rand() % 5;
        if (answer == 0) {
            std::cout << "You study for the test and understand the whole content.\n\n\n";
            understood++;
        } else if (answer == 1) {
            std::cout << "You study for the test and understand part of the content.\n\n\n";
            understood_counter += 5;
        } else if (answer == 2) {
            std::cout << "You study for the test and understand very little of the content.\n\n\n";
            understood_counter++;
        } else if (answer == 3) {
            std::cout << "You study for the test but don't understand the content.\n\n\n";
        } else if (answer == 4) {
            std::cout << "You try to study for the test but is distracted by a cat video popup.\n\n\n";
            understood_counter--;
            cats = true;
        }
    } else if (wednesday == 2) {
        int answer = std::rand() % 3;
        if (answer == 0) {
            std::cout << "You train for the test and creates a wonderful minigame.\n\n\n";
            understood++;
            trained = true;
        } else if (answer == 1) {
            std::cout << "You train for the test but you aren't able to make your program work.\n\n\n";
            train_counter += 1;
        } else if (answer == 2) {
            std::cout << "You try to train for the test but is distracted by a cat video popup.\n\n\n";
            train_counter--;
            cats = true;
        }
    } else if (wednesday == 3) {
        std::cout << "You enjoy the rest of your afternoon watch cute cat videos\n\n\n";
        cats = true;
    }

    while (understood_counter >= 10) {
        understood_counter -= 10;
        understood++;
    }

    while (train_counter >= 2) {
        train_counter -= 2;
        trained = true;
    }

    std::cout << "One day has passed.\n";
    std::cout << "Its Thursday afternoon. Tomorrow is the test! What will you do?\n\n";
    std::cout << "1. Study For The Test\n";
    std::cout << "2. Train For The Test\n";
    std::cout << "3. Enjoy Your Free Time\n\n\n";
    std::cin >> thursday;

    if (thursday == 1) {
        int answer = std::rand() % 5;
        if (answer == 0) {
            std::cout << "You study for the test and understand the whole content.\n\n\n";
            understood++;
        } else if (answer == 1) {
            std::cout << "You study for the test and understand part of the content.\n\n\n";
            understood_counter += 5;
        } else if (answer == 2) {
            std::cout << "You study for the test and understand very little of the content.\n\n\n";
            understood_counter++;
        } else if (answer == 3) {
            std::cout << "You study for the test but don't understand the content.\n\n\n";
        } else if (answer == 4) {
            std::cout << "You try to study for the test but is distracted by a cat video popup.\n\n\n";
            understood_counter--;
            cats = true;
        }
    } else if (thursday == 2) {
        int answer = std::rand() % 3;
        if (answer == 0) {
            std::cout << "You train for the test and creates a wonderful minigame.\n\n\n";
            understood++;
            trained = true;
        } else if (answer == 1) {
            std::cout << "You train for the test but you aren't able to make your program work.\n\n\n";
            train_counter += 1;
        } else if (answer == 2) {
            std::cout << "You try to train for the test but is distracted by a cat video popup.\n\n\n";
            train_counter--;
            cats = true;
        }
    } else if (thursday == 3) {
        std::cout << "You enjoy the rest of your afternoon watch cute cat videos\n\n\n";
        cats = true;
    }

    while (understood_counter >= 10) {
        understood_counter -= 10;
        understood++;
    }

    while (train_counter >= 2) {
        train_counter -= 2;
        trained = true;
    }

    std::cout << "One day has passed.\n";
    std::cout << "Today is the test. What are you gonna do?\n\n";
    std::cout << "1. Try Your Best\n";
    std::cout << "2. Cheat\n";
    std::cout << "3. Write Anything\n";
    std::cout << "4. Ignore The Test\n";
    std::cin >> test_choice;

    if (test_choice == 1) {
        int answer = std::rand() % 7;
        if (answer == 0 && understood >= 2 && trained == true) {
            std::cout << "You try your best and get a 10 on the test!!\n\n\n";
            pass = true;
            test = 10;
            cheat = false;
        } else if (answer == 1 && understood >= 1 && trained == true) {
            std::cout << "You try your best and get a 9 on the test!!\n\n\n";
            pass = true;
            test = 9;
            cheat = false;
        } else if (answer == 2 && understood >= 1) {
            std::cout << "You try your best and get a 8 on the test!!\n\n\n";
            pass = true;
            test = 8;
            cheat = false;
        } else if (answer == 3) {
            std::cout << "You try your best and get a 7 on the test.\n\n\n";
            pass = true;
            test = 7;
            cheat = false;
        } else if (answer == 4) {
            std::cout << "You try your best and get a 6 on the test.\n\n\n";
            pass = true;
            test = 6;
            cheat = false;
        } else if (answer == 5) {
            std::cout << "You try your best and get a 5 on the test.\n\n\n";
            pass = true;
            test = 5;
            cheat = false;
        } else if (answer == 6) {
            std::cout << "You try your best but fail the test. :(\n\n\n";
            pass = false;
            test = 0;
            cheat = false;
        }
    } else if (test_choice == 2) {
        int answer = std::rand() % 10;
        if (answer == 0) {
            std::cout << "You cheat from your friend and get a 10 on the test!!\n\n\n";
            pass = true;
            test = 10;
            cheat = true;
        } else if (answer == 1) {
            std::cout << "You cheat from your friend and get a 9 on the test!!\n\n\n";
            pass = true;
            test = 9;
            cheat = true;
        } else if (answer == 2) {
            std::cout << "You cheat from your friend and get a 8 on the test!!\n\n\n";
            pass = true;
            test = 8;
            cheat = true;
        } else if (answer == 3) {
            std::cout << "You cheat from your friend and get a 7 on the test.\n\n\n";
            pass = true;
            test = 7;
            cheat = true;
        } else if (answer == 4) {
            std::cout << "You cheat from your friend and get a 6 on the test.\n\n\n";
            pass = true;
            test = 6;
            cheat = true;
        } else if (answer == 5) {
            std::cout << "You cheat from your friend and get a 5 on the test.\n\n\n";
            pass = true;
            test = 5;
            cheat = true;
        } else if (answer == 6) {
            std::cout << "You cheat from your friend but you still fail the test. :(\n\n\n";
            pass = false;
            test = 0;
            cheat = true;
        } else if (answer == 7) {
            std::cout << "You cheat from your friend but your teacher sees you. She fails you.\n\n\n";
            pass = false;
            test = 0;
            cheat = true;
            caught = true;
        } else if (answer == 8) {
            std::cout << "You cheat from your friend but your teacher notices your test is the same as his. She fails you and your friend.\n\n\n";
            pass = false;
            test = 0;
            cheat = true;
            caught = true;
            friends = true;
        } else if (answer == 9) {
            std::cout << "You try to cheat from your friend but he snitches you to the teacher. She fails you and gives extra marks for your friend.\n\n\n";
            pass = false;
            test = 0;
            cheat = true;
            caught = true;
            angry = true;
        }
    } else if (test_choice == 3) {
        int answer = std::rand() % 2;
        if (answer == 0 & cats == true) {
            std::cout << "Your teacher asks you why you wrote everything in cat language. She gives you a 10 as she can't understand what you wrote but believes you must be correct.\n";
            std::cout << "She also asks you if you can teach her to talk with cats.\n\n\n";
            pass = true;
            test = 10;
            cheat = false;
            caught = false;
            angry = false;
        } else {
            std::cout << "Your teacher doesn't understand what you wrote. She fails you.\n\n\n";
            pass = false;
            test = NULL;
            cheat = false;
            caught = false;
            angry = false;
        }
    } else if (test_choice == 4) {
        std::cout << "You leave your test in blank. Your teacher fails you.\n\n\n";
        pass = false;
        test = NULL;
        cheat = false;
        caught = false;
        angry = false;
    }

    std::cout << "Its midday. School just finished. You arrive home and your mother asks you about the test.\n";
    std::cout << "What are you gonna do?\n\n";
    std::cout << "1. Tell her the truth\n";
    std::cout << "2. LIE\n";
    std::cin >> mum_choice;

    if (mum_choice == 1) {
        if (cheat == false) {
            if (test == 10) {
                std::cout << "You told your mum you got a 10!\n";
                std::cout << "She says she is very proud of you and prepares your favorite food for lunch!\n\n\n";
                happy = true;
            } else if (test == 9) {
                std::cout << "You told your mum you got a 9!\n";
                std::cout << "She says you should have worked harder to get a 10 and that you are stupid.\n\n\n";
            } else if (test == 8) {
                std::cout << "You told your mum you got a 8!\n";

            } else if (test == 7) {
                std::cout << "You told your mum you got a 7.\n";

            } else if (test == 6) {
                std::cout << "You told your mum you got a 6.\n";

            } else if (test == 5) {
                std::cout << "You told your mum you got a 5.\n";

            } else if (test == 0) {
                std::cout << "You told your mum you failed.\n";

            } else if (test == NULL) {
                std::cout << "You told your mum the teacher didn't give you a grade.\n";

            }
        } else if (cheat == true) {
            if (test == 10) {

            } else if (test == 9) {

            } else if (test == 8) {

            } else if (test == 7) {

            } else if (test == 6) {

            } else if (test == 5) {

            } else if (test == 0) {

            } else if (test == NULL) {

            }
        }
        if (caught == true) {

        }

    }
    // finish whole mum code

    // make extra endings code
}