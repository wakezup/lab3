#include "input.h"
#include "City.h"
#include "Human.h"
#include "Name.h"
#include "NamedHuman.h"


int main() {
    while (true) {
        std::cout << "\n[МЕНЮ] Выберите задачу:" << std::endl;
        std::cout << "1. Человек" << std::endl;
        std::cout << "2. Имя" << std::endl;
        std::cout << "3. Человек с именем" << std::endl;
        std::cout << "4. Город" << std::endl;
        std::cout << "5. Дробь" << std::endl;
        std::cout << "0. Выход" << std::endl;

        int task = TaskInput("[ВВОД] Введите номер задачи: ", 6);

        switch (task) {
            case 0:
                std::cout << "[ИНФО] Завершение программы..." << std::endl;
                return 0;
            case 1: {
                Human human1("Клеопатра", 152);
                Human human2("Пушкин", 167);
                Human human3("Владимир", 189);

                std::cout << "[РЕЗУЛЬТАТ] Вывод о людях:" << std::endl;
                std::cout << "\t" << human1.print() << std::endl;
                std::cout << "\t" << human2.print() << std::endl;
                std::cout << "\t" << human3.print() << std::endl;

                break;
            }
            case 2: {
                Name name1("Клеопатра");
                Name name2("Пушкин", "Александр", "Сергеевич");
                Name name3("Маяковский", "Владимир");

                std::cout << "[РЕЗУЛЬТАТ] Вывод об именах:" << std::endl;
                std::cout << "\t" << name1.print() << std::endl;
                std::cout << "\t" << name2.print() << std::endl;
                std::cout << "\t" << name3.print() << std::endl;

                break;
            }
            case 3: {
                Name name1("Клеопатра");
                Name name2("Пушкин", "Александр", "Сергеевич");
                Name name3("Маяковский", "Владимир");

                NamedHuman human1(name1, 152);
                NamedHuman human2(name2, 167);
                NamedHuman human3(name3, 189);

                std::cout << "[РЕЗУЛЬТАТ] Вывод о людях с именами:"
                          << std::endl;
                std::cout << "\t" << human1.print() << std::endl;
                std::cout << "\t" << human2.print() << std::endl;
                std::cout << "\t" << human3.print() << std::endl;

                break;
            }
            case 4: {
                City A("A");
                City B("B");
                City C("C");
                City D("D");
                City E("E");
                City F("F");

                A.addPath(B, 5);
                A.addPath(F, 1);
                A.addPath(D, 6);

                B.addPath(A, 5);
                B.addPath(C, 3);

                C.addPath(B, 3);
                C.addPath(D, 4);

                D.addPath(A, 6);
                D.addPath(C, 4);
                D.addPath(E, 2);
                
                E.addPath(F, 2);

                F.addPath(E, 2);
                F.addPath(B, 1);

                std::cout << "[РЕЗУЛЬТАТ] Вывод о городах:" << std::endl;
                std::cout << "\t" << A.print() << std::endl;
                std::cout << "\t" << B.print() << std::endl;
                std::cout << "\t" << C.print() << std::endl;
                std::cout << "\t" << D.print() << std::endl;
                std::cout << "\t" << E.print() << std::endl;
                std::cout << "\t" << F.print() << std::endl;

                break;
            }
            case 5: {
                Fraction f1 = FractionInput("[ВВОД] Первая дробь:");
                Fraction f2 = FractionInput("[ВВОД] Вторая дробь:");
                Fraction f3 = FractionInput("[ВВОД] Третья дробь:");

                Fraction sum = f1 + f2 + f3;
                Fraction difference = f1 - f2 - f3;
                Fraction product = f1 * f2 * f3;
                Fraction quotient = f1 / f2 / f3;
                Fraction result = ((f1 + f2) / f3) - 5;

                std::cout << "[РЕЗУЛЬТАТ] " << f1.print() << " + "
                          << f2.print() << " + " << f3.print() << " = "
                          << sum.print() << std::endl;

                std::cout << "[РЕЗУЛЬТАТ] " << f1.print() << " - "
                          << f2.print() << " - " << f3.print() << " = "
                          << difference.print() << std::endl;

                std::cout << "[РЕЗУЛЬТАТ] " << f1.print() << " * "
                          << f2.print() << " * " << f3.print() << " = "
                          << product.print() << std::endl;

                std::cout << "[РЕЗУЛЬТАТ] " << f1.print() << " / "
                          << f2.print() << " / " << f3.print() << " = "
                          << quotient.print() << std::endl; 

                std::cout << "[РЕЗУЛЬТАТ] ((" << f1.print() << " + "
                          << f2.print() << ") / " << f3.print() << ") - 5 = "
                          << result.print() << std::endl;

                break;
            }
            default:
                break;
        }
    }
}
