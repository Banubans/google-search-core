#include <iostream>
#include <string>

void renderImageAnswer() {
	std::cout << "[GOOGLE IMAGES]: Наглядная графическая схема процесса:" << std::endl;
	std::cout << "https://habrastorage.org/getpro/habr/upload_files/fa9/ca1/555/fa9ca1555a7678106c431dcb01d7ef.png" << std::endl;
}

void renderTextAnswer() {
 std::cout << "[РЕЗУЛЬТАТ ПОИСКА]: Нажмите :q! для завершения сессии."
<< std::endl;
}

int main() {
 std::string query = "как выйти из vim в 2026 году";
 std::cout << "================ GOOGLE SEARCH CORE ================" <<
std::endl;
 std::cout << "Запрос: \"" << query << "\"" << std::endl;
 std::cout << "----------------------------------------------------" <<
std::endl;
renderTextAnswer();
 std::cout << "----------------------------------------------------" <<
std::endl;
 std::cout << "Найдено результатов: 1 420 000 (за 0.042 сек)" <<
std::endl;
 renderTextAnswer();
 renderImageAnswer();
 return 0;
}
