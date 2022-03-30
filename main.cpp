#include <stdio.h>
#include <Windows.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <cmath>

using namespace std;

void clrscr()
{
    system("CLS");
}



void Animdrawing() {
    cout << "  0        " << endl;
    cout << " /|\\      " << endl;
    cout << "\\|/       " << endl;
    cout << "  |        " << endl;
    cout << " / \\      " << endl;
    cout << " / \\      " << endl;
    Sleep(100);
    clrscr();
    cout << "  0        " << endl;
    cout << " /|\\      " << endl;
    cout << "\|| \\     " << endl;
    cout << "  |\\      " << endl;
    cout << "  | \\     " << endl;
    cout << "  / /      " << endl;
    Sleep(100);
    clrscr();
    cout << "  0        " << endl;
    cout << " /|\\      " << endl;
    cout << " \||\\     " << endl;
    cout << "  |\\      " << endl;
    cout << "  | \\     " << endl;
    cout << "  / /      " << endl;
    Sleep(100);
    clrscr();
    cout << "  0   /    " << endl;
    cout << " /|\\/     " << endl;
    cout << "/ |        " << endl;
    cout << "  |        " << endl;
    cout << " / \\      " << endl;
    cout << "/   \\     " << endl;
    Sleep(100);
    clrscr();
    cout << "   0       " << endl;
    cout << "\\/|\/\    " << endl;
    cout << "   |       " << endl;
    cout << "   |\\     " << endl;
    cout << "   | \\    " << endl;
    cout << "  /   \\   " << endl;
    Sleep(100);
    clrscr();
    cout << "    0      " << endl;
    cout << " \\/|\/\\  " << endl;
    cout << "    |      " << endl;
    cout << "    |\\    " << endl;
    cout << "    | \\   " << endl;
    cout << "   /   \\  " << endl;
    Sleep(100);
    clrscr();
    cout << "    0 /     " << endl;
    cout << "  /\|\/     " << endl;
    cout << " /  |       " << endl;
    cout << "    |\\     " << endl;
    cout << "    | \\    " << endl;
    cout << "   /   \\   " << endl;
    Sleep(100);
    clrscr();
    cout << " \\ 0       " << endl;
    cout << "  \\|\\     " << endl;
    cout << "    | \\    " << endl;
    cout << "    |\\     " << endl;
    cout << "   / /      " << endl;
    cout << "  / \\      "  << endl;
    Sleep(100);
    clrscr();
    cout << "\\ 0        " << endl;
    cout << " \\|\\      " << endl;
    cout << "   | \\     " << endl;
    cout << "   |\\      " << endl;
    cout << "  / /       " << endl;
    cout << " / \\       " << endl;
    Sleep(100);
    clrscr();
    cout << "   0        " << endl;
    cout << "/\\|\\      " << endl;
    cout << "   | \\     " << endl;
    cout << "   |        " << endl;
    cout << "  / \\      " << endl;
    cout << "  \\ \\     " << endl;
    Sleep(100);
    clrscr();
    cout << "  0         " << endl;
    cout << " /|\\       " << endl;
    cout << "/ | \\      " << endl;
    cout << "  |         " << endl;
    cout << " / \\       " << endl;
    cout << "/   \\      " << endl;
    Sleep(100);
    clrscr();
    cout << "   0        " << endl;
    cout << "  /|\\      " << endl;
    cout << " \\| \\     " << endl;
    cout << "   |\\      " << endl;
    cout << "   | \\     " << endl;
    cout << "  /   \\    " << endl;
    Sleep(100);
    clrscr();
    cout << "   0        " << endl;
    cout << "  /|\\      " << endl;
    cout << " \\|/       " << endl;
    cout << "  |\\       " << endl;
    cout << "  | \\      " << endl;
    cout << "  / /       " << endl;
    Sleep(100);
    clrscr();
    cout << "   0        " << endl;
    cout << "  /|\\      " << endl;
    cout << " \\|/       " << endl;
    cout << "   |        " << endl;
    cout << "  / \\      " << endl;
    cout << " /   \\     " << endl;
    Sleep(100);
    clrscr();
}


bool KEY[256];
void GetKEY()
{
    int i = 0;
    while (i < 256)
    {
        if (GetAsyncKeyState(i)) KEY[i] = 1; else KEY[i] = 0;
        i++;
    }

}

double equationFormula(double x) {
    return x - 2 * exp(-x) - pow(x, 1 / 2);
}

void equationFunc() {
        clrscr();
        float a = 0, b = 0, x = 0, eps = 0;
        cout << "Уравнения половинным делением: " << endl;
        printf("Введите левую границу: ");
        cin >> a;
        printf("Введите правую границу: ");
        cin >> b;
        printf("Введите точность:  ");
        cin >> eps;
        x = (a + b) / 2;

        while (fabs(b-a) > eps) {
            if (equationFormula(x) > 0) {
                b = x;
            }
            else {
                a = x;
            }
            x = (a + b) / 2;

        }
        cout << "|Ответ уравнения половинным делением - " <<  x << "\n";

        cout << "Уравнение методом хорд" << endl;
        printf("Введите левую границу: ");
        cin >> a;
        printf("Введите правую границу: ");
        cin >> b;
        printf("Введите точность:  ");
        cin >> eps;
        while (fabs(b - a) > eps) {
            a = b - (b - a) * equationFormula(b) / (equationFormula(b) - equationFormula(a));
            b = a - (a - b) * equationFormula(a) / (equationFormula(a) - equationFormula(b));
        }
        cout << b << endl;
}

double integralFormula(double x){
    return pow(x, 2) * exp(-x);
}

void integralFunc(){
    float x, a, b, c;
    int i;
    cout << "Интеграл методом прямоугольника: \n";
    cout << "Введите левую границу: ";
    cin >> a;
    cout << "Введите правую границу: ";
    cin >> b;
    cout << "Введите количество дифференциаций: ";
    cin >> c;
    double s = (integralFormula(a)+integralFormula(b)) / 2;
    double h = (b-a) / c;
    for(int j = 1; j <= c-1; j++){
        s += integralFormula(a+j*h);
    }
    double I = h*s;
    cout << I << "\n";

    cout << "Интеграл методом трапеций: \n";
    cout << "Введите левую границу: ";
    cin >> a;
    cout << "Введите правую границу: ";
    cin >> b;
    cout << "Введите количество дифференциаций: ";
    cin >> c;
    double width = (b-a) / c;
    double trapezeIntegral = 0;
    for(int j = 0; j < c; j++){
        double x1 = a + j*width;
        double x2 = a + (j+1)*width;
        trapezeIntegral += 0.5*(x2-x1)*(integralFormula(x1)+integralFormula(x2));
    }
    cout << trapezeIntegral;
}



void menuSwitcher(int menuNumber) {
    if (menuNumber == 1) {
        Sleep(50);
        clrscr();
        cout << "  \n\n\n\t\t\t\t Токушкина Мария  " << endl;
        cout << "  \t\t\t\t Студент Омского государственного технического университета " << endl;
        cout << "  \t\t\t\t группа - ИВТ-212 \n" << endl;
        cout << "  \t\t\t Чтобы вернуться назад - нажмите ESC" << endl;
        while (true) {
            GetKEY();
            if (KEY[27]) {
                return;
            }
        }
        return;
    }
    else if (menuNumber == 2) {
        Sleep(50);
        clrscr();
        while (true) {
            Animdrawing();
            GetKEY();
            if (KEY[27]) {
                return;
            }
        }
        return;
    }
    else if (menuNumber == 3) {
        Sleep(50);
        clrscr();
        cout << "12 laba  " << endl;
        while (true) {
            GetKEY();
            if (KEY[27]) {
                break;
            }
        }
        return;
    }
    else if (menuNumber == 4) {
        equationFunc();
        while (true) {
            GetKEY();
            if (KEY[27]) {
                break;
            }
        }
        return;
    }
    else if (menuNumber == 5) {
        Sleep(50);
        clrscr();
        integralFunc();
        while (true) {
            GetKEY();
            if (KEY[27]) {
                return;
            }
        }

    }
    else if (menuNumber == 6) {
        exit(0);
        return;
    }

}



void menuDrawing(int b) {

    cout << "       \n\n\n\t\t\t\t Меню.                               " << "\n\n";
    printf("        \t\t%s    О авторе.         \n", b == 1 ?      "=>" : " ");
    printf("        \t\t%s    Заставка.              \n", b == 2 ? "=>" : " ");
    printf("        \t\t%s    12 лабораторная.      \n", b == 3 ?  "=>" : " ");
    printf("        \t\t%s    Уравнение.             \n", b == 4 ? "=>" : " ");
    printf("        \t\t%s    Интеграл.             \n", b == 5 ?  "=>" : " ");
    printf("        \t\t%s    Выйти.                 \n", b == 6 ? "=>" : " ");
}

void menuSelector() {
    int input = 1;
    menuDrawing(input);
    bool running = true;
    while (running) {
        GetKEY();
        if (KEY[13]) { //pressed enter
            Sleep(30);
            menuSwitcher(input);
            clrscr();
            Sleep(100);
            break;
        }
        if (KEY[38]){ // pressed down
            input--;
            if (input == 0) {
                input = 6;
            }
            clrscr();
            menuDrawing(input);
            Sleep(60);
        }
        if (KEY[40]){ // pressed up

            input++;
            if (input == 7) {
                input = 1;
            }
            clrscr();
            menuDrawing(input);
            Sleep(60);

        }
    }
}

int main() {
    int b = 1;
    int menuLinkCount = 6;
    system("color D7");
    setlocale(LC_ALL, "Russian");
    bool running = true;
    while (running) {
        menuSelector();
    }
    return 1;
}
