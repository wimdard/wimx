#include <iostream>
#include "fun.cpp"
#include <cstdlib>
#include "fun.h"

void showIntro()
{
    system("echo '\n"
           "▄▄▌ ▐ ▄▌▪  • ▌ ▄ ·. ▐▄• ▄ \n"
           "██· █▌▐███ ·██ ▐███▪ █▌█▌▪\n"
           "██▪▐█▐▐▌▐█·▐█ ▌▐▌▐█· ·██· \n"
           "▐█▌██▐█▌▐█▌██ ██▌▐█▌▪▐█·█▌\n"
           " ▀▀▀▀ ▀▪▀▀▀▀▀  █▪▀▀▀•▀▀ ▀▀' | lolcat --seed=666");
    system("echo '\n"
     "[1]  Sherlock         [2]  Nmap              [3]  Ping             [4]  Metasploit\n"
     "[5]  Site Info        [6]  DNS (MX, ANY)     [7]  Option 7         [8]  Option 8\n"
     "[9]  Option 9         [10] Option 10         [11] Option 11        [12] Option 12\n"
     "[13] Option 13        [14] Option 14         [15] Option 15        [16] Setting' | lolcat --seed=666");

}

void showIntroNmap(){
    system("echo '----------------------   ФУНКЦИИ Nmap   -------------------------'|lolcat --seed=666");
    std::cout << "1)Простое сканирование." << std::endl;
    std::cout << "2)Сканировать диапазона Ip адрессов." << std::endl;
    std::cout << "3)Сканирование всей подсети." << std::endl;
    std::cout << "4)Определение сервисов и их версий." << std::endl;
    std::cout << "5)Полное агресивное сканированеи." << std::endl;
    std::cout << "6)Сканирование конкретного порта." << std::endl;
    std::cout << "7)Сканирование диапозона портов." << std::endl;
    std::cout << "8)Скрытое сканирование (SYN)." << std::endl;
    std::cout << "9)Определение операционной системы." << std::endl;
    std::cout << "10)Полное сканирование портов." << std::endl;
    std::cout << "11)Сканирование без отправки пингов (Для обхода фильров)." << std::endl;
    std::cout << "12)Поиск активных хостов." << std::endl;
    system("echo '-----------------------------------------------------------------'|lolcat --seed=666");

}

int main()
{
    int option;

    showIntro();
    std::cout << "Введите номер опции:";
    std::cin >> option;

    if (option == 1){
        Sherlock();

    }
    else if (option == 2)
    {
        Nmap();
    }
    else if (option == 3)
    {
        Ping();
    }
    else if (option == 4)
    {
        Metasploit();
    }
    else if(option == 5)
    {
        SiteInfo();
    }
    else if(option == 6)
    {
        DNS();
    }
    else if(option == 7)
    {
        nslook();
    }
    else if(option == 8)
    {
        trace();
    }
    else if(option == 9)
    {
        nslook();
    }
    else if(option == 10)
    {
        nslook();
    }
    else if(option == 11)
    {
        nslook();
    }
    else if(option == 12)
    {
        nslook();
    }
    else if(option == 15)
    {
        nslook();
    }
    else if(option == 16)
    {
        nslook();
    }
}