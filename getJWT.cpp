#include "headers.h"
string getJWT() {
     /*Создаём http - клиент
    httplib::Client cli("http://localhost:8081");

    // Формируем строку запроса вместе с query string
    auto requestURL = "/getJWT";

    // Выполняем запрос на сервер. Ответ попадёт в переменную response
    auto response = cli.Get(requestURL);
    if (response) {
        if (response->status == 200) {
            // Получаем тело ответа
            std::string JWT = response->body;
            return JWT;
        }
        else {
            std::cout << "Status error: " << response->status << std::endl;
        }
    }
    else {
        auto err = response.error();
        std::cout << "HTTP error: " << httplib::to_string(err) << std::endl;
        return 0;
    }*/
    std::string JWT = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXUyJ9.eyJncm91cCI6IjIzMSgxKW5lY2giLCJ0eXBlIjoicmFzcGlzX3BvbiJ9.asQtWfy1CkedJ28QGqZT6falZ-u-0yXomCjeQoGhKAM";
        return  JWT;
}