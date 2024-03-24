#include <iostream>
#include <cstdio> // Для использования функции puts()

int main() {
    // Указываем информацию о группе, номере и составе команды
    const char* group = "Группа: ПИН-35";
    const char* team_number = "Номер команды: 12";
    const char* team_members[] = {
        "Ле Куанг Хыи",
        "Нгуен Конг Тханг",
        "Лыонг Минь Чи"
    };

    // Выводим информацию на стандартный вывод при помощи puts()
    std::puts(group);
    std::puts(team_number);
    
    // Выводим список участников команды
    std::puts("Состав команды:");
    for (const auto& member : team_members) {
        std::puts(member);
    }

    return 0;
}
