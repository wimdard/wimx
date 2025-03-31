#include <iostream>
#include <cstdlib>
#include "fun.h"  //заголовочный файл showIntro()

void Sherlock() {
    system("clear");
    std::string username;
    std::cout << "Введите username: ";
    std::cin >> username;
    std::string comand = "sherlock " + username;
    system(comand.c_str());
    std::cout << "\n" << std::endl;
    showIntro();
}

void Nmap() {
    system("clear");
    int option;
    showIntroNmap();
    std::cout << "Введите номер опции Nmap: ";
    std::cin >> option;
    if (option == 1){
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 1   ----------------------'|lolcat --seed=666");
        std::string ip;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        std::string command = "nmap" + ip;
        system(command.c_str());
        std::cout << "\n" << std::endl;
        showIntro();
    }
    else if (option == 2)
    {
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 2   ----------------------'|lolcat --seed=666");
        std::string ip;
        std::string dia;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        std::cout << "Введите Диапозон: ";
        std::cin >> dia;
        std::string ip_dia = ip +"-"+ dia;
        std::string command = "nmap " + ip_dia;
        system(command.c_str());
        std::cout << "\n" << std::endl;
        showIntro();
    }
    else if (option == 3)
    {
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 3   ----------------------'|lolcat --seed=666");
        std::string ip;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        std::string ips = ip.substr(0, ip.length() - 1);
        std::string ip_dia = ips + "0/24";
        std::cout << ip_dia << std::endl;
        std::string command = "nmap " + ip_dia;
        system(command.c_str());
        std::cout << "\n" << std::endl;
        showIntro();
    }
    else if (option == 4)
    {
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 4   ----------------------'|lolcat --seed=666");
        std::string ip;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        std::string command = "nmap -sV " + ip;
        system(command.c_str());
        std::cout << "\n" << std::endl;
        showIntro();
    }
    else if (option == 5)
    {
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 5   ----------------------'|lolcat --seed=666");
        std::string ip;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        std::string command = "nmap -A " + ip;
        system(command.c_str());
        system("echo '================================================================='|lolcat --seed=666");
        std::cout << "\n" << std::endl;
        showIntro();
    }
    else if (option == 6)
    {
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 6   ----------------------'|lolcat --seed=666");
        std::string ip;
        std::string port;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        std::cout << "Введите PORT: ";
        std::cin >> port;
        std::string port_id = port + " " + ip;
        std::cout << port_id << std::endl;
        std::string command = "nmap -p " + port_id;
        system(command.c_str());
        system("echo '================================================================='|lolcat --seed=666");
        std::cout << "\n" << std::endl;
        showIntro();
    }
    else if (option == 7)
    {
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 7   ----------------------'|lolcat --seed=666");
        std::string ip;
        int option_s;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        system("echo '"
               "1)Сканирование всех портов от 1 до 65535.\n"
               "2)Сканирование известных портов 0-1023.\n"
               "3)Сканирование зарегистрированых портов 1024-49151.\n"
               "4)Сканирование динамических портов 49152-65535.\n"
               "5)Сканирование стандартых портов для популярных сервисов.'| lolcat --seed=666");
        system("echo '-----------------------------------------------------------------'|lolcat --seed=666");
        std::cout << "Введите номер диапазона: ";
        std::cin >> option_s;
        system("echo '-----------------------------------------------------------------'|lolcat --seed=666");
        if (option_s == 1) {
            std::string port_id = "1-65535 " + ip;
            std::string command = "nmap -p " + port_id;
            system(command.c_str());
            system("echo '================================================================='|lolcat --seed=666");
            std::cout << "\n"<< std::endl;
        }else if (option_s == 2)
        {
            std::string port_id = "0-1023 " + ip;
            std::string command = "nmap -p " + port_id;
            system(command.c_str());
            system("echo '================================================================='|lolcat --seed=666");
            std::cout << "\n"<< std::endl;
        }
        else if (option_s == 3)
        {
            std::string port_id = "1024-49151 " + ip;
            std::string command = "nmap -p " + port_id;
            system(command.c_str());
            system("echo '================================================================='|lolcat --seed=666");
            std::cout << "\n"<< std::endl;
        }
        else if (option_s == 4)
        {
            std::string port_id = "49151-65535 " + ip;
            std::string command = "nmap -p " + port_id;
            system(command.c_str());
            system("echo '================================================================='|lolcat --seed=666");
            std::cout << "\n"<< std::endl;
        }
        else if (option_s == 5)
        {
            std::string command = "nmap -F " + ip;
            system(command.c_str());
            system("echo '================================================================='|lolcat --seed=666");
            std::cout << "\n"<< std::endl;
        }
        showIntro();
    }
    else if (option == 8)
    {
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 8   ----------------------'|lolcat --seed=666");
        std::string ip;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        std::string command = "nmap -sS " + ip;
        system(command.c_str());
        system("echo '================================================================='|lolcat --seed=666");
        std::cout << "\n" << std::endl;
        showIntro();
    }
    else if (option == 9)
    {
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 9   ----------------------'|lolcat --seed=666");
        std::string ip;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        std::string command = "nmap -O " + ip;
        system(command.c_str());
        system("echo '================================================================='|lolcat --seed=666");
        std::cout << "\n" << std::endl;
        showIntro();
    }
    else if (option == 10)
    {
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 10  ----------------------'|lolcat --seed=666");
        std::string ip;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        std::string command = "nmap -p- " + ip;
        system(command.c_str());
        system("echo '================================================================='|lolcat --seed=666");
        std::cout << "\n" << std::endl;
        showIntro();
    }
    else if (option == 11)
    {
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 11  ----------------------'|lolcat --seed=666");
        std::string ip;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        std::string command = "nmap -Pn " + ip;
        system(command.c_str());
        system("echo '================================================================='|lolcat --seed=666");
        std::cout << "\n" << std::endl;
        showIntro();
    }
    else if (option == 12)
    {
        system("clear");
        system("echo '----------------------   ФУНКЦИЯ НОМЕР 12  ----------------------'|lolcat --seed=666");
        std::string ip;
        std::cout << "Введите IP: ";
        std::cin >> ip;
        std::string ips = ip.substr(0, ip.length() - 1);
        std::string ip_dia = ips + "0/24";
        std::cout << ip_dia << std::endl;
        std::string command = "nmap -sn " + ip_dia;
        system(command.c_str());
        system("echo '================================================================='|lolcat --seed=666");
        std::cout << "\n" << std::endl;
        showIntro();
    }
}

void Ping() {
    system("clear");
    std::string pakets;
    std::string domen;
    std::cout << "Введите domen: ";
    std::cin >> domen;
    std::cout << "Введите сколько пакетов хотите отправить: ";
    std::cin >> pakets;
    std::string pakets_domen = pakets + " " + domen;
    std::string comand = "ping -c " + pakets_domen;
    system(comand.c_str());
    std::cout << "\n" << std::endl;
    showIntro(); // Теперь можно вызвать без проблем
}

void Metasploit() {
    system("clear");
    system("echo 'Wellcome to Metasploit!' | lolcat --seed=666");
    system("/opt/metasploit-framework/bin/msfconsole");
}

void SiteInfo(){
    system("clear");
    std::string id_site;
    std::cout << "Введите домен сайта: ";
    std::cin >> id_site;
    std::string command = "whois " + id_site;
    system(command.c_str());;
    std::cout << "\n" << std::endl;
    showIntro();
}

//Дописать MX, ANY
//dig example.com MX
//dig example.com ANY
void DNS(){
    system("clear");
    std::string id_site;
    std::cout << "Введите домен сайта: ";
    std::cin >> id_site;
    std::string command = "dig " + id_site;
    system(command.c_str());;
    std::cout << "\n" << std::endl;
    showIntro();
}

//Дописать
//nslookup example.com
//nslookup -query=mx example.com
void nslook(){

}

//Дописать
//traceroute example.com
void trace(){

}