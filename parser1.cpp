#include <xlnt/xlnt.hpp>
#include <httplib.h>
#include <iostream>
#include <string>
#include <Windows.h>


using namespace httplib;









//ПАРСЕР!!!!

   //231(1) чет 


// Функция которая будет вызвана обработчиком, когда придёт запрос
void handler(const Request& req, Response& res) {
    SetConsoleOutputCP(65001);
    xlnt::workbook wb;
    wb.load("raspis.xlsx");
    auto ws = wb.active_sheet();
   


    std::string  predmet_pon_1_231_1_nech, predmet_pon_2_231_1_nech, predmet_pon_3_231_1_nech, predmet_pon_4_231_1_nech, predmet_pon_5_231_1_nech, predmet_pon_6_231_1_nech, predmet_pon_7_231_1_nech;
    std::string  predmet_vt_1_231_1_nech, predmet_vt_2_231_1_nech, predmet_vt_3_231_1_nech, predmet_vt_4_231_1_nech, predmet_vt_5_231_1_nech, predmet_vt_6_231_1_nech, predmet_vt_7_231_1_nech;
    std::string  predmet_sr_1_231_1_nech, predmet_sr_2_231_1_nech, predmet_sr_3_231_1_nech, predmet_sr_4_231_1_nech, predmet_sr_5_231_1_nech, predmet_sr_6_231_1_nech, predmet_sr_7_231_1_nech;
    std::string  predmet_ch_1_231_1_nech, predmet_ch_2_231_1_nech, predmet_ch_3_231_1_nech, predmet_ch_4_231_1_nech, predmet_ch_5_231_1_nech, predmet_ch_6_231_1_nech, predmet_ch_7_231_1_nech;
    std::string  predmet_pt_1_231_1_nech, predmet_pt_2_231_1_nech, predmet_pt_3_231_1_nech, predmet_pt_4_231_1_nech, predmet_pt_5_231_1_nech, predmet_pt_6_231_1_nech, predmet_pt_7_231_1_nech;


    std::string aud_pon_1_231_1_nech, aud_pon_2_231_1_nech, aud_pon_3_231_1_nech, aud_pon_4_231_1_nech, aud_pon_5_231_1_nech, aud_pon_6_231_1_nech, aud_pon_7_231_1_nech;
    std::string aud_vt_1_231_1_nech, aud_vt_2_231_1_nech, aud_vt_3_231_1_nech, aud_vt_4_231_1_nech, aud_vt_5_231_1_nech, aud_vt_6_231_1_nech, aud_vt_7_231_1_nech;
    std::string aud_sr_1_231_1_nech, aud_sr_2_231_1_nech, aud_sr_3_231_1_nech, aud_sr_4_231_1_nech, aud_sr_5_231_1_nech, aud_sr_6_231_1_nech, aud_sr_7_231_1_nech;
    std::string aud_ch_1_231_1_nech, aud_ch_2_231_1_nech, aud_ch_3_231_1_nech, aud_ch_4_231_1_nech, aud_ch_5_231_1_nech, aud_ch_6_231_1_nech, aud_ch_7_231_1_nech;
    std::string aud_pt_1_231_1_nech, aud_pt_2_231_1_nech, aud_pt_3_231_1_nech, aud_pt_4_231_1_nech, aud_pt_5_231_1_nech, aud_pt_6_231_1_nech, aud_pt_7_231_1_nech;


    std::string prepod_pon_1_231_1_nech, prepod_pon_2_231_1_nech, prepod_pon_3_231_1_nech, prepod_pon_4_231_1_nech, prepod_pon_5_231_1_nech, prepod_pon_6_231_1_nech, prepod_pon_7_231_1_nech;
    std::string prepod_vt_1_231_1_nech, prepod_vt_2_231_1_nech, prepod_vt_3_231_1_nech, prepod_vt_4_231_1_nech, prepod_vt_5_231_1_nech, prepod_vt_6_231_1_nech, prepod_vt_7_231_1_nech;
    std::string prepod_sr_1_231_1_nech, prepod_sr_2_231_1_nech, prepod_sr_3_231_1_nech, prepod_sr_4_231_1_nech, prepod_sr_5_231_1_nech, prepod_sr_6_231_1_nech, prepod_sr_7_231_1_nech;
    std::string prepod_ch_1_231_1_nech, prepod_ch_2_231_1_nech, prepod_ch_3_231_1_nech, prepod_ch_4_231_1_nech, prepod_ch_5_231_1_nech, prepod_ch_6_231_1_nech, prepod_ch_7_231_1_nech;
    std::string prepod_pt_1_231_1_nech, prepod_pt_2_231_1_nech, prepod_pt_3_231_1_nech, prepod_pt_4_231_1_nech, prepod_pt_5_231_1_nech, prepod_pt_6_231_1_nech, prepod_pt_7_231_1_nech;


    //231(2)нечет
    std::string  predmet_pon_1_231_2_nech, predmet_pon_2_231_2_nech, predmet_pon_3_231_2_nech, predmet_pon_4_231_2_nech, predmet_pon_5_231_2_nech, predmet_pon_6_231_2_nech, predmet_pon_7_231_2_nech;
    std::string  predmet_vt_1_231_2_nech, predmet_vt_2_231_2_nech, predmet_vt_3_231_2_nech, predmet_vt_4_231_2_nech, predmet_vt_5_231_2_nech, predmet_vt_6_231_2_nech, predmet_vt_7_231_2_nech;
    std::string  predmet_sr_1_231_2_nech, predmet_sr_2_231_2_nech, predmet_sr_3_231_2_nech, predmet_sr_4_231_2_nech, predmet_sr_5_231_2_nech, predmet_sr_6_231_2_nech, predmet_sr_7_231_2_nech;
    std::string  predmet_ch_1_231_2_nech, predmet_ch_2_231_2_nech, predmet_ch_3_231_2_nech, predmet_ch_4_231_2_nech, predmet_ch_5_231_2_nech, predmet_ch_6_231_2_nech, predmet_ch_7_231_2_nech;
    std::string  predmet_pt_1_231_2_nech, predmet_pt_2_231_2_nech, predmet_pt_3_231_2_nech, predmet_pt_4_231_2_nech, predmet_pt_5_231_2_nech, predmet_pt_6_231_2_nech, predmet_pt_7_231_2_nech;


    std::string aud_pon_1_231_2_nech, aud_pon_2_231_2_nech, aud_pon_3_231_2_nech, aud_pon_4_231_2_nech, aud_pon_5_231_2_nech, aud_pon_6_231_2_nech, aud_pon_7_231_2_nech;
    std::string aud_vt_1_231_2_nech, aud_vt_2_231_2_nech, aud_vt_3_231_2_nech, aud_vt_4_231_2_nech, aud_vt_5_231_2_nech, aud_vt_6_231_2_nech, aud_vt_7_231_2_nech;
    std::string aud_sr_1_231_2_nech, aud_sr_2_231_2_nech, aud_sr_3_231_2_nech, aud_sr_4_231_2_nech, aud_sr_5_231_2_nech, aud_sr_6_231_2_nech, aud_sr_7_231_2_nech;
    std::string aud_ch_1_231_2_nech, aud_ch_2_231_2_nech, aud_ch_3_231_2_nech, aud_ch_4_231_2_nech, aud_ch_5_231_2_nech, aud_ch_6_231_2_nech, aud_ch_7_231_2_nech;
    std::string aud_pt_1_231_2_nech, aud_pt_2_231_2_nech, aud_pt_3_231_2_nech, aud_pt_4_231_2_nech, aud_pt_5_231_2_nech, aud_pt_6_231_2_nech, aud_pt_7_231_2_nech;


    std::string prepod_pon_1_231_2_nech, prepod_pon_2_231_2_nech, prepod_pon_3_231_2_nech, prepod_pon_4_231_2_nech, prepod_pon_5_231_2_nech, prepod_pon_6_231_2_nech, prepod_pon_7_231_2_nech;
    std::string prepod_vt_1_231_2_nech, prepod_vt_2_231_2_nech, prepod_vt_3_231_2_nech, prepod_vt_4_231_2_nech, prepod_vt_5_231_2_nech, prepod_vt_6_231_2_nech, prepod_vt_7_231_2_nech;
    std::string prepod_sr_1_231_2_nech, prepod_sr_2_231_2_nech, prepod_sr_3_231_2_nech, prepod_sr_4_231_2_nech, prepod_sr_5_231_2_nech, prepod_sr_6_231_2_nech, prepod_sr_7_231_2_nech;
    std::string prepod_ch_1_231_2_nech, prepod_ch_2_231_2_nech, prepod_ch_3_231_2_nech, prepod_ch_4_231_2_nech, prepod_ch_5_231_2_nech, prepod_ch_6_231_2_nech, prepod_ch_7_231_2_nech;
    std::string prepod_pt_1_231_2_nech, prepod_pt_2_231_2_nech, prepod_pt_3_231_2_nech, prepod_pt_4_231_2_nech, prepod_pt_5_231_2_nech, prepod_pt_6_231_2_nech, prepod_pt_7_231_2_nech;

    //232(1)нечет

    std::string  predmet_pon_1_232_1_nech, predmet_pon_2_232_1_nech, predmet_pon_3_232_1_nech, predmet_pon_4_232_1_nech, predmet_pon_5_232_1_nech, predmet_pon_6_232_1_nech, predmet_pon_7_232_1_nech;
    std::string  predmet_vt_1_232_1_nech, predmet_vt_2_232_1_nech, predmet_vt_3_232_1_nech, predmet_vt_4_232_1_nech, predmet_vt_5_232_1_nech, predmet_vt_6_232_1_nech, predmet_vt_7_232_1_nech;
    std::string  predmet_sr_1_232_1_nech, predmet_sr_2_232_1_nech, predmet_sr_3_232_1_nech, predmet_sr_4_232_1_nech, predmet_sr_5_232_1_nech, predmet_sr_6_232_1_nech, predmet_sr_7_232_1_nech;
    std::string  predmet_ch_1_232_1_nech, predmet_ch_2_232_1_nech, predmet_ch_3_232_1_nech, predmet_ch_4_232_1_nech, predmet_ch_5_232_1_nech, predmet_ch_6_232_1_nech, predmet_ch_7_232_1_nech;
    std::string  predmet_pt_1_232_1_nech, predmet_pt_2_232_1_nech, predmet_pt_3_232_1_nech, predmet_pt_4_232_1_nech, predmet_pt_5_232_1_nech, predmet_pt_6_232_1_nech, predmet_pt_7_232_1_nech;


    std::string aud_pon_1_232_1_nech, aud_pon_2_232_1_nech, aud_pon_3_232_1_nech, aud_pon_4_232_1_nech, aud_pon_5_232_1_nech, aud_pon_6_232_1_nech, aud_pon_7_232_1_nech;
    std::string aud_vt_1_232_1_nech, aud_vt_2_232_1_nech, aud_vt_3_232_1_nech, aud_vt_4_232_1_nech, aud_vt_5_232_1_nech, aud_vt_6_232_1_nech, aud_vt_7_232_1_nech;
    std::string aud_sr_1_232_1_nech, aud_sr_2_232_1_nech, aud_sr_3_232_1_nech, aud_sr_4_232_1_nech, aud_sr_5_232_1_nech, aud_sr_6_232_1_nech, aud_sr_7_232_1_nech;
    std::string aud_ch_1_232_1_nech, aud_ch_2_232_1_nech, aud_ch_3_232_1_nech, aud_ch_4_232_1_nech, aud_ch_5_232_1_nech, aud_ch_6_232_1_nech, aud_ch_7_232_1_nech;
    std::string aud_pt_1_232_1_nech, aud_pt_2_232_1_nech, aud_pt_3_232_1_nech, aud_pt_4_232_1_nech, aud_pt_5_232_1_nech, aud_pt_6_232_1_nech, aud_pt_7_232_1_nech;


    std::string prepod_pon_1_232_1_nech, prepod_pon_2_232_1_nech, prepod_pon_3_232_1_nech, prepod_pon_4_232_1_nech, prepod_pon_5_232_1_nech, prepod_pon_6_232_1_nech, prepod_pon_7_232_1_nech;
    std::string prepod_vt_1_232_1_nech, prepod_vt_2_232_1_nech, prepod_vt_3_232_1_nech, prepod_vt_4_232_1_nech, prepod_vt_5_232_1_nech, prepod_vt_6_232_1_nech, prepod_vt_7_232_1_nech;
    std::string prepod_sr_1_232_1_nech, prepod_sr_2_232_1_nech, prepod_sr_3_232_1_nech, prepod_sr_4_232_1_nech, prepod_sr_5_232_1_nech, prepod_sr_6_232_1_nech, prepod_sr_7_232_1_nech;
    std::string prepod_ch_1_232_1_nech, prepod_ch_2_232_1_nech, prepod_ch_3_232_1_nech, prepod_ch_4_232_1_nech, prepod_ch_5_232_1_nech, prepod_ch_6_232_1_nech, prepod_ch_7_232_1_nech;
    std::string prepod_pt_1_232_1_nech, prepod_pt_2_232_1_nech, prepod_pt_3_232_1_nech, prepod_pt_4_232_1_nech, prepod_pt_5_232_1_nech, prepod_pt_6_232_1_nech, prepod_pt_7_232_1_nech;


    //232(2)нечет
    std::string  predmet_pon_1_232_2_nech, predmet_pon_2_232_2_nech, predmet_pon_3_232_2_nech, predmet_pon_4_232_2_nech, predmet_pon_5_232_2_nech, predmet_pon_6_232_2_nech, predmet_pon_7_232_2_nech;
    std::string  predmet_vt_1_232_2_nech, predmet_vt_2_232_2_nech, predmet_vt_3_232_2_nech, predmet_vt_4_232_2_nech, predmet_vt_5_232_2_nech, predmet_vt_6_232_2_nech, predmet_vt_7_232_2_nech;
    std::string  predmet_sr_1_232_2_nech, predmet_sr_2_232_2_nech, predmet_sr_3_232_2_nech, predmet_sr_4_232_2_nech, predmet_sr_5_232_2_nech, predmet_sr_6_232_2_nech, predmet_sr_7_232_2_nech;
    std::string  predmet_ch_1_232_2_nech, predmet_ch_2_232_2_nech, predmet_ch_3_232_2_nech, predmet_ch_4_232_2_nech, predmet_ch_5_232_2_nech, predmet_ch_6_232_2_nech, predmet_ch_7_232_2_nech;
    std::string  predmet_pt_1_232_2_nech, predmet_pt_2_232_2_nech, predmet_pt_3_232_2_nech, predmet_pt_4_232_2_nech, predmet_pt_5_232_2_nech, predmet_pt_6_232_2_nech, predmet_pt_7_232_2_nech;


    std::string aud_pon_1_232_2_nech, aud_pon_2_232_2_nech, aud_pon_3_232_2_nech, aud_pon_4_232_2_nech, aud_pon_5_232_2_nech, aud_pon_6_232_2_nech, aud_pon_7_232_2_nech;
    std::string aud_vt_1_232_2_nech, aud_vt_2_232_2_nech, aud_vt_3_232_2_nech, aud_vt_4_232_2_nech, aud_vt_5_232_2_nech, aud_vt_6_232_2_nech, aud_vt_7_232_2_nech;
    std::string aud_sr_1_232_2_nech, aud_sr_2_232_2_nech, aud_sr_3_232_2_nech, aud_sr_4_232_2_nech, aud_sr_5_232_2_nech, aud_sr_6_232_2_nech, aud_sr_7_232_2_nech;
    std::string aud_ch_1_232_2_nech, aud_ch_2_232_2_nech, aud_ch_3_232_2_nech, aud_ch_4_232_2_nech, aud_ch_5_232_2_nech, aud_ch_6_232_2_nech, aud_ch_7_232_2_nech;
    std::string aud_pt_1_232_2_nech, aud_pt_2_232_2_nech, aud_pt_3_232_2_nech, aud_pt_4_232_2_nech, aud_pt_5_232_2_nech, aud_pt_6_232_2_nech, aud_pt_7_232_2_nech;


    std::string prepod_pon_1_232_2_nech, prepod_pon_2_232_2_nech, prepod_pon_3_232_2_nech, prepod_pon_4_232_2_nech, prepod_pon_5_232_2_nech, prepod_pon_6_232_2_nech, prepod_pon_7_232_2_nech;
    std::string prepod_vt_1_232_2_nech, prepod_vt_2_232_2_nech, prepod_vt_3_232_2_nech, prepod_vt_4_232_2_nech, prepod_vt_5_232_2_nech, prepod_vt_6_232_2_nech, prepod_vt_7_232_2_nech;
    std::string prepod_sr_1_232_2_nech, prepod_sr_2_232_2_nech, prepod_sr_3_232_2_nech, prepod_sr_4_232_2_nech, prepod_sr_5_232_2_nech, prepod_sr_6_232_2_nech, prepod_sr_7_232_2_nech;
    std::string prepod_ch_1_232_2_nech, prepod_ch_2_232_2_nech, prepod_ch_3_232_2_nech, prepod_ch_4_232_2_nech, prepod_ch_5_232_2_nech, prepod_ch_6_232_2_nech, prepod_ch_7_232_2_nech;
    std::string prepod_pt_1_232_2_nech, prepod_pt_2_232_2_nech, prepod_pt_3_232_2_nech, prepod_pt_4_232_2_nech, prepod_pt_5_232_2_nech, prepod_pt_6_232_2_nech, prepod_pt_7_232_2_nech;

    //231(1)чет
    std::string  predmet_pon_1_231_1_chet, predmet_pon_2_231_1_chet, predmet_pon_3_231_1_chet, predmet_pon_4_231_1_chet, predmet_pon_5_231_1_chet, predmet_pon_6_231_1_chet, predmet_pon_7_231_1_chet;
    std::string  predmet_vt_1_231_1_chet, predmet_vt_2_231_1_chet, predmet_vt_3_231_1_chet, predmet_vt_4_231_1_chet, predmet_vt_5_231_1_chet, predmet_vt_6_231_1_chet, predmet_vt_7_231_1_chet;
    std::string  predmet_sr_1_231_1_chet, predmet_sr_2_231_1_chet, predmet_sr_3_231_1_chet, predmet_sr_4_231_1_chet, predmet_sr_5_231_1_chet, predmet_sr_6_231_1_chet, predmet_sr_7_231_1_chet;
    std::string  predmet_ch_1_231_1_chet, predmet_ch_2_231_1_chet, predmet_ch_3_231_1_chet, predmet_ch_4_231_1_chet, predmet_ch_5_231_1_chet, predmet_ch_6_231_1_chet, predmet_ch_7_231_1_chet;
    std::string  predmet_pt_1_231_1_chet, predmet_pt_2_231_1_chet, predmet_pt_3_231_1_chet, predmet_pt_4_231_1_chet, predmet_pt_5_231_1_chet, predmet_pt_6_231_1_chet, predmet_pt_7_231_1_chet;


    std::string aud_pon_1_231_1_chet, aud_pon_2_231_1_chet, aud_pon_3_231_1_chet, aud_pon_4_231_1_chet, aud_pon_5_231_1_chet, aud_pon_6_231_1_chet, aud_pon_7_231_1_chet;
    std::string aud_vt_1_231_1_chet, aud_vt_2_231_1_chet, aud_vt_3_231_1_chet, aud_vt_4_231_1_chet, aud_vt_5_231_1_chet, aud_vt_6_231_1_chet, aud_vt_7_231_1_chet;
    std::string aud_sr_1_231_1_chet, aud_sr_2_231_1_chet, aud_sr_3_231_1_chet, aud_sr_4_231_1_chet, aud_sr_5_231_1_chet, aud_sr_6_231_1_chet, aud_sr_7_231_1_chet;
    std::string aud_ch_1_231_1_chet, aud_ch_2_231_1_chet, aud_ch_3_231_1_chet, aud_ch_4_231_1_chet, aud_ch_5_231_1_chet, aud_ch_6_231_1_chet, aud_ch_7_231_1_chet;
    std::string aud_pt_1_231_1_chet, aud_pt_2_231_1_chet, aud_pt_3_231_1_chet, aud_pt_4_231_1_chet, aud_pt_5_231_1_chet, aud_pt_6_231_1_chet, aud_pt_7_231_1_chet;


    std::string prepod_pon_1_231_1_chet, prepod_pon_2_231_1_chet, prepod_pon_3_231_1_chet, prepod_pon_4_231_1_chet, prepod_pon_5_231_1_chet, prepod_pon_6_231_1_chet, prepod_pon_7_231_1_chet;
    std::string prepod_vt_1_231_1_chet, prepod_vt_2_231_1_chet, prepod_vt_3_231_1_chet, prepod_vt_4_231_1_chet, prepod_vt_5_231_1_chet, prepod_vt_6_231_1_chet, prepod_vt_7_231_1_chet;
    std::string prepod_sr_1_231_1_chet, prepod_sr_2_231_1_chet, prepod_sr_3_231_1_chet, prepod_sr_4_231_1_chet, prepod_sr_5_231_1_chet, prepod_sr_6_231_1_chet, prepod_sr_7_231_1_chet;
    std::string prepod_ch_1_231_1_chet, prepod_ch_2_231_1_chet, prepod_ch_3_231_1_chet, prepod_ch_4_231_1_chet, prepod_ch_5_231_1_chet, prepod_ch_6_231_1_chet, prepod_ch_7_231_1_chet;
    std::string prepod_pt_1_231_1_chet, prepod_pt_2_231_1_chet, prepod_pt_3_231_1_chet, prepod_pt_4_231_1_chet, prepod_pt_5_231_1_chet, prepod_pt_6_231_1_chet, prepod_pt_7_231_1_chet;


    //231(2)чет
    std::string  predmet_pon_1_231_2_chet, predmet_pon_2_231_2_chet, predmet_pon_3_231_2_chet, predmet_pon_4_231_2_chet, predmet_pon_5_231_2_chet, predmet_pon_6_231_2_chet, predmet_pon_7_231_2_chet;
    std::string  predmet_vt_1_231_2_chet, predmet_vt_2_231_2_chet, predmet_vt_3_231_2_chet, predmet_vt_4_231_2_chet, predmet_vt_5_231_2_chet, predmet_vt_6_231_2_chet, predmet_vt_7_231_2_chet;
    std::string  predmet_sr_1_231_2_chet, predmet_sr_2_231_2_chet, predmet_sr_3_231_2_chet, predmet_sr_4_231_2_chet, predmet_sr_5_231_2_chet, predmet_sr_6_231_2_chet, predmet_sr_7_231_2_chet;
    std::string  predmet_ch_1_231_2_chet, predmet_ch_2_231_2_chet, predmet_ch_3_231_2_chet, predmet_ch_4_231_2_chet, predmet_ch_5_231_2_chet, predmet_ch_6_231_2_chet, predmet_ch_7_231_2_chet;
    std::string  predmet_pt_1_231_2_chet, predmet_pt_2_231_2_chet, predmet_pt_3_231_2_chet, predmet_pt_4_231_2_chet, predmet_pt_5_231_2_chet, predmet_pt_6_231_2_chet, predmet_pt_7_231_2_chet;


    std::string aud_pon_1_231_2_chet, aud_pon_2_231_2_chet, aud_pon_3_231_2_chet, aud_pon_4_231_2_chet, aud_pon_5_231_2_chet, aud_pon_6_231_2_chet, aud_pon_7_231_2_chet;
    std::string aud_vt_1_231_2_chet, aud_vt_2_231_2_chet, aud_vt_3_231_2_chet, aud_vt_4_231_2_chet, aud_vt_5_231_2_chet, aud_vt_6_231_2_chet, aud_vt_7_231_2_chet;
    std::string aud_sr_1_231_2_chet, aud_sr_2_231_2_chet, aud_sr_3_231_2_chet, aud_sr_4_231_2_chet, aud_sr_5_231_2_chet, aud_sr_6_231_2_chet, aud_sr_7_231_2_chet;
    std::string aud_ch_1_231_2_chet, aud_ch_2_231_2_chet, aud_ch_3_231_2_chet, aud_ch_4_231_2_chet, aud_ch_5_231_2_chet, aud_ch_6_231_2_chet, aud_ch_7_231_2_chet;
    std::string aud_pt_1_231_2_chet, aud_pt_2_231_2_chet, aud_pt_3_231_2_chet, aud_pt_4_231_2_chet, aud_pt_5_231_2_chet, aud_pt_6_231_2_chet, aud_pt_7_231_2_chet;


    std::string prepod_pon_1_231_2_chet, prepod_pon_2_231_2_chet, prepod_pon_3_231_2_chet, prepod_pon_4_231_2_chet, prepod_pon_5_231_2_chet, prepod_pon_6_231_2_chet, prepod_pon_7_231_2_chet;
    std::string prepod_vt_1_231_2_chet, prepod_vt_2_231_2_chet, prepod_vt_3_231_2_chet, prepod_vt_4_231_2_chet, prepod_vt_5_231_2_chet, prepod_vt_6_231_2_chet, prepod_vt_7_231_2_chet;
    std::string prepod_sr_1_231_2_chet, prepod_sr_2_231_2_chet, prepod_sr_3_231_2_chet, prepod_sr_4_231_2_chet, prepod_sr_5_231_2_chet, prepod_sr_6_231_2_chet, prepod_sr_7_231_2_chet;
    std::string prepod_ch_1_231_2_chet, prepod_ch_2_231_2_chet, prepod_ch_3_231_2_chet, prepod_ch_4_231_2_chet, prepod_ch_5_231_2_chet, prepod_ch_6_231_2_chet, prepod_ch_7_231_2_chet;
    std::string prepod_pt_1_231_2_chet, prepod_pt_2_231_2_chet, prepod_pt_3_231_2_chet, prepod_pt_4_231_2_chet, prepod_pt_5_231_2_chet, prepod_pt_6_231_2_chet, prepod_pt_7_231_2_chet;


    //232(1)чет
    std::string  predmet_pon_1_232_1_chet, predmet_pon_2_232_1_chet, predmet_pon_3_232_1_chet, predmet_pon_4_232_1_chet, predmet_pon_5_232_1_chet, predmet_pon_6_232_1_chet, predmet_pon_7_232_1_chet;
    std::string  predmet_vt_1_232_1_chet, predmet_vt_2_232_1_chet, predmet_vt_3_232_1_chet, predmet_vt_4_232_1_chet, predmet_vt_5_232_1_chet, predmet_vt_6_232_1_chet, predmet_vt_7_232_1_chet;
    std::string  predmet_sr_1_232_1_chet, predmet_sr_2_232_1_chet, predmet_sr_3_232_1_chet, predmet_sr_4_232_1_chet, predmet_sr_5_232_1_chet, predmet_sr_6_232_1_chet, predmet_sr_7_232_1_chet;
    std::string  predmet_ch_1_232_1_chet, predmet_ch_2_232_1_chet, predmet_ch_3_232_1_chet, predmet_ch_4_232_1_chet, predmet_ch_5_232_1_chet, predmet_ch_6_232_1_chet, predmet_ch_7_232_1_chet;
    std::string  predmet_pt_1_232_1_chet, predmet_pt_2_232_1_chet, predmet_pt_3_232_1_chet, predmet_pt_4_232_1_chet, predmet_pt_5_232_1_chet, predmet_pt_6_232_1_chet, predmet_pt_7_232_1_chet;


    std::string aud_pon_1_232_1_chet, aud_pon_2_232_1_chet, aud_pon_3_232_1_chet, aud_pon_4_232_1_chet, aud_pon_5_232_1_chet, aud_pon_6_232_1_chet, aud_pon_7_232_1_chet;
    std::string aud_vt_1_232_1_chet, aud_vt_2_232_1_chet, aud_vt_3_232_1_chet, aud_vt_4_232_1_chet, aud_vt_5_232_1_chet, aud_vt_6_232_1_chet, aud_vt_7_232_1_chet;
    std::string aud_sr_1_232_1_chet, aud_sr_2_232_1_chet, aud_sr_3_232_1_chet, aud_sr_4_232_1_chet, aud_sr_5_232_1_chet, aud_sr_6_232_1_chet, aud_sr_7_232_1_chet;
    std::string aud_ch_1_232_1_chet, aud_ch_2_232_1_chet, aud_ch_3_232_1_chet, aud_ch_4_232_1_chet, aud_ch_5_232_1_chet, aud_ch_6_232_1_chet, aud_ch_7_232_1_chet;
    std::string aud_pt_1_232_1_chet, aud_pt_2_232_1_chet, aud_pt_3_232_1_chet, aud_pt_4_232_1_chet, aud_pt_5_232_1_chet, aud_pt_6_232_1_chet, aud_pt_7_232_1_chet;


    std::string prepod_pon_1_232_1_chet, prepod_pon_2_232_1_chet, prepod_pon_3_232_1_chet, prepod_pon_4_232_1_chet, prepod_pon_5_232_1_chet, prepod_pon_6_232_1_chet, prepod_pon_7_232_1_chet;
    std::string prepod_vt_1_232_1_chet, prepod_vt_2_232_1_chet, prepod_vt_3_232_1_chet, prepod_vt_4_232_1_chet, prepod_vt_5_232_1_chet, prepod_vt_6_232_1_chet, prepod_vt_7_232_1_chet;
    std::string prepod_sr_1_232_1_chet, prepod_sr_2_232_1_chet, prepod_sr_3_232_1_chet, prepod_sr_4_232_1_chet, prepod_sr_5_232_1_chet, prepod_sr_6_232_1_chet, prepod_sr_7_232_1_chet;
    std::string prepod_ch_1_232_1_chet, prepod_ch_2_232_1_chet, prepod_ch_3_232_1_chet, prepod_ch_4_232_1_chet, prepod_ch_5_232_1_chet, prepod_ch_6_232_1_chet, prepod_ch_7_232_1_chet;
    std::string prepod_pt_1_232_1_chet, prepod_pt_2_232_1_chet, prepod_pt_3_232_1_chet, prepod_pt_4_232_1_chet, prepod_pt_5_232_1_chet, prepod_pt_6_232_1_chet, prepod_pt_7_232_1_chet;


    //232(2) чет
    std::string  predmet_pon_1_232_2_chet, predmet_pon_2_232_2_chet, predmet_pon_3_232_2_chet, predmet_pon_4_232_2_chet, predmet_pon_5_232_2_chet, predmet_pon_6_232_2_chet, predmet_pon_7_232_2_chet;
    std::string  predmet_vt_1_232_2_chet, predmet_vt_2_232_2_chet, predmet_vt_3_232_2_chet, predmet_vt_4_232_2_chet, predmet_vt_5_232_2_chet, predmet_vt_6_232_2_chet, predmet_vt_7_232_2_chet;
    std::string  predmet_sr_1_232_2_chet, predmet_sr_2_232_2_chet, predmet_sr_3_232_2_chet, predmet_sr_4_232_2_chet, predmet_sr_5_232_2_chet, predmet_sr_6_232_2_chet, predmet_sr_7_232_2_chet;
    std::string  predmet_ch_1_232_2_chet, predmet_ch_2_232_2_chet, predmet_ch_3_232_2_chet, predmet_ch_4_232_2_chet, predmet_ch_5_232_2_chet, predmet_ch_6_232_2_chet, predmet_ch_7_232_2_chet;
    std::string  predmet_pt_1_232_2_chet, predmet_pt_2_232_2_chet, predmet_pt_3_232_2_chet, predmet_pt_4_232_2_chet, predmet_pt_5_232_2_chet, predmet_pt_6_232_2_chet, predmet_pt_7_232_2_chet;


    std::string aud_pon_1_232_2_chet, aud_pon_2_232_2_chet, aud_pon_3_232_2_chet, aud_pon_4_232_2_chet, aud_pon_5_232_2_chet, aud_pon_6_232_2_chet, aud_pon_7_232_2_chet;
    std::string aud_vt_1_232_2_chet, aud_vt_2_232_2_chet, aud_vt_3_232_2_chet, aud_vt_4_232_2_chet, aud_vt_5_232_2_chet, aud_vt_6_232_2_chet, aud_vt_7_232_2_chet;
    std::string aud_sr_1_232_2_chet, aud_sr_2_232_2_chet, aud_sr_3_232_2_chet, aud_sr_4_232_2_chet, aud_sr_5_232_2_chet, aud_sr_6_232_2_chet, aud_sr_7_232_2_chet;
    std::string aud_ch_1_232_2_chet, aud_ch_2_232_2_chet, aud_ch_3_232_2_chet, aud_ch_4_232_2_chet, aud_ch_5_232_2_chet, aud_ch_6_232_2_chet, aud_ch_7_232_2_chet;
    std::string aud_pt_1_232_2_chet, aud_pt_2_232_2_chet, aud_pt_3_232_2_chet, aud_pt_4_232_2_chet, aud_pt_5_232_2_chet, aud_pt_6_232_2_chet, aud_pt_7_232_2_chet;


    std::string prepod_pon_1_232_2_chet, prepod_pon_2_232_2_chet, prepod_pon_3_232_2_chet, prepod_pon_4_232_2_chet, prepod_pon_5_232_2_chet, prepod_pon_6_232_2_chet, prepod_pon_7_232_2_chet;
    std::string prepod_vt_1_232_2_chet, prepod_vt_2_232_2_chet, prepod_vt_3_232_2_chet, prepod_vt_4_232_2_chet, prepod_vt_5_232_2_chet, prepod_vt_6_232_2_chet, prepod_vt_7_232_2_chet;
    std::string prepod_sr_1_232_2_chet, prepod_sr_2_232_2_chet, prepod_sr_3_232_2_chet, prepod_sr_4_232_2_chet, prepod_sr_5_232_2_chet, prepod_sr_6_232_2_chet, prepod_sr_7_232_2_chet;
    std::string prepod_ch_1_232_2_chet, prepod_ch_2_232_2_chet, prepod_ch_3_232_2_chet, prepod_ch_4_232_2_chet, prepod_ch_5_232_2_chet, prepod_ch_6_232_2_chet, prepod_ch_7_232_2_chet;
    std::string prepod_pt_1_232_2_chet, prepod_pt_2_232_2_chet, prepod_pt_3_232_2_chet, prepod_pt_4_232_2_chet, prepod_pt_5_232_2_chet, prepod_pt_6_232_2_chet, prepod_pt_7_232_2_chet;



    //ПАРСЕР!!!!

   //231(1) нечет 
    predmet_pon_1_231_1_nech = ws.cell("D5").to_string();
    predmet_pon_2_231_1_nech = ws.cell("D10").to_string();
    predmet_pon_3_231_1_nech = ws.cell("D15").to_string();
    predmet_pon_4_231_1_nech = ws.cell("D20").to_string();
    predmet_pon_5_231_1_nech = ws.cell("D25").to_string();
    predmet_pon_6_231_1_nech = ws.cell("D30").to_string();
    predmet_pon_7_231_1_nech = ws.cell("D35").to_string();

    predmet_vt_1_231_1_nech = ws.cell("D40").to_string();
    predmet_vt_2_231_1_nech = ws.cell("D45").to_string();
    predmet_vt_3_231_1_nech = ws.cell("D50").to_string();
    predmet_vt_4_231_1_nech = ws.cell("D55").to_string();
    predmet_vt_5_231_1_nech = ws.cell("D60").to_string();
    predmet_vt_6_231_1_nech = ws.cell("D65").to_string();
    predmet_vt_7_231_1_nech = ws.cell("D200").to_string();

    predmet_sr_1_231_1_nech = ws.cell("D70").to_string();
    predmet_sr_2_231_1_nech = ws.cell("D75").to_string();
    predmet_sr_3_231_1_nech = ws.cell("D80").to_string();
    predmet_sr_4_231_1_nech = ws.cell("D85").to_string();
    predmet_sr_5_231_1_nech = ws.cell("D90").to_string();
    predmet_sr_6_231_1_nech = ws.cell("D95").to_string();
    predmet_sr_7_231_1_nech = ws.cell("D100").to_string();

    predmet_ch_1_231_1_nech = ws.cell("D105").to_string();
    predmet_ch_2_231_1_nech = ws.cell("D110").to_string();
    predmet_ch_3_231_1_nech = ws.cell("D115").to_string();
    predmet_ch_4_231_1_nech = ws.cell("D120").to_string();
    predmet_ch_5_231_1_nech = ws.cell("D125").to_string();
    predmet_ch_6_231_1_nech = ws.cell("D130").to_string();
    predmet_ch_7_231_1_nech = ws.cell("D200").to_string();

    predmet_pt_1_231_1_nech = ws.cell("D135").to_string();
    predmet_pt_2_231_1_nech = ws.cell("D140").to_string();
    predmet_pt_3_231_1_nech = ws.cell("D145").to_string();
    predmet_pt_4_231_1_nech = ws.cell("D150").to_string();
    predmet_pt_5_231_1_nech = ws.cell("D155").to_string();
    predmet_pt_6_231_1_nech = ws.cell("D160").to_string();
    predmet_pt_7_231_1_nech = ws.cell("D200").to_string();



    aud_pon_1_231_1_nech = ws.cell("D7").to_string();
    aud_pon_2_231_1_nech = ws.cell("D12").to_string();
    aud_pon_3_231_1_nech = ws.cell("D17").to_string();
    aud_pon_4_231_1_nech = ws.cell("D22").to_string();
    aud_pon_5_231_1_nech = ws.cell("D27").to_string();
    aud_pon_6_231_1_nech = ws.cell("D32").to_string();
    aud_pon_7_231_1_nech = ws.cell("D37").to_string();

    aud_vt_1_231_1_nech = ws.cell("D42").to_string();
    aud_vt_2_231_1_nech = ws.cell("D47").to_string();
    aud_vt_3_231_1_nech = ws.cell("D52").to_string();
    aud_vt_4_231_1_nech = ws.cell("D57").to_string();
    aud_vt_5_231_1_nech = ws.cell("D62").to_string();
    aud_vt_6_231_1_nech = ws.cell("D67").to_string();
    aud_vt_7_231_1_nech = ws.cell("D200").to_string();

    aud_sr_1_231_1_nech = ws.cell("D72").to_string();
    aud_sr_2_231_1_nech = ws.cell("D77").to_string();
    aud_sr_3_231_1_nech = ws.cell("D82").to_string();
    aud_sr_4_231_1_nech = ws.cell("D87").to_string();
    aud_sr_5_231_1_nech = ws.cell("D92").to_string();
    aud_sr_6_231_1_nech = ws.cell("D97").to_string();
    aud_sr_7_231_1_nech = ws.cell("D102").to_string();

    aud_ch_1_231_1_nech = ws.cell("D107").to_string();
    aud_ch_2_231_1_nech = ws.cell("D112").to_string();
    aud_ch_3_231_1_nech = ws.cell("D117").to_string();
    aud_ch_4_231_1_nech = ws.cell("D122").to_string();
    aud_ch_5_231_1_nech = ws.cell("D127").to_string();
    aud_ch_6_231_1_nech = ws.cell("D132").to_string();
    aud_ch_7_231_1_nech = ws.cell("D200").to_string();

    aud_pt_1_231_1_nech = ws.cell("D137").to_string();
    aud_pt_2_231_1_nech = ws.cell("D142").to_string();
    aud_pt_3_231_1_nech = ws.cell("D147").to_string();
    aud_pt_4_231_1_nech = ws.cell("D152").to_string();
    aud_pt_5_231_1_nech = ws.cell("D157").to_string();
    aud_pt_6_231_1_nech = ws.cell("D162").to_string();
    aud_pt_7_231_1_nech = ws.cell("D200").to_string();



    prepod_pon_1_231_1_nech = ws.cell("D6").to_string();
    prepod_pon_2_231_1_nech = ws.cell("D11").to_string();
    prepod_pon_3_231_1_nech = ws.cell("D16").to_string();
    prepod_pon_4_231_1_nech = ws.cell("D21").to_string();
    prepod_pon_5_231_1_nech = ws.cell("D26").to_string();
    prepod_pon_6_231_1_nech = ws.cell("D31").to_string();
    prepod_pon_7_231_1_nech = ws.cell("D36").to_string();


    prepod_vt_1_231_1_nech = ws.cell("D41").to_string();
    prepod_vt_2_231_1_nech = ws.cell("D46").to_string();
    prepod_vt_3_231_1_nech = ws.cell("D51").to_string();
    prepod_vt_4_231_1_nech = ws.cell("D56").to_string();
    prepod_vt_5_231_1_nech = ws.cell("D61").to_string();
    prepod_vt_6_231_1_nech = ws.cell("D66").to_string();
    prepod_vt_7_231_1_nech = ws.cell("D5").to_string();


    prepod_sr_1_231_1_nech = ws.cell("D71").to_string();
    prepod_sr_2_231_1_nech = ws.cell("D76").to_string();
    prepod_sr_3_231_1_nech = ws.cell("D81").to_string();
    prepod_sr_4_231_1_nech = ws.cell("D85").to_string();
    prepod_sr_5_231_1_nech = ws.cell("D91").to_string();
    prepod_sr_6_231_1_nech = ws.cell("D96").to_string();
    prepod_sr_7_231_1_nech = ws.cell("D101").to_string();


    prepod_ch_1_231_1_nech = ws.cell("D106").to_string();
    prepod_ch_2_231_1_nech = ws.cell("D111").to_string();
    prepod_ch_3_231_1_nech = ws.cell("D116").to_string();
    prepod_ch_4_231_1_nech = ws.cell("D121").to_string();
    prepod_ch_5_231_1_nech = ws.cell("D126").to_string();
    prepod_ch_6_231_1_nech = ws.cell("D131").to_string();
    prepod_ch_7_231_1_nech = ws.cell("D200").to_string();


    prepod_pt_1_231_1_nech = ws.cell("D136").to_string();
    prepod_pt_2_231_1_nech = ws.cell("D141").to_string();
    prepod_pt_3_231_1_nech = ws.cell("D146").to_string();
    prepod_pt_4_231_1_nech = ws.cell("D151").to_string();
    prepod_pt_5_231_1_nech = ws.cell("D156").to_string();
    prepod_pt_6_231_1_nech = ws.cell("D161").to_string();
    prepod_pt_7_231_1_nech = ws.cell("D200").to_string();

    //231(2)нечет
    predmet_pon_1_231_2_nech = ws.cell("E5").to_string();
    predmet_pon_2_231_2_nech = ws.cell("E10").to_string();
    predmet_pon_3_231_2_nech = ws.cell("E15").to_string();
    predmet_pon_4_231_2_nech = ws.cell("E20").to_string();
    predmet_pon_5_231_2_nech = ws.cell("E25").to_string();
    predmet_pon_6_231_2_nech = ws.cell("E30").to_string();
    predmet_pon_7_231_2_nech = ws.cell("E35").to_string();

    predmet_vt_1_231_2_nech = ws.cell("E40").to_string();
    predmet_vt_2_231_2_nech = ws.cell("E45").to_string();
    predmet_vt_3_231_2_nech = ws.cell("E50").to_string();
    predmet_vt_4_231_2_nech = ws.cell("E55").to_string();
    predmet_vt_5_231_2_nech = ws.cell("E60").to_string();
    predmet_vt_6_231_2_nech = ws.cell("E65").to_string();
    predmet_vt_7_231_2_nech = ws.cell("G200").to_string();

    predmet_sr_1_231_2_nech = ws.cell("E70").to_string();
    predmet_sr_2_231_2_nech = ws.cell("E75").to_string();
    predmet_sr_3_231_2_nech = ws.cell("E80").to_string();
    predmet_sr_4_231_2_nech = ws.cell("E85").to_string();
    predmet_sr_5_231_2_nech = ws.cell("E90").to_string();
    predmet_sr_6_231_2_nech = ws.cell("E95").to_string();
    predmet_sr_7_231_2_nech = ws.cell("E100").to_string();

    predmet_ch_1_231_2_nech = ws.cell("E105").to_string();
    predmet_ch_2_231_2_nech = ws.cell("E110").to_string();
    predmet_ch_3_231_2_nech = ws.cell("E115").to_string();
    predmet_ch_4_231_2_nech = ws.cell("E120").to_string();
    predmet_ch_5_231_2_nech = ws.cell("E125").to_string();
    predmet_ch_6_231_2_nech = ws.cell("E130").to_string();
    predmet_ch_7_231_2_nech = ws.cell("E200").to_string();

    predmet_pt_1_231_2_nech = ws.cell("E135").to_string();
    predmet_pt_2_231_2_nech = ws.cell("E140").to_string();
    predmet_pt_3_231_2_nech = ws.cell("E145").to_string();
    predmet_pt_4_231_2_nech = ws.cell("E150").to_string();
    predmet_pt_5_231_2_nech = ws.cell("E155").to_string();
    predmet_pt_6_231_2_nech = ws.cell("E160").to_string();
    predmet_pt_7_231_2_nech = ws.cell("E200").to_string();


    aud_pon_1_231_2_nech = ws.cell("E7").to_string();
    aud_pon_2_231_2_nech = ws.cell("E12").to_string();
    aud_pon_3_231_2_nech = ws.cell("E17").to_string();
    aud_pon_4_231_2_nech = ws.cell("E22").to_string();
    aud_pon_5_231_2_nech = ws.cell("E27").to_string();
    aud_pon_6_231_2_nech = ws.cell("E33").to_string();
    aud_pon_7_231_2_nech = ws.cell("E37").to_string();

    aud_vt_1_231_2_nech = ws.cell("E42").to_string();
    aud_vt_2_231_2_nech = ws.cell("E47").to_string();
    aud_vt_3_231_2_nech = ws.cell("E52").to_string();
    aud_vt_4_231_2_nech = ws.cell("E57").to_string();
    aud_vt_5_231_2_nech = ws.cell("E62").to_string();
    aud_vt_6_231_2_nech = ws.cell("E67").to_string();
    aud_vt_7_231_2_nech = ws.cell("E200").to_string();

    aud_sr_1_231_2_nech = ws.cell("E72").to_string();
    aud_sr_2_231_2_nech = ws.cell("E77").to_string();
    aud_sr_3_231_2_nech = ws.cell("E82").to_string();
    aud_sr_4_231_2_nech = ws.cell("E87").to_string();
    aud_sr_5_231_2_nech = ws.cell("E92").to_string();
    aud_sr_6_231_2_nech = ws.cell("E97").to_string();
    aud_sr_7_231_2_nech = ws.cell("E102").to_string();

    aud_ch_1_231_2_nech = ws.cell("E107").to_string();
    aud_ch_2_231_2_nech = ws.cell("E112").to_string();
    aud_ch_3_231_2_nech = ws.cell("E117").to_string();
    aud_ch_4_231_2_nech = ws.cell("E122").to_string();
    aud_ch_5_231_2_nech = ws.cell("E127").to_string();
    aud_ch_6_231_2_nech = ws.cell("E132").to_string();
    aud_ch_7_231_2_nech = ws.cell("E200").to_string();

    aud_pt_1_231_2_nech = ws.cell("E137").to_string();
    aud_pt_2_231_2_nech = ws.cell("E142").to_string();
    aud_pt_3_231_2_nech = ws.cell("E147").to_string();
    aud_pt_4_231_2_nech = ws.cell("E152").to_string();
    aud_pt_5_231_2_nech = ws.cell("E157").to_string();
    aud_pt_6_231_2_nech = ws.cell("E162").to_string();
    aud_pt_7_231_2_nech = ws.cell("E200").to_string();


    prepod_pon_1_231_2_nech = ws.cell("E6").to_string();
    prepod_pon_2_231_2_nech = ws.cell("E11").to_string();
    prepod_pon_3_231_2_nech = ws.cell("E16").to_string();
    prepod_pon_4_231_2_nech = ws.cell("E21").to_string();
    prepod_pon_5_231_2_nech = ws.cell("E26").to_string();
    prepod_pon_6_231_2_nech = ws.cell("E31").to_string();
    prepod_pon_7_231_2_nech = ws.cell("E36").to_string();

    prepod_vt_1_231_2_nech = ws.cell("E41").to_string();
    prepod_vt_2_231_2_nech = ws.cell("E46").to_string();
    prepod_vt_3_231_2_nech = ws.cell("E51").to_string();
    prepod_vt_4_231_2_nech = ws.cell("E56").to_string();
    prepod_vt_5_231_2_nech = ws.cell("E61").to_string();
    prepod_vt_6_231_2_nech = ws.cell("E66").to_string();
    prepod_vt_7_231_2_nech = ws.cell("E200").to_string();

    prepod_sr_1_231_2_nech = ws.cell("E71").to_string();
    prepod_sr_2_231_2_nech = ws.cell("E76").to_string();
    prepod_sr_3_231_2_nech = ws.cell("E81").to_string();
    prepod_sr_4_231_2_nech = ws.cell("E86").to_string();
    prepod_sr_5_231_2_nech = ws.cell("E91").to_string();
    prepod_sr_6_231_2_nech = ws.cell("E96").to_string();
    prepod_sr_7_231_2_nech = ws.cell("E101").to_string();

    prepod_ch_1_231_2_nech = ws.cell("E106").to_string();
    prepod_ch_2_231_2_nech = ws.cell("E111").to_string();
    prepod_ch_3_231_2_nech = ws.cell("E116").to_string();
    prepod_ch_4_231_2_nech = ws.cell("E121").to_string();
    prepod_ch_5_231_2_nech = ws.cell("E126").to_string();
    prepod_ch_6_231_2_nech = ws.cell("E131").to_string();
    prepod_ch_7_231_2_nech = ws.cell("E200").to_string();

    prepod_pt_1_231_2_nech = ws.cell("E136").to_string();
    prepod_pt_2_231_2_nech = ws.cell("E141").to_string();
    prepod_pt_3_231_2_nech = ws.cell("E146").to_string();
    prepod_pt_4_231_2_nech = ws.cell("E151").to_string();
    prepod_pt_5_231_2_nech = ws.cell("E156").to_string();
    prepod_pt_6_231_2_nech = ws.cell("E161").to_string();
    prepod_pt_7_231_2_nech = ws.cell("E166").to_string();

    //232(1)нечет

    predmet_pon_1_232_1_nech = ws.cell("G5").to_string();
    predmet_pon_2_232_1_nech = ws.cell("G10").to_string();
    predmet_pon_3_232_1_nech = ws.cell("G15").to_string();
    predmet_pon_4_232_1_nech = ws.cell("G20").to_string();
    predmet_pon_5_232_1_nech = ws.cell("G25").to_string();
    predmet_pon_6_232_1_nech = ws.cell("G30").to_string();
    predmet_pon_7_232_1_nech = ws.cell("G35").to_string();

    predmet_vt_1_232_1_nech = ws.cell("G40").to_string();
    predmet_vt_2_232_1_nech = ws.cell("G45").to_string();
    predmet_vt_3_232_1_nech = ws.cell("G50").to_string();
    predmet_vt_4_232_1_nech = ws.cell("G55").to_string();
    predmet_vt_5_232_1_nech = ws.cell("G60").to_string();
    predmet_vt_6_232_1_nech = ws.cell("G65").to_string();
    predmet_vt_7_232_1_nech = ws.cell("G200").to_string();

    predmet_sr_1_232_1_nech = ws.cell("G70").to_string();
    predmet_sr_2_232_1_nech = ws.cell("G75").to_string();
    predmet_sr_3_232_1_nech = ws.cell("G80").to_string();
    predmet_sr_4_232_1_nech = ws.cell("G85").to_string();
    predmet_sr_5_232_1_nech = ws.cell("G90").to_string();
    predmet_sr_6_232_1_nech = ws.cell("G95").to_string();
    predmet_sr_7_232_1_nech = ws.cell("G100").to_string();

    predmet_ch_1_232_1_nech = ws.cell("G105").to_string();
    predmet_ch_2_232_1_nech = ws.cell("G110").to_string();
    predmet_ch_3_232_1_nech = ws.cell("G115").to_string();
    predmet_ch_4_232_1_nech = ws.cell("G120").to_string();
    predmet_ch_5_232_1_nech = ws.cell("G125").to_string();
    predmet_ch_6_232_1_nech = ws.cell("G130").to_string();
    predmet_ch_7_232_1_nech = ws.cell("G200").to_string();

    predmet_pt_1_232_1_nech = ws.cell("G135").to_string();
    predmet_pt_2_232_1_nech = ws.cell("G140").to_string();
    predmet_pt_3_232_1_nech = ws.cell("G145").to_string();
    predmet_pt_4_232_1_nech = ws.cell("G150").to_string();
    predmet_pt_5_232_1_nech = ws.cell("G155").to_string();
    predmet_pt_6_232_1_nech = ws.cell("G160").to_string();
    predmet_pt_7_232_1_nech = ws.cell("G200").to_string();


    aud_pon_1_232_1_nech = ws.cell("G7").to_string();
    aud_pon_2_232_1_nech = ws.cell("G12").to_string();
    aud_pon_3_232_1_nech = ws.cell("G17").to_string();
    aud_pon_4_232_1_nech = ws.cell("G22").to_string();
    aud_pon_5_232_1_nech = ws.cell("G27").to_string();
    aud_pon_6_232_1_nech = ws.cell("G32").to_string();
    aud_pon_7_232_1_nech = ws.cell("G37").to_string();

    aud_vt_1_232_1_nech = ws.cell("G42").to_string();
    aud_vt_2_232_1_nech = ws.cell("G47").to_string();
    aud_vt_3_232_1_nech = ws.cell("G52").to_string();
    aud_vt_4_232_1_nech = ws.cell("G57").to_string();
    aud_vt_5_232_1_nech = ws.cell("G62").to_string();
    aud_vt_6_232_1_nech = ws.cell("G67").to_string();
    aud_vt_7_232_1_nech = ws.cell("G200").to_string();

    aud_sr_1_232_1_nech = ws.cell("G72").to_string();
    aud_sr_2_232_1_nech = ws.cell("G77").to_string();
    aud_sr_3_232_1_nech = ws.cell("G82").to_string();
    aud_sr_4_232_1_nech = ws.cell("G87").to_string();
    aud_sr_5_232_1_nech = ws.cell("G92").to_string();
    aud_sr_6_232_1_nech = ws.cell("G97").to_string();
    aud_sr_7_232_1_nech = ws.cell("G102").to_string();

    aud_ch_1_232_1_nech = ws.cell("G107").to_string();
    aud_ch_2_232_1_nech = ws.cell("G112").to_string();
    aud_ch_3_232_1_nech = ws.cell("G117").to_string();
    aud_ch_4_232_1_nech = ws.cell("G122").to_string();
    aud_ch_5_232_1_nech = ws.cell("G127").to_string();
    aud_ch_6_232_1_nech = ws.cell("G132").to_string();
    aud_ch_7_232_1_nech = ws.cell("G200").to_string();

    aud_pt_1_232_1_nech = ws.cell("G137").to_string();
    aud_pt_2_232_1_nech = ws.cell("G142").to_string();
    aud_pt_3_232_1_nech = ws.cell("G147").to_string();
    aud_pt_4_232_1_nech = ws.cell("G152").to_string();
    aud_pt_5_232_1_nech = ws.cell("G157").to_string();
    aud_pt_6_232_1_nech = ws.cell("G162").to_string();
    aud_pt_7_232_1_nech = ws.cell("G200").to_string();


    prepod_pon_1_232_1_nech = ws.cell("G6").to_string();
    prepod_pon_2_232_1_nech = ws.cell("G11").to_string();
    prepod_pon_3_232_1_nech = ws.cell("G16").to_string();
    prepod_pon_4_232_1_nech = ws.cell("G21").to_string();
    prepod_pon_5_232_1_nech = ws.cell("G26").to_string();
    prepod_pon_6_232_1_nech = ws.cell("G31").to_string();
    prepod_pon_7_232_1_nech = ws.cell("G36").to_string();

    prepod_vt_1_232_1_nech = ws.cell("G41").to_string();
    prepod_vt_2_232_1_nech = ws.cell("G46").to_string();
    prepod_vt_3_232_1_nech = ws.cell("G51").to_string();
    prepod_vt_4_232_1_nech = ws.cell("G56").to_string();
    prepod_vt_5_232_1_nech = ws.cell("G61").to_string();
    prepod_vt_6_232_1_nech = ws.cell("G66").to_string();
    prepod_vt_7_232_1_nech = ws.cell("G200").to_string();

    prepod_sr_1_232_1_nech = ws.cell("G71").to_string();
    prepod_sr_2_232_1_nech = ws.cell("G76").to_string();
    prepod_sr_3_232_1_nech = ws.cell("G81").to_string();
    prepod_sr_4_232_1_nech = ws.cell("G86").to_string();
    prepod_sr_5_232_1_nech = ws.cell("G91").to_string();
    prepod_sr_6_232_1_nech = ws.cell("G96").to_string();
    prepod_sr_7_232_1_nech = ws.cell("G101").to_string();

    prepod_ch_1_232_1_nech = ws.cell("G106").to_string();
    prepod_ch_2_232_1_nech = ws.cell("G111").to_string();
    prepod_ch_3_232_1_nech = ws.cell("G116").to_string();
    prepod_ch_4_232_1_nech = ws.cell("G121").to_string();
    prepod_ch_5_232_1_nech = ws.cell("G126").to_string();
    prepod_ch_6_232_1_nech = ws.cell("G131").to_string();
    prepod_ch_7_232_1_nech = ws.cell("G200").to_string();

    prepod_pt_1_232_1_nech = ws.cell("G136").to_string();
    prepod_pt_2_232_1_nech = ws.cell("G141").to_string();
    prepod_pt_3_232_1_nech = ws.cell("G146").to_string();
    prepod_pt_4_232_1_nech = ws.cell("G151").to_string();
    prepod_pt_5_232_1_nech = ws.cell("G156").to_string();
    prepod_pt_6_232_1_nech = ws.cell("G161").to_string();
    prepod_pt_7_232_1_nech = ws.cell("G200").to_string();


    //232(2)нечет
    predmet_pon_1_232_2_nech = ws.cell("H5").to_string();
    predmet_pon_2_232_2_nech = ws.cell("H10").to_string();
    predmet_pon_3_232_2_nech = ws.cell("H15").to_string();
    predmet_pon_4_232_2_nech = ws.cell("H20").to_string();
    predmet_pon_5_232_2_nech = ws.cell("G25").to_string();
    predmet_pon_6_232_2_nech = ws.cell("H30").to_string();
    predmet_pon_7_232_2_nech = ws.cell("H35").to_string();

    predmet_vt_1_232_2_nech = ws.cell("H40").to_string();
    predmet_vt_2_232_2_nech = ws.cell("H45").to_string();
    predmet_vt_3_232_2_nech = ws.cell("H50").to_string();
    predmet_vt_4_232_2_nech = ws.cell("H55").to_string();
    predmet_vt_5_232_2_nech = ws.cell("H60").to_string();
    predmet_vt_6_232_2_nech = ws.cell("H65").to_string();
    predmet_vt_7_232_2_nech = ws.cell("H200").to_string();

    predmet_sr_1_232_2_nech = ws.cell("H70").to_string();
    predmet_sr_2_232_2_nech = ws.cell("H75").to_string();
    predmet_sr_3_232_2_nech = ws.cell("H80").to_string();
    predmet_sr_4_232_2_nech = ws.cell("H85").to_string();
    predmet_sr_5_232_2_nech = ws.cell("H90").to_string();
    predmet_sr_6_232_2_nech = ws.cell("H95").to_string();
    predmet_sr_7_232_2_nech = ws.cell("H100").to_string();

    predmet_ch_1_232_2_nech = ws.cell("H105").to_string();
    predmet_ch_2_232_2_nech = ws.cell("H110").to_string();
    predmet_ch_3_232_2_nech = ws.cell("H115").to_string();
    predmet_ch_4_232_2_nech = ws.cell("H120").to_string();
    predmet_ch_5_232_2_nech = ws.cell("H125").to_string();
    predmet_ch_6_232_2_nech = ws.cell("H130").to_string();
    predmet_ch_7_232_2_nech = ws.cell("H200").to_string();

    predmet_pt_1_232_2_nech = ws.cell("H135").to_string();
    predmet_pt_2_232_2_nech = ws.cell("H140").to_string();
    predmet_pt_3_232_2_nech = ws.cell("H145").to_string();
    predmet_pt_4_232_2_nech = ws.cell("H150").to_string();
    predmet_pt_5_232_2_nech = ws.cell("H155").to_string();
    predmet_pt_6_232_2_nech = ws.cell("H160").to_string();
    predmet_pt_7_232_2_nech = ws.cell("H200").to_string();


    aud_pon_1_232_2_nech = ws.cell("H7").to_string();
    aud_pon_2_232_2_nech = ws.cell("H12").to_string();
    aud_pon_3_232_2_nech = ws.cell("H17").to_string();
    aud_pon_4_232_2_nech = ws.cell("H22").to_string();
    aud_pon_5_232_2_nech = ws.cell("H27").to_string();
    aud_pon_6_232_2_nech = ws.cell("H32").to_string();
    aud_pon_7_232_2_nech = ws.cell("H37").to_string();

    aud_vt_1_232_2_nech = ws.cell("H42").to_string();
    aud_vt_2_232_2_nech = ws.cell("H47").to_string();
    aud_vt_3_232_2_nech = ws.cell("H52").to_string();
    aud_vt_4_232_2_nech = ws.cell("H57").to_string();
    aud_vt_5_232_2_nech = ws.cell("H62").to_string();
    aud_vt_6_232_2_nech = ws.cell("H67").to_string();
    aud_vt_7_232_2_nech = ws.cell("H200").to_string();

    aud_sr_1_232_2_nech = ws.cell("H72").to_string();
    aud_sr_2_232_2_nech = ws.cell("H77").to_string();
    aud_sr_3_232_2_nech = ws.cell("H82").to_string();
    aud_sr_4_232_2_nech = ws.cell("H87").to_string();
    aud_sr_5_232_2_nech = ws.cell("H92").to_string();
    aud_sr_6_232_2_nech = ws.cell("H97").to_string();
    aud_sr_7_232_2_nech = ws.cell("H102").to_string();

    aud_ch_1_232_2_nech = ws.cell("H107").to_string();
    aud_ch_2_232_2_nech = ws.cell("H112").to_string();
    aud_ch_3_232_2_nech = ws.cell("H117").to_string();
    aud_ch_4_232_2_nech = ws.cell("H122").to_string();
    aud_ch_5_232_2_nech = ws.cell("H127").to_string();
    aud_ch_6_232_2_nech = ws.cell("H132").to_string();
    aud_ch_7_232_2_nech = ws.cell("H200").to_string();

    aud_pt_1_232_2_nech = ws.cell("H137").to_string();
    aud_pt_2_232_2_nech = ws.cell("H142").to_string();
    aud_pt_3_232_2_nech = ws.cell("H147").to_string();
    aud_pt_4_232_2_nech = ws.cell("H152").to_string();
    aud_pt_5_232_2_nech = ws.cell("H157").to_string();
    aud_pt_6_232_2_nech = ws.cell("H162").to_string();
    aud_pt_7_232_2_nech = ws.cell("H200").to_string();


    prepod_pon_1_232_2_nech = ws.cell("H6").to_string();
    prepod_pon_2_232_2_nech = ws.cell("H11").to_string();
    prepod_pon_3_232_2_nech = ws.cell("H16").to_string();
    prepod_pon_4_232_2_nech = ws.cell("H21").to_string();
    prepod_pon_5_232_2_nech = ws.cell("H26").to_string();
    prepod_pon_6_232_2_nech = ws.cell("H31").to_string();
    prepod_pon_7_232_2_nech = ws.cell("H36").to_string();

    prepod_vt_1_232_2_nech = ws.cell("H41").to_string();
    prepod_vt_2_232_2_nech = ws.cell("H46").to_string();
    prepod_vt_3_232_2_nech = ws.cell("H51").to_string();
    prepod_vt_4_232_2_nech = ws.cell("H56").to_string();
    prepod_vt_5_232_2_nech = ws.cell("H61").to_string();
    prepod_vt_6_232_2_nech = ws.cell("H66").to_string();
    prepod_vt_7_232_2_nech = ws.cell("H200").to_string();

    prepod_sr_1_232_2_nech = ws.cell("H71").to_string();
    prepod_sr_2_232_2_nech = ws.cell("H76").to_string();
    prepod_sr_3_232_2_nech = ws.cell("H81").to_string();
    prepod_sr_4_232_2_nech = ws.cell("H86").to_string();
    prepod_sr_5_232_2_nech = ws.cell("H91").to_string();
    prepod_sr_6_232_2_nech = ws.cell("H96").to_string();
    prepod_sr_7_232_2_nech = ws.cell("H101").to_string();

    prepod_ch_1_232_2_nech = ws.cell("H106").to_string();
    prepod_ch_2_232_2_nech = ws.cell("H111").to_string();
    prepod_ch_3_232_2_nech = ws.cell("H116").to_string();
    prepod_ch_4_232_2_nech = ws.cell("H121").to_string();
    prepod_ch_5_232_2_nech = ws.cell("H126").to_string();
    prepod_ch_6_232_2_nech = ws.cell("H131").to_string();
    prepod_ch_7_232_2_nech = ws.cell("H200").to_string();

    prepod_pt_1_232_2_nech = ws.cell("H136").to_string();
    prepod_pt_2_232_2_nech = ws.cell("H141").to_string();
    prepod_pt_3_232_2_nech = ws.cell("H146").to_string();
    prepod_pt_4_232_2_nech = ws.cell("H151").to_string();
    prepod_pt_5_232_2_nech = ws.cell("H156").to_string();
    prepod_pt_6_232_2_nech = ws.cell("H161").to_string();
    prepod_pt_7_232_2_nech = ws.cell("H200").to_string();


    //231(1)чет
    predmet_pon_1_231_1_chet = ws.cell("L5").to_string();
    predmet_pon_2_231_1_chet = ws.cell("L10").to_string();
    predmet_pon_3_231_1_chet = ws.cell("L15").to_string();
    predmet_pon_4_231_1_chet = ws.cell("L20").to_string();
    predmet_pon_5_231_1_chet = ws.cell("L25").to_string();
    predmet_pon_6_231_1_chet = ws.cell("L30").to_string();
    predmet_pon_7_231_1_chet = ws.cell("L35").to_string();

    predmet_vt_1_231_1_chet = ws.cell("L40").to_string();
    predmet_vt_2_231_1_chet = ws.cell("L45").to_string();
    predmet_vt_3_231_1_chet = ws.cell("L50").to_string();
    predmet_vt_4_231_1_chet = ws.cell("L55").to_string();
    predmet_vt_5_231_1_chet = ws.cell("L60").to_string();
    predmet_vt_6_231_1_chet = ws.cell("L65").to_string();
    predmet_vt_7_231_1_chet = ws.cell("D200").to_string();

    predmet_sr_1_231_1_chet = ws.cell("L70").to_string();
    predmet_sr_2_231_1_chet = ws.cell("L75").to_string();
    predmet_sr_3_231_1_chet = ws.cell("L80").to_string();
    predmet_sr_4_231_1_chet = ws.cell("L85").to_string();
    predmet_sr_5_231_1_chet = ws.cell("L90").to_string();
    predmet_sr_6_231_1_chet = ws.cell("L95").to_string();
    predmet_sr_7_231_1_chet = ws.cell("L100").to_string();

    predmet_ch_1_231_1_chet = ws.cell("L105").to_string();
    predmet_ch_2_231_1_chet = ws.cell("L110").to_string();
    predmet_ch_3_231_1_chet = ws.cell("L115").to_string();
    predmet_ch_4_231_1_chet = ws.cell("L120").to_string();
    predmet_ch_5_231_1_chet = ws.cell("L125").to_string();
    predmet_ch_6_231_1_chet = ws.cell("L130").to_string();
    predmet_ch_7_231_1_chet = ws.cell("L200").to_string();

    predmet_pt_1_231_1_chet = ws.cell("L135").to_string();
    predmet_pt_2_231_1_chet = ws.cell("L140").to_string();
    predmet_pt_3_231_1_chet = ws.cell("L145").to_string();
    predmet_pt_4_231_1_chet = ws.cell("L150").to_string();
    predmet_pt_5_231_1_chet = ws.cell("L155").to_string();
    predmet_pt_6_231_1_chet = ws.cell("L160").to_string();
    predmet_pt_7_231_1_chet = ws.cell("L200").to_string();


    aud_pon_1_231_1_chet = ws.cell("L7").to_string();
    aud_pon_2_231_1_chet = ws.cell("L12").to_string();
    aud_pon_3_231_1_chet = ws.cell("L17").to_string();
    aud_pon_4_231_1_chet = ws.cell("L22").to_string();
    aud_pon_5_231_1_chet = ws.cell("L27").to_string();
    aud_pon_6_231_1_chet = ws.cell("L32").to_string();
    aud_pon_7_231_1_chet = ws.cell("L37").to_string();

    aud_vt_1_231_1_chet = ws.cell("L42").to_string();
    aud_vt_2_231_1_chet = ws.cell("L47").to_string();
    aud_vt_3_231_1_chet = ws.cell("L52").to_string();
    aud_vt_4_231_1_chet = ws.cell("L57").to_string();
    aud_vt_5_231_1_chet = ws.cell("L62").to_string();
    aud_vt_6_231_1_chet = ws.cell("L67").to_string();
    aud_vt_7_231_1_chet = ws.cell("L200").to_string();

    aud_sr_1_231_1_chet = ws.cell("L72").to_string();
    aud_sr_2_231_1_chet = ws.cell("L77").to_string();
    aud_sr_3_231_1_chet = ws.cell("L82").to_string();
    aud_sr_4_231_1_chet = ws.cell("L87").to_string();
    aud_sr_6_231_1_chet = ws.cell("L92").to_string();
    aud_sr_7_231_1_chet = ws.cell("L97").to_string();

    aud_ch_1_231_1_chet = ws.cell("L102").to_string();
    aud_ch_2_231_1_chet = ws.cell("L107").to_string();
    aud_ch_3_231_1_chet = ws.cell("L112").to_string();
    aud_ch_4_231_1_chet = ws.cell("L117").to_string();
    aud_ch_5_231_1_chet = ws.cell("L122").to_string();
    aud_ch_6_231_1_chet = ws.cell("L127").to_string();
    aud_ch_7_231_1_chet = ws.cell("L200").to_string();

    aud_pt_1_231_1_chet = ws.cell("L132").to_string();
    aud_pt_2_231_1_chet = ws.cell("L137").to_string();
    aud_pt_3_231_1_chet = ws.cell("L142").to_string();
    aud_pt_4_231_1_chet = ws.cell("L147").to_string();
    aud_pt_5_231_1_chet = ws.cell("L152").to_string();
    aud_pt_6_231_1_chet = ws.cell("L157").to_string();
    aud_pt_7_231_1_chet = ws.cell("L200").to_string();


    prepod_pon_1_231_1_chet = ws.cell("L6").to_string();
    prepod_pon_2_231_1_chet = ws.cell("L11").to_string();
    prepod_pon_3_231_1_chet = ws.cell("L16").to_string();
    prepod_pon_4_231_1_chet = ws.cell("L21").to_string();
    prepod_pon_5_231_1_chet = ws.cell("L26").to_string();
    prepod_pon_6_231_1_chet = ws.cell("L31").to_string();
    prepod_pon_7_231_1_chet = ws.cell("L36").to_string();

    prepod_vt_1_231_1_chet = ws.cell("L41").to_string();
    prepod_vt_2_231_1_chet = ws.cell("L46").to_string();
    prepod_vt_3_231_1_chet = ws.cell("L51").to_string();
    prepod_vt_4_231_1_chet = ws.cell("L56").to_string();
    prepod_vt_5_231_1_chet = ws.cell("L61").to_string();
    prepod_vt_6_231_1_chet = ws.cell("L66").to_string();
    prepod_vt_7_231_1_chet = ws.cell("L200").to_string();

    prepod_sr_1_231_1_chet = ws.cell("L71").to_string();
    prepod_sr_2_231_1_chet = ws.cell("L76").to_string();
    prepod_sr_3_231_1_chet = ws.cell("L81").to_string();
    prepod_sr_4_231_1_chet = ws.cell("L86").to_string();
    prepod_sr_5_231_1_chet = ws.cell("L91").to_string();
    prepod_sr_6_231_1_chet = ws.cell("L96").to_string();
    prepod_sr_7_231_1_chet = ws.cell("L101").to_string();

    prepod_ch_1_231_1_chet = ws.cell("L106").to_string();
    prepod_ch_2_231_1_chet = ws.cell("L111").to_string();
    prepod_ch_3_231_1_chet = ws.cell("L116").to_string();
    prepod_ch_4_231_1_chet = ws.cell("L121").to_string();
    prepod_ch_5_231_1_chet = ws.cell("L126").to_string();
    prepod_ch_6_231_1_chet = ws.cell("L131").to_string();
    prepod_ch_7_231_1_chet = ws.cell("L200").to_string();

    prepod_pt_1_231_1_chet = ws.cell("L136").to_string();
    prepod_pt_2_231_1_chet = ws.cell("L141").to_string();
    prepod_pt_3_231_1_chet = ws.cell("L146").to_string();
    prepod_pt_4_231_1_chet = ws.cell("L151").to_string();
    prepod_pt_5_231_1_chet = ws.cell("L156").to_string();
    prepod_pt_6_231_1_chet = ws.cell("L161").to_string();
    prepod_pt_7_231_1_chet = ws.cell("L200").to_string();



    //231(2)чет
    predmet_pon_1_231_2_chet = ws.cell("M5").to_string();
    predmet_pon_2_231_2_chet = ws.cell("M10").to_string();
    predmet_pon_3_231_2_chet = ws.cell("M15").to_string();
    predmet_pon_4_231_2_chet = ws.cell("M20").to_string();
    predmet_pon_5_231_2_chet = ws.cell("M25").to_string();
    predmet_pon_6_231_2_chet = ws.cell("M30").to_string();
    predmet_pon_7_231_2_chet = ws.cell("M35").to_string();

    predmet_vt_1_231_2_chet = ws.cell("M40").to_string();
    predmet_vt_2_231_2_chet = ws.cell("M455").to_string();
    predmet_vt_3_231_2_chet = ws.cell("M0").to_string();
    predmet_vt_4_231_2_chet = ws.cell("M55").to_string();
    predmet_vt_5_231_2_chet = ws.cell("M60").to_string();
    predmet_vt_6_231_2_chet = ws.cell("M65").to_string();
    predmet_vt_7_231_2_chet = ws.cell("M200").to_string();

    predmet_sr_1_231_2_chet = ws.cell("M70").to_string();
    predmet_sr_2_231_2_chet = ws.cell("M75").to_string();
    predmet_sr_3_231_2_chet = ws.cell("M80").to_string();
    predmet_sr_4_231_2_chet = ws.cell("M85").to_string();
    predmet_sr_5_231_2_chet = ws.cell("M90").to_string();
    predmet_sr_6_231_2_chet = ws.cell("M95").to_string();
    predmet_sr_7_231_2_chet = ws.cell("M100").to_string();

    predmet_ch_1_231_2_chet = ws.cell("M105").to_string();
    predmet_ch_2_231_2_chet = ws.cell("M110").to_string();
    predmet_ch_3_231_2_chet = ws.cell("M115").to_string();
    predmet_ch_4_231_2_chet = ws.cell("M120").to_string();
    predmet_ch_5_231_2_chet = ws.cell("M125").to_string();
    predmet_ch_6_231_2_chet = ws.cell("M130").to_string();
    predmet_ch_7_231_2_chet = ws.cell("M200").to_string();

    predmet_pt_1_231_2_chet = ws.cell("M135").to_string();
    predmet_pt_2_231_2_chet = ws.cell("M140").to_string();
    predmet_pt_3_231_2_chet = ws.cell("M145").to_string();
    predmet_pt_4_231_2_chet = ws.cell("M150").to_string();
    predmet_pt_5_231_2_chet = ws.cell("M155").to_string();
    predmet_pt_6_231_2_chet = ws.cell("M160").to_string();
    predmet_pt_7_231_2_chet = ws.cell("M200").to_string();


    aud_pon_1_231_2_chet = ws.cell("M7").to_string();
    aud_pon_2_231_2_chet = ws.cell("M12").to_string();
    aud_pon_3_231_2_chet = ws.cell("M17").to_string();
    aud_pon_4_231_2_chet = ws.cell("M22").to_string();
    aud_pon_5_231_2_chet = ws.cell("M27").to_string();
    aud_pon_6_231_2_chet = ws.cell("M32").to_string();
    aud_pon_7_231_2_chet = ws.cell("M37").to_string();

    aud_vt_1_231_2_chet = ws.cell("M42").to_string();
    aud_vt_2_231_2_chet = ws.cell("M47").to_string();
    aud_vt_3_231_2_chet = ws.cell("M52").to_string();
    aud_vt_4_231_2_chet = ws.cell("M57").to_string();
    aud_vt_5_231_2_chet = ws.cell("M62").to_string();
    aud_vt_6_231_2_chet = ws.cell("M67").to_string();
    aud_vt_7_231_2_chet = ws.cell("M200").to_string();

    aud_sr_1_231_2_chet = ws.cell("M72").to_string();
    aud_sr_2_231_2_chet = ws.cell("M77").to_string();
    aud_sr_3_231_2_chet = ws.cell("M82").to_string();
    aud_sr_4_231_2_chet = ws.cell("M87").to_string();
    aud_sr_5_231_2_chet = ws.cell("M92").to_string();
    aud_sr_6_231_2_chet = ws.cell("M97").to_string();
    aud_sr_7_231_2_chet = ws.cell("M102").to_string();

    aud_ch_1_231_2_chet = ws.cell("M107").to_string();
    aud_ch_2_231_2_chet = ws.cell("M112").to_string();
    aud_ch_3_231_2_chet = ws.cell("M117").to_string();
    aud_ch_4_231_2_chet = ws.cell("M122").to_string();
    aud_ch_5_231_2_chet = ws.cell("M127").to_string();
    aud_ch_6_231_2_chet = ws.cell("M132").to_string();
    aud_ch_7_231_2_chet = ws.cell("M200").to_string();

    aud_pt_1_231_2_chet = ws.cell("M137").to_string();
    aud_pt_2_231_2_chet = ws.cell("M142").to_string();
    aud_pt_3_231_2_chet = ws.cell("M147").to_string();
    aud_pt_4_231_2_chet = ws.cell("M152").to_string();
    aud_pt_5_231_2_chet = ws.cell("M157").to_string();
    aud_pt_6_231_2_chet = ws.cell("M162").to_string();
    aud_pt_7_231_2_chet = ws.cell("M200").to_string();


    prepod_pon_1_231_2_chet = ws.cell("M6").to_string();
    prepod_pon_2_231_2_chet = ws.cell("M11").to_string();
    prepod_pon_3_231_2_chet = ws.cell("M16").to_string();
    prepod_pon_4_231_2_chet = ws.cell("M21").to_string();
    prepod_pon_5_231_2_chet = ws.cell("M26").to_string();
    prepod_pon_6_231_2_chet = ws.cell("M31").to_string();
    prepod_pon_7_231_2_chet = ws.cell("M36").to_string();

    prepod_vt_1_231_2_chet = ws.cell("M41").to_string();
    prepod_vt_2_231_2_chet = ws.cell("M46").to_string();
    prepod_vt_3_231_2_chet = ws.cell("M51").to_string();
    prepod_vt_4_231_2_chet = ws.cell("M56").to_string();
    prepod_vt_5_231_2_chet = ws.cell("M61").to_string();
    prepod_vt_6_231_2_chet = ws.cell("M66").to_string();
    prepod_vt_7_231_2_chet = ws.cell("M200").to_string();

    prepod_sr_1_231_2_chet = ws.cell("M71").to_string();
    prepod_sr_2_231_2_chet = ws.cell("M76").to_string();
    prepod_sr_3_231_2_chet = ws.cell("M81").to_string();
    prepod_sr_4_231_2_chet = ws.cell("M86").to_string();
    prepod_sr_5_231_2_chet = ws.cell("M91").to_string();
    prepod_sr_6_231_2_chet = ws.cell("M96").to_string();
    prepod_sr_7_231_2_chet = ws.cell("M101").to_string();

    prepod_ch_1_231_2_chet = ws.cell("M106").to_string();
    prepod_ch_2_231_2_chet = ws.cell("M111").to_string();
    prepod_ch_3_231_2_chet = ws.cell("M116").to_string();
    prepod_ch_4_231_2_chet = ws.cell("M121").to_string();
    prepod_ch_5_231_2_chet = ws.cell("M126").to_string();
    prepod_ch_6_231_2_chet = ws.cell("M131").to_string();
    prepod_ch_7_231_2_chet = ws.cell("M200").to_string();

    prepod_pt_1_231_2_chet = ws.cell("M136").to_string();
    prepod_pt_2_231_2_chet = ws.cell("M141").to_string();
    prepod_pt_3_231_2_chet = ws.cell("M146").to_string();
    prepod_pt_4_231_2_chet = ws.cell("M151").to_string();
    prepod_pt_5_231_2_chet = ws.cell("M156").to_string();
    prepod_pt_6_231_2_chet = ws.cell("M161").to_string();
    prepod_pt_7_231_2_chet = ws.cell("M200").to_string();



    //232(1)чет
    predmet_pon_1_232_1_chet = ws.cell("O5").to_string();
    predmet_pon_2_232_1_chet = ws.cell("O10").to_string();
    predmet_pon_3_232_1_chet = ws.cell("O15").to_string();
    predmet_pon_4_232_1_chet = ws.cell("O20").to_string();
    predmet_pon_5_232_1_chet = ws.cell("O25").to_string();
    predmet_pon_6_232_1_chet = ws.cell("O30").to_string();
    predmet_pon_7_232_1_chet = ws.cell("O35").to_string();

    predmet_vt_1_232_1_chet = ws.cell("O40").to_string();
    predmet_vt_2_232_1_chet = ws.cell("O45").to_string();
    predmet_vt_3_232_1_chet = ws.cell("O50").to_string();
    predmet_vt_4_232_1_chet = ws.cell("O55").to_string();
    predmet_vt_5_232_1_chet = ws.cell("O60").to_string();
    predmet_vt_6_232_1_chet = ws.cell("O65").to_string();
    predmet_vt_7_232_1_chet = ws.cell("O200").to_string();

    predmet_sr_1_232_1_chet = ws.cell("O70").to_string();
    predmet_sr_2_232_1_chet = ws.cell("O75").to_string();
    predmet_sr_3_232_1_chet = ws.cell("O80").to_string();
    predmet_sr_4_232_1_chet = ws.cell("O85").to_string();
    predmet_sr_5_232_1_chet = ws.cell("O90").to_string();
    predmet_sr_6_232_1_chet = ws.cell("O95").to_string();
    predmet_sr_7_232_1_chet = ws.cell("O100").to_string();

    predmet_ch_1_232_1_chet = ws.cell("O105").to_string();
    predmet_ch_2_232_1_chet = ws.cell("O110").to_string();
    predmet_ch_3_232_1_chet = ws.cell("O115").to_string();
    predmet_ch_4_232_1_chet = ws.cell("O120").to_string();
    predmet_ch_5_232_1_chet = ws.cell("O125").to_string();
    predmet_ch_6_232_1_chet = ws.cell("O130").to_string();
    predmet_ch_7_232_1_chet = ws.cell("O200").to_string();

    predmet_pt_1_232_1_chet = ws.cell("O135").to_string();
    predmet_pt_2_232_1_chet = ws.cell("O140").to_string();
    predmet_pt_3_232_1_chet = ws.cell("O145").to_string();
    predmet_pt_4_232_1_chet = ws.cell("O150").to_string();
    predmet_pt_5_232_1_chet = ws.cell("O155").to_string();
    predmet_pt_6_232_1_chet = ws.cell("O160").to_string();
    predmet_pt_7_232_1_chet = ws.cell("O200").to_string();


    aud_pon_1_232_1_chet = ws.cell("O7").to_string();
    aud_pon_2_232_1_chet = ws.cell("O12").to_string();
    aud_pon_3_232_1_chet = ws.cell("O17").to_string();
    aud_pon_4_232_1_chet = ws.cell("O22").to_string();
    aud_pon_5_232_1_chet = ws.cell("O27").to_string();
    aud_pon_6_232_1_chet = ws.cell("O32").to_string();
    aud_pon_7_232_1_chet = ws.cell("O37").to_string();

    aud_vt_1_232_1_chet = ws.cell("O42").to_string();
    aud_vt_2_232_1_chet = ws.cell("O47").to_string();
    aud_vt_3_232_1_chet = ws.cell("O52").to_string();
    aud_vt_4_232_1_chet = ws.cell("O57").to_string();
    aud_vt_5_232_1_chet = ws.cell("O62").to_string();
    aud_vt_6_232_1_chet = ws.cell("O67").to_string();
    aud_vt_7_232_1_chet = ws.cell("O200").to_string();

    aud_sr_1_232_1_chet = ws.cell("O72").to_string();
    aud_sr_2_232_1_chet = ws.cell("O77").to_string();
    aud_sr_3_232_1_chet = ws.cell("O82").to_string();
    aud_sr_4_232_1_chet = ws.cell("O87").to_string();
    aud_sr_5_232_1_chet = ws.cell("O92").to_string();
    aud_sr_6_232_1_chet = ws.cell("O97").to_string();
    aud_sr_7_232_1_chet = ws.cell("O102").to_string();

    aud_ch_1_232_1_chet = ws.cell("O107").to_string();
    aud_ch_2_232_1_chet = ws.cell("O112").to_string();
    aud_ch_3_232_1_chet = ws.cell("O117").to_string();
    aud_ch_4_232_1_chet = ws.cell("O122").to_string();
    aud_ch_5_232_1_chet = ws.cell("O127").to_string();
    aud_ch_6_232_1_chet = ws.cell("O132").to_string();
    aud_ch_7_232_1_chet = ws.cell("O200").to_string();

    aud_pt_1_232_1_chet = ws.cell("O137").to_string();
    aud_pt_2_232_1_chet = ws.cell("O142").to_string();
    aud_pt_3_232_1_chet = ws.cell("O147").to_string();
    aud_pt_4_232_1_chet = ws.cell("O152").to_string();
    aud_pt_5_232_1_chet = ws.cell("O157").to_string();
    aud_pt_6_232_1_chet = ws.cell("O162").to_string();
    aud_pt_7_232_1_chet = ws.cell("O200").to_string();


    prepod_pon_1_232_1_chet = ws.cell("O6").to_string();
    prepod_pon_2_232_1_chet = ws.cell("O11").to_string();
    prepod_pon_3_232_1_chet = ws.cell("O16").to_string();
    prepod_pon_4_232_1_chet = ws.cell("O21").to_string();
    prepod_pon_5_232_1_chet = ws.cell("O26").to_string();
    prepod_pon_6_232_1_chet = ws.cell("O31").to_string();
    prepod_pon_7_232_1_chet = ws.cell("O36").to_string();

    prepod_vt_1_232_1_chet = ws.cell("O41").to_string();
    prepod_vt_2_232_1_chet = ws.cell("O46").to_string();
    prepod_vt_3_232_1_chet = ws.cell("O51").to_string();
    prepod_vt_4_232_1_chet = ws.cell("O56").to_string();
    prepod_vt_5_232_1_chet = ws.cell("O61").to_string();
    prepod_vt_6_232_1_chet = ws.cell("O66").to_string();
    prepod_vt_7_232_1_chet = ws.cell("O200").to_string();

    prepod_sr_1_232_1_chet = ws.cell("O71").to_string();
    prepod_sr_2_232_1_chet = ws.cell("O76").to_string();
    prepod_sr_3_232_1_chet = ws.cell("O81").to_string();
    prepod_sr_4_232_1_chet = ws.cell("O86").to_string();
    prepod_sr_5_232_1_chet = ws.cell("O91").to_string();
    prepod_sr_6_232_1_chet = ws.cell("O96").to_string();
    prepod_sr_7_232_1_chet = ws.cell("O101").to_string();

    prepod_ch_1_232_1_chet = ws.cell("O106").to_string();
    prepod_ch_2_232_1_chet = ws.cell("O111").to_string();
    prepod_ch_3_232_1_chet = ws.cell("O116").to_string();
    prepod_ch_4_232_1_chet = ws.cell("O121").to_string();
    prepod_ch_5_232_1_chet = ws.cell("O126").to_string();
    prepod_ch_6_232_1_chet = ws.cell("O131").to_string();
    prepod_ch_7_232_1_chet = ws.cell("O200").to_string();

    prepod_pt_1_232_1_chet = ws.cell("O136").to_string();
    prepod_pt_2_232_1_chet = ws.cell("O141").to_string();
    prepod_pt_3_232_1_chet = ws.cell("O146").to_string();
    prepod_pt_4_232_1_chet = ws.cell("O151").to_string();
    prepod_pt_5_232_1_chet = ws.cell("O156").to_string();
    prepod_pt_6_232_1_chet = ws.cell("O161").to_string();
    prepod_pt_7_232_1_chet = ws.cell("O200").to_string();


    //232(2) чет
    predmet_pon_1_232_2_chet = ws.cell("P5").to_string();
    predmet_pon_2_232_2_chet = ws.cell("P10").to_string();
    predmet_pon_3_232_2_chet = ws.cell("P15").to_string();
    predmet_pon_4_232_2_chet = ws.cell("P20").to_string();
    predmet_pon_5_232_2_chet = ws.cell("P25").to_string();
    predmet_pon_6_232_2_chet = ws.cell("P30").to_string();
    predmet_pon_7_232_2_chet = ws.cell("P35").to_string();

    predmet_vt_1_232_2_chet = ws.cell("P40").to_string();
    predmet_vt_2_232_2_chet = ws.cell("P45").to_string();
    predmet_vt_3_232_2_chet = ws.cell("P50").to_string();
    predmet_vt_4_232_2_chet = ws.cell("P55").to_string();
    predmet_vt_5_232_2_chet = ws.cell("P60").to_string();
    predmet_vt_6_232_2_chet = ws.cell("P65").to_string();
    predmet_vt_7_232_2_chet = ws.cell("P200").to_string();

    predmet_sr_1_232_2_chet = ws.cell("P70").to_string();
    predmet_sr_2_232_2_chet = ws.cell("P75").to_string();
    predmet_sr_3_232_2_chet = ws.cell("P80").to_string();
    predmet_sr_4_232_2_chet = ws.cell("P85").to_string();
    predmet_sr_5_232_2_chet = ws.cell("P90").to_string();
    predmet_sr_6_232_2_chet = ws.cell("P95").to_string();
    predmet_sr_7_232_2_chet = ws.cell("P100").to_string();

    predmet_ch_1_232_2_chet = ws.cell("P105").to_string();
    predmet_ch_2_232_2_chet = ws.cell("P110").to_string();
    predmet_ch_3_232_2_chet = ws.cell("P115").to_string();
    predmet_ch_4_232_2_chet = ws.cell("P120").to_string();
    predmet_ch_5_232_2_chet = ws.cell("P125").to_string();
    predmet_ch_6_232_2_chet = ws.cell("P130").to_string();
    predmet_ch_7_232_2_chet = ws.cell("P200").to_string();

    predmet_pt_1_232_2_chet = ws.cell("P135").to_string();
    predmet_pt_2_232_2_chet = ws.cell("P140").to_string();
    predmet_pt_3_232_2_chet = ws.cell("P145").to_string();
    predmet_pt_4_232_2_chet = ws.cell("P150").to_string();
    predmet_pt_5_232_2_chet = ws.cell("P155").to_string();
    predmet_pt_6_232_2_chet = ws.cell("P160").to_string();
    predmet_pt_7_232_2_chet = ws.cell("P200").to_string();


    aud_pon_1_232_2_chet = ws.cell("P7").to_string();
    aud_pon_2_232_2_chet = ws.cell("P12").to_string();
    aud_pon_3_232_2_chet = ws.cell("P17").to_string();
    aud_pon_4_232_2_chet = ws.cell("P22").to_string();
    aud_pon_5_232_2_chet = ws.cell("P27").to_string();
    aud_pon_6_232_2_chet = ws.cell("P32").to_string();
    aud_pon_7_232_2_chet = ws.cell("P37").to_string();

    aud_vt_1_232_2_chet = ws.cell("P42").to_string();
    aud_vt_2_232_2_chet = ws.cell("P47").to_string();
    aud_vt_3_232_2_chet = ws.cell("P52").to_string();
    aud_vt_4_232_2_chet = ws.cell("P57").to_string();
    aud_vt_5_232_2_chet = ws.cell("P62").to_string();
    aud_vt_6_232_2_chet = ws.cell("P67").to_string();
    aud_vt_7_232_2_chet = ws.cell("P200").to_string();

    aud_sr_1_232_2_chet = ws.cell("P72").to_string();
    aud_sr_2_232_2_chet = ws.cell("P77").to_string();
    aud_sr_3_232_2_chet = ws.cell("P82").to_string();
    aud_sr_4_232_2_chet = ws.cell("P87").to_string();
    aud_sr_5_232_2_chet = ws.cell("P92").to_string();
    aud_sr_6_232_2_chet = ws.cell("P97").to_string();
    aud_sr_7_232_2_chet = ws.cell("P102").to_string();

    aud_ch_1_232_2_chet = ws.cell("P107").to_string();
    aud_ch_2_232_2_chet = ws.cell("P112").to_string();
    aud_ch_3_232_2_chet = ws.cell("P117").to_string();
    aud_ch_4_232_2_chet = ws.cell("P122").to_string();
    aud_ch_5_232_2_chet = ws.cell("P127").to_string();
    aud_ch_6_232_2_chet = ws.cell("P132").to_string();
    aud_ch_7_232_2_chet = ws.cell("P200").to_string();

    aud_pt_1_232_2_chet = ws.cell("P137").to_string();
    aud_pt_2_232_2_chet = ws.cell("P142").to_string();
    aud_pt_3_232_2_chet = ws.cell("P147").to_string();
    aud_pt_4_232_2_chet = ws.cell("P152").to_string();
    aud_pt_5_232_2_chet = ws.cell("P157").to_string();
    aud_pt_6_232_2_chet = ws.cell("P162").to_string();
    aud_pt_7_232_2_chet = ws.cell("P200").to_string();


    prepod_pon_1_232_2_chet = ws.cell("P6").to_string();
    prepod_pon_2_232_2_chet = ws.cell("P11").to_string();
    prepod_pon_3_232_2_chet = ws.cell("P16").to_string();
    prepod_pon_4_232_2_chet = ws.cell("P21").to_string();
    prepod_pon_5_232_2_chet = ws.cell("P26").to_string();
    prepod_pon_6_232_2_chet = ws.cell("P31").to_string();
    prepod_pon_7_232_2_chet = ws.cell("P36").to_string();

    prepod_vt_1_232_2_chet = ws.cell("P41").to_string();
    prepod_vt_2_232_2_chet = ws.cell("P46").to_string();
    prepod_vt_3_232_2_chet = ws.cell("P51").to_string();
    prepod_vt_4_232_2_chet = ws.cell("P56").to_string();
    prepod_vt_5_232_2_chet = ws.cell("P61").to_string();
    prepod_vt_6_232_2_chet = ws.cell("P66").to_string();
    prepod_vt_7_232_2_chet = ws.cell("P200").to_string();

    prepod_sr_1_232_2_chet = ws.cell("P71").to_string();
    prepod_sr_2_232_2_chet = ws.cell("P76").to_string();
    prepod_sr_3_232_2_chet = ws.cell("P81").to_string();
    prepod_sr_4_232_2_chet = ws.cell("P86").to_string();
    prepod_sr_5_232_2_chet = ws.cell("P91").to_string();
    prepod_sr_6_232_2_chet = ws.cell("P96").to_string();
    prepod_sr_7_232_2_chet = ws.cell("P101").to_string();

    prepod_ch_1_232_2_chet = ws.cell("P106").to_string();
    prepod_ch_2_232_2_chet = ws.cell("P111").to_string();
    prepod_ch_3_232_2_chet = ws.cell("P116").to_string();
    prepod_ch_4_232_2_chet = ws.cell("P121").to_string();
    prepod_ch_5_232_2_chet = ws.cell("P126").to_string();
    prepod_ch_6_232_2_chet = ws.cell("P131").to_string();
    prepod_ch_7_232_2_chet = ws.cell("P200").to_string();

    prepod_pt_1_232_2_chet = ws.cell("P136").to_string();
    prepod_pt_2_232_2_chet = ws.cell("P141").to_string();
    prepod_pt_3_232_2_chet = ws.cell("P146").to_string();
    prepod_pt_4_232_2_chet = ws.cell("P151").to_string();
    prepod_pt_5_232_2_chet = ws.cell("P156").to_string();
    prepod_pt_6_232_2_chet = ws.cell("P161").to_string();
    prepod_pt_7_232_2_chet = ws.cell("P200").to_string();

   

   
   //ПОСЫЛАЕМ!!!!!!

    
 
    
res.set_content(
predmet_pon_1_231_1_nech + " ; " +
predmet_pon_2_231_1_nech + " ; " +
predmet_pon_3_231_1_nech + " ; " +
predmet_pon_4_231_1_nech + " ; " +
predmet_pon_5_231_1_nech + " ; " +
predmet_pon_6_231_1_nech + " ; " +
predmet_pon_7_231_1_nech + " ; " +

predmet_vt_1_231_1_nech + " ; " +
predmet_vt_2_231_1_nech + " ; " +
predmet_vt_3_231_1_nech + " ; " +
predmet_vt_4_231_1_nech + " ; " +
predmet_vt_5_231_1_nech + " ; " +
predmet_vt_6_231_1_nech + " ; " +
predmet_vt_7_231_1_nech + " ; " +

predmet_sr_1_231_1_nech + " ; " +
predmet_sr_2_231_1_nech + " ; " +
predmet_sr_3_231_1_nech + " ; " +
predmet_sr_4_231_1_nech + " ; " +
predmet_sr_5_231_1_nech + " ; " +
predmet_sr_6_231_1_nech + " ; " +
predmet_sr_7_231_1_nech + " ; " +

predmet_ch_1_231_1_nech + " ; " +
predmet_ch_2_231_1_nech + " ; " +
predmet_ch_3_231_1_nech + " ; " +
predmet_ch_4_231_1_nech + " ; " +
predmet_ch_5_231_1_nech + " ; " +
predmet_ch_6_231_1_nech + " ; " +
predmet_ch_7_231_1_nech + " ; " +

predmet_pt_1_231_1_nech + " ; " +
predmet_pt_2_231_1_nech + " ; " +
predmet_pt_3_231_1_nech + " ; " +
predmet_pt_4_231_1_nech + " ; " +
predmet_pt_5_231_1_nech + " ; " +
predmet_pt_6_231_1_nech + " ; " +
predmet_pt_7_231_1_nech + " ; " +

aud_pon_1_231_1_nech + " ; " +
aud_pon_2_231_1_nech + " ; " +
aud_pon_3_231_1_nech + " ; " +
aud_pon_4_231_1_nech + " ; " +
aud_pon_5_231_1_nech + " ; " +
aud_pon_6_231_1_nech + " ; " +
aud_pon_7_231_1_nech + " ; " +

aud_vt_1_231_1_nech + " ; " +
aud_vt_2_231_1_nech + " ; " +
aud_vt_3_231_1_nech + " ; " +
aud_vt_4_231_1_nech + " ; " +
aud_vt_5_231_1_nech + " ; " +
aud_vt_6_231_1_nech + " ; " +
aud_vt_7_231_1_nech + " ; " +

aud_sr_1_231_1_nech + " ; " +
aud_sr_2_231_1_nech + " ; " +
aud_sr_3_231_1_nech + " ; " +
aud_sr_4_231_1_nech + " ; " +
aud_sr_5_231_1_nech + " ; " +
aud_sr_6_231_1_nech + " ; " +
aud_sr_7_231_1_nech + " ; " +

aud_ch_1_231_1_nech + " ; " +
aud_ch_2_231_1_nech + " ; " +
aud_ch_3_231_1_nech + " ; " + 
aud_ch_4_231_1_nech + " ; " +
aud_ch_5_231_1_nech + " ; " +
aud_ch_6_231_1_nech + " ; " +
aud_ch_7_231_1_nech + " ; " +

aud_pt_1_231_1_nech + " ; " +
aud_pt_2_231_1_nech + " ; " + 
aud_pt_3_231_1_nech + " ; " +
aud_pt_4_231_1_nech + " ; " +
aud_pt_5_231_1_nech + " ; " +
aud_pt_6_231_1_nech + " ; " +
aud_pt_7_231_1_nech + " ; " +

prepod_pon_1_231_1_nech + " ; " +
prepod_pon_2_231_1_nech + " ; " +
prepod_pon_3_231_1_nech + " ; " +
prepod_pon_4_231_1_nech + " ; " +
prepod_pon_5_231_1_nech + " ; " +
prepod_pon_6_231_1_nech + " ; " +
prepod_pon_7_231_1_nech + " ; " +

prepod_vt_1_231_1_nech + " ; " +
prepod_vt_2_231_1_nech + " ; " +
prepod_vt_3_231_1_nech + " ; " +
prepod_vt_4_231_1_nech + " ; " +
prepod_vt_5_231_1_nech + " ; " +
prepod_vt_6_231_1_nech + " ; " +
prepod_vt_7_231_1_nech + " ; " +

prepod_sr_1_231_1_nech + " ; " +
prepod_sr_2_231_1_nech + " ; " +
prepod_sr_3_231_1_nech + " ; " +
prepod_sr_4_231_1_nech + " ; " +
prepod_sr_5_231_1_nech + " ; " +
prepod_sr_6_231_1_nech + " ; " +
prepod_sr_7_231_1_nech + " ; " +

prepod_ch_1_231_1_nech + " ; " +
prepod_ch_2_231_1_nech + " ; " +
prepod_ch_3_231_1_nech + " ; " +
prepod_ch_4_231_1_nech + " ; " +
prepod_ch_5_231_1_nech + " ; " +
prepod_ch_6_231_1_nech + " ; " +
prepod_ch_7_231_1_nech + " ; " +

prepod_pt_1_231_1_nech + " ; " +
prepod_pt_2_231_1_nech + " ; " +
prepod_pt_3_231_1_nech + " ; " +
prepod_pt_4_231_1_nech + " ; " +
prepod_pt_5_231_1_nech + " ; " +
prepod_pt_6_231_1_nech + " ; " +
prepod_pt_7_231_1_nech + " ; " +

predmet_pon_1_231_2_nech + " ; " +
predmet_pon_2_231_2_nech + " ; " +
predmet_pon_3_231_2_nech + " ; " +
predmet_pon_4_231_2_nech + " ; " +
predmet_pon_5_231_2_nech + " ; " +
predmet_pon_6_231_2_nech + " ; " +
predmet_pon_7_231_2_nech + " ; " +

predmet_vt_1_231_2_nech + " ; " +
predmet_vt_2_231_2_nech + " ; " +
predmet_vt_3_231_2_nech + " ; " +
predmet_vt_4_231_2_nech + " ; " +
predmet_vt_5_231_2_nech + " ; " +
predmet_vt_6_231_2_nech + " ; " +
predmet_vt_7_231_2_nech + " ; " +

predmet_sr_1_231_2_nech + " ; " +
predmet_sr_2_231_2_nech  +" ; " +
predmet_sr_3_231_2_nech + " ; " +
predmet_sr_4_231_2_nech + " ; " +
predmet_sr_5_231_2_nech + " ; " +
predmet_sr_6_231_2_nech  +" ; " +
predmet_sr_7_231_2_nech + " ; " +

predmet_ch_1_231_2_nech + " ; " +
predmet_ch_2_231_2_nech + " ; " +
predmet_ch_3_231_2_nech + " ; " +
predmet_ch_4_231_2_nech + " ; " +
predmet_ch_5_231_2_nech + " ; " +
predmet_ch_6_231_2_nech + " ; " +
predmet_ch_7_231_2_nech + " ; " +

predmet_pt_1_231_2_nech + " ; " +
predmet_pt_2_231_2_nech + " ; " +
predmet_pt_3_231_2_nech + " ; " +
predmet_pt_4_231_2_nech + " ; " +
predmet_pt_5_231_2_nech + " ; " +
predmet_pt_6_231_2_nech + " ; " +
predmet_pt_7_231_2_nech + " ; " +

aud_pon_1_231_2_nech +" ; " +
aud_pon_2_231_2_nech + " ; " +
aud_pon_3_231_2_nech + " ; " +
aud_pon_4_231_2_nech + " ; " +
aud_pon_5_231_2_nech + " ; " +
aud_pon_6_231_2_nech  +" ; " +
aud_pon_7_231_2_nech + " ; " +

aud_vt_1_231_2_nech + " ; " +
aud_vt_2_231_2_nech + " ; " +
aud_vt_3_231_2_nech + " ; " +
aud_vt_4_231_2_nech + " ; " +
aud_vt_5_231_2_nech + " ; " +
aud_vt_6_231_2_nech  +" ; " +
aud_vt_7_231_2_nech + " ; " +

aud_sr_1_231_2_nech + " ; " +
aud_sr_2_231_2_nech + " ; " +
aud_sr_3_231_2_nech + " ; " +
aud_sr_4_231_2_nech + " ; " +
aud_sr_5_231_2_nech +" ; " +
aud_sr_6_231_2_nech + " ; " +
aud_sr_7_231_2_nech + " ; " +

aud_ch_1_231_2_nech + " ; " +
aud_ch_2_231_2_nech + " ; " +
aud_ch_3_231_2_nech + " ; " +
aud_ch_4_231_2_nech + " ; " +
aud_ch_5_231_2_nech + " ; " +
aud_ch_6_231_2_nech + " ; " +
aud_ch_7_231_2_nech + " ; " +

aud_pt_1_231_2_nech + " ; " +
aud_pt_2_231_2_nech + " ; " +
aud_pt_3_231_2_nech + " ; " +
aud_pt_4_231_2_nech + " ; " +
aud_pt_5_231_2_nech + " ; " +
aud_pt_6_231_2_nech + " ; " +
aud_pt_7_231_2_nech + " ; " +

prepod_pon_1_231_2_nech + " ; " +
prepod_pon_2_231_2_nech + " ; " +
prepod_pon_3_231_2_nech + " ; " +
prepod_pon_4_231_2_nech + " ; " +
prepod_pon_5_231_2_nech + " ; " +
prepod_pon_6_231_2_nech + " ; " +
prepod_pon_7_231_2_nech + " ; " +

prepod_vt_1_231_2_nech + " ; " +
prepod_vt_2_231_2_nech + " ; " +
prepod_vt_3_231_2_nech + " ; " +
prepod_vt_4_231_2_nech  +" ; " +
prepod_vt_5_231_2_nech + " ; " +
prepod_vt_6_231_2_nech + " ; " +
prepod_vt_7_231_2_nech + " ; " +

prepod_sr_1_231_2_nech + " ; " +
prepod_sr_2_231_2_nech + " ; " +
prepod_sr_3_231_2_nech + " ; " +
prepod_sr_4_231_2_nech + " ; " +
prepod_sr_5_231_2_nech + " ; " +
prepod_sr_6_231_2_nech + " ; " +
prepod_sr_7_231_2_nech + " ; " +

prepod_ch_1_231_2_nech + " ; " +
prepod_ch_2_231_2_nech + " ; " +
prepod_ch_3_231_2_nech + " ; " +
prepod_ch_4_231_2_nech + " ; " +
prepod_ch_5_231_2_nech + " ; " +
prepod_ch_6_231_2_nech + " ; " +
prepod_ch_7_231_2_nech + " ; " +

prepod_pt_1_231_2_nech + " ; " +
prepod_pt_2_231_2_nech + " ; " +
prepod_pt_3_231_2_nech + " ; " +
prepod_pt_4_231_2_nech + " ; " +
prepod_pt_5_231_2_nech + " ; " +
prepod_pt_6_231_2_nech  +" ; " +
prepod_pt_7_231_2_nech + " ; " +

predmet_pon_1_232_1_nech + " ; " +
predmet_pon_2_232_1_nech + " ; " +
predmet_pon_3_232_1_nech + " ; " +
predmet_pon_4_232_1_nech + " ; " +
predmet_pon_5_232_1_nech + " ; " +
predmet_pon_6_232_1_nech + " ; " +
predmet_pon_7_232_1_nech + " ; " +

predmet_vt_1_232_1_nech + " ; " +
predmet_vt_2_232_1_nech + " ; " +
predmet_vt_3_232_1_nech + " ; " +
predmet_vt_4_232_1_nech + " ; " +
predmet_vt_5_232_1_nech + " ; " +
predmet_vt_6_232_1_nech + " ; " +
predmet_vt_7_232_1_nech + " ; " +

predmet_sr_1_232_1_nech + " ; " +
predmet_sr_2_232_1_nech + " ; " +
predmet_sr_3_232_1_nech + " ; " +
predmet_sr_4_232_1_nech + " ; " +
predmet_sr_5_232_1_nech + " ; " +
predmet_sr_6_232_1_nech + " ; " +
predmet_sr_7_232_1_nech + " ; " +

predmet_ch_1_232_1_nech + " ; " +
predmet_ch_2_232_1_nech + " ; " +
predmet_ch_3_232_1_nech + " ; " +
predmet_ch_4_232_1_nech + " ; " +
predmet_ch_5_232_1_nech + " ; " +
predmet_ch_6_232_1_nech + " ; " +
predmet_ch_7_232_1_nech + " ; " +

predmet_pt_1_232_1_nech + " ; " +
predmet_pt_2_232_1_nech + " ; " +
predmet_pt_3_232_1_nech + " ; " +
predmet_pt_4_232_1_nech + " ; " +
predmet_pt_5_232_1_nech + " ; " +
predmet_pt_6_232_1_nech + " ; " +
predmet_pt_7_232_1_nech + " ; " +

aud_pon_1_232_1_nech + " ; " +
aud_pon_2_232_1_nech + " ; " +
aud_pon_3_232_1_nech + " ; " +
aud_pon_4_232_1_nech + " ; " +
aud_pon_5_232_1_nech + " ; " +
aud_pon_6_232_1_nech + " ; " +
aud_pon_7_232_1_nech + " ; " +

aud_vt_1_232_1_nech + " ; " +
aud_vt_2_232_1_nech + " ; " +
aud_vt_3_232_1_nech + " ; " +
aud_vt_4_232_1_nech + " ; " +
aud_vt_5_232_1_nech + " ; " +
aud_vt_6_232_1_nech + " ; " +
aud_vt_7_232_1_nech + " ; " +

aud_sr_1_232_1_nech + " ; " +
aud_sr_2_232_1_nech + " ; " +
aud_sr_3_232_1_nech + " ; " +
aud_sr_4_232_1_nech + " ; " +
aud_sr_5_232_1_nech + " ; " +
aud_sr_6_232_1_nech + " ; " +
aud_sr_7_232_1_nech + " ; " +

aud_ch_1_232_1_nech + " ; " +
aud_ch_2_232_1_nech + " ; " +
aud_ch_3_232_1_nech + " ; " +
aud_ch_4_232_1_nech + " ; " +
aud_ch_5_232_1_nech + " ; " +
aud_ch_6_232_1_nech + " ; " +
aud_ch_7_232_1_nech + " ; " +

aud_pt_1_232_1_nech + " ; " +
aud_pt_2_232_1_nech + " ; " +
aud_pt_3_232_1_nech + " ; " +
aud_pt_4_232_1_nech + " ; " +
aud_pt_5_232_1_nech + " ; " +
aud_pt_6_232_1_nech + " ; " +
aud_pt_7_232_1_nech + " ; " +

prepod_pon_1_232_1_nech + " ; " +
prepod_pon_2_232_1_nech + " ; " +
prepod_pon_3_232_1_nech + " ; " +
prepod_pon_4_232_1_nech + " ; " +
prepod_pon_5_232_1_nech + " ; " +
prepod_pon_6_232_1_nech + " ; " +
prepod_pon_7_232_1_nech + " ; " +

prepod_vt_1_232_1_nech + " ; " +
prepod_vt_2_232_1_nech + " ; " +
prepod_vt_3_232_1_nech + " ; " +
prepod_vt_4_232_1_nech + " ; " +
prepod_vt_5_232_1_nech + " ; " +
prepod_vt_6_232_1_nech + " ; " +
prepod_vt_7_232_1_nech + " ; " +

prepod_sr_1_232_1_nech + " ; " +
prepod_sr_2_232_1_nech + " ; " +
prepod_sr_3_232_1_nech + " ; " +
prepod_sr_4_232_1_nech + " ; " +
prepod_sr_5_232_1_nech + " ; " +
prepod_sr_6_232_1_nech + " ; " +
prepod_sr_7_232_1_nech + " ; " +

prepod_ch_1_232_1_nech + " ; " +
prepod_ch_2_232_1_nech + " ; " +
prepod_ch_3_232_1_nech + " ; " +
prepod_ch_4_232_1_nech + " ; " +
prepod_ch_5_232_1_nech + " ; " +
prepod_ch_6_232_1_nech + " ; " +
prepod_ch_7_232_1_nech + " ; " +

prepod_pt_1_232_1_nech + " ; " +
prepod_pt_2_232_1_nech + " ; " +
prepod_pt_3_232_1_nech + " ; " +
prepod_pt_4_232_1_nech + " ; " +
prepod_pt_5_232_1_nech + " ; " +
prepod_pt_6_232_1_nech + " ; " +
prepod_pt_7_232_1_nech + " ; " +

predmet_pon_1_232_2_nech + " ; " +
predmet_pon_2_232_2_nech + " ; " +
predmet_pon_3_232_2_nech + " ; " +
predmet_pon_4_232_2_nech + " ; " +
predmet_pon_5_232_2_nech + " ; " +
predmet_pon_6_232_2_nech + " ; " +
predmet_pon_7_232_2_nech + " ; " +

predmet_vt_1_232_2_nech + " ; " +
predmet_vt_2_232_2_nech + " ; " +
predmet_vt_3_232_2_nech + " ; " +
predmet_vt_4_232_2_nech + " ; " +
predmet_vt_5_232_2_nech + " ; " +
predmet_vt_6_232_2_nech + " ; " +
predmet_vt_7_232_2_nech + " ; " +

predmet_sr_1_232_2_nech + " ; " +
predmet_sr_2_232_2_nech + " ; " +
predmet_sr_3_232_2_nech + " ; " +
predmet_sr_4_232_2_nech + " ; " +
predmet_sr_5_232_2_nech + " ; " +
predmet_sr_6_232_2_nech + " ; " +
predmet_sr_7_232_2_nech + " ; " +

predmet_ch_1_232_2_nech + " ; " +
predmet_ch_2_232_2_nech + " ; " +
predmet_ch_3_232_2_nech + " ; " +
predmet_ch_4_232_2_nech + " ; " +
predmet_ch_5_232_2_nech + " ; " +
predmet_ch_6_232_2_nech + " ; " +
predmet_ch_7_232_2_nech + " ; " +

predmet_pt_1_232_2_nech + " ; " +
predmet_pt_2_232_2_nech + " ; " +
predmet_pt_3_232_2_nech + " ; " +
predmet_pt_4_232_2_nech + " ; " +
predmet_pt_5_232_2_nech + " ; " +
predmet_pt_6_232_2_nech + " ; " +
predmet_pt_7_232_2_nech + " ; " +

aud_pon_1_232_2_nech + " ; " +
aud_pon_2_232_2_nech + " ; " + 
aud_pon_3_232_2_nech + " ; " +
aud_pon_4_232_2_nech + " ; " +
aud_pon_5_232_2_nech + " ; " +
aud_pon_6_232_2_nech + " ; " +
aud_pon_7_232_2_nech + " ; " +

aud_vt_1_232_2_nech + " ; " +
aud_vt_2_232_2_nech + " ; " +
aud_vt_3_232_2_nech + " ; " +
aud_vt_4_232_2_nech + " ; " +
aud_vt_5_232_2_nech + " ; " +
aud_vt_6_232_2_nech + " ; " +
aud_vt_7_232_2_nech + " ; " +

aud_sr_1_232_2_nech + " ; " +
aud_sr_2_232_2_nech + " ; " +
aud_sr_3_232_2_nech + " ; " +
aud_sr_4_232_2_nech + " ; " +
aud_sr_5_232_2_nech + " ; " +
aud_sr_6_232_2_nech + " ; " +
aud_sr_7_232_2_nech + " ; " +

aud_ch_1_232_2_nech + " ; " +
aud_ch_2_232_2_nech + " ; " +
aud_ch_3_232_2_nech + " ; " +
aud_ch_4_232_2_nech + " ; " +
aud_ch_5_232_2_nech + " ; " +
aud_ch_6_232_2_nech + " ; " +
aud_ch_7_232_2_nech + " ; " +

aud_pt_1_232_2_nech + " ; " +
aud_pt_2_232_2_nech + " ; " +
aud_pt_3_232_2_nech + " ; " +
aud_pt_4_232_2_nech + " ; " +
aud_pt_5_232_2_nech + " ; " +
aud_pt_6_232_2_nech + " ; " +
aud_pt_7_232_2_nech + " ; " +

prepod_pon_1_232_2_nech + " ; " +
prepod_pon_2_232_2_nech + " ; " + 
prepod_pon_3_232_2_nech + " ; " +
prepod_pon_4_232_2_nech + " ; " +
prepod_pon_5_232_2_nech + " ; " +
prepod_pon_6_232_2_nech + " ; " +
prepod_pon_7_232_2_nech + " ; " +

prepod_vt_1_232_2_nech + " ; " +
prepod_vt_2_232_2_nech + " ; " +
prepod_vt_3_232_2_nech + " ; " +
prepod_vt_4_232_2_nech + " ; " +
prepod_vt_5_232_2_nech + " ; " +
prepod_vt_6_232_2_nech + " ; " +
prepod_vt_7_232_2_nech + " ; " +

prepod_sr_1_232_2_nech + " ; " +
prepod_sr_2_232_2_nech + " ; " +
prepod_sr_3_232_2_nech + " ; " +
prepod_sr_4_232_2_nech + " ; " +
prepod_sr_5_232_2_nech + " ; " +
prepod_sr_6_232_2_nech + " ; " +
prepod_sr_7_232_2_nech + " ; " +

prepod_ch_1_232_2_nech + " ; " +
prepod_ch_2_232_2_nech + " ; " +
prepod_ch_3_232_2_nech + " ; " +
prepod_ch_4_232_2_nech + " ; " +
prepod_ch_5_232_2_nech + " ; " +
prepod_ch_6_232_2_nech + " ; " +
prepod_ch_7_232_2_nech + " ; " +

prepod_pt_1_232_2_nech + " ; " +
prepod_pt_2_232_2_nech + " ; " +
prepod_pt_3_232_2_nech + " ; " +
prepod_pt_4_232_2_nech + " ; " +
prepod_pt_5_232_2_nech + " ; " +
prepod_pt_6_232_2_nech + " ; " +
prepod_pt_7_232_2_nech + " ; " +

predmet_pon_1_231_1_chet + " ; " +
predmet_pon_2_231_1_chet + " ; " +
predmet_pon_3_231_1_chet + " ; " +
predmet_pon_4_231_1_chet + " ; " +
predmet_pon_5_231_1_chet + " ; " +
predmet_pon_6_231_1_chet + " ; " +
predmet_pon_7_231_1_chet + " ; " +

predmet_vt_1_231_1_chet + " ; " +
predmet_vt_2_231_1_chet + " ; " +
predmet_vt_3_231_1_chet + " ; " +
predmet_vt_4_231_1_chet + " ; " +
predmet_vt_5_231_1_chet + " ; " +
predmet_vt_6_231_1_chet + " ; " +
predmet_vt_7_231_1_chet + " ; " +

predmet_sr_1_231_1_chet + " ; " +
predmet_sr_2_231_1_chet + " ; " +
predmet_sr_3_231_1_chet + " ; " +
predmet_sr_4_231_1_chet + " ; " +
predmet_sr_5_231_1_chet + " ; " +
predmet_sr_6_231_1_chet + " ; " +
predmet_sr_7_231_1_chet + " ; " +

predmet_ch_1_231_1_chet + " ; " +
predmet_ch_2_231_1_chet + " ; " +
predmet_ch_3_231_1_chet + " ; " +
predmet_ch_4_231_1_chet + " ; " +
predmet_ch_5_231_1_chet + " ; " +
predmet_ch_6_231_1_chet + " ; " +
predmet_ch_7_231_1_chet + " ; " +

predmet_pt_1_231_1_chet + " ; " +
predmet_pt_2_231_1_chet + " ; " +
predmet_pt_3_231_1_chet + " ; " +
predmet_pt_4_231_1_chet + " ; " +
predmet_pt_5_231_1_chet + " ; " +
predmet_pt_6_231_1_chet + " ; " +
predmet_pt_7_231_1_chet + " ; " +

aud_pon_1_231_1_chet + " ; " +
aud_pon_2_231_1_chet + " ; " +
aud_pon_3_231_1_chet + " ; " +
aud_pon_4_231_1_chet + " ; " +
aud_pon_5_231_1_chet + " ; " +
aud_pon_6_231_1_chet + " ; " +
aud_pon_7_231_1_chet + " ; " +

aud_vt_1_231_1_chet + " ; " +
aud_vt_2_231_1_chet + " ; " +
aud_vt_3_231_1_chet + " ; " +
aud_vt_4_231_1_chet + " ; " +
aud_vt_5_231_1_chet + " ; " +
aud_vt_6_231_1_chet + " ; " +
aud_vt_7_231_1_chet + " ; " +

aud_sr_1_231_1_chet + " ; " +
aud_sr_2_231_1_chet + " ; " +
aud_sr_3_231_1_chet + " ; " +
aud_sr_4_231_1_chet + " ; " +
aud_sr_5_231_1_chet + " ; " +
aud_sr_6_231_1_chet + " ; " +
aud_sr_7_231_1_chet + " ; " +

aud_ch_1_231_1_chet + " ; " +
aud_ch_2_231_1_chet + " ; " +
aud_ch_3_231_1_chet + " ; " +
aud_ch_4_231_1_chet + " ; " +
aud_ch_5_231_1_chet + " ; " +
aud_ch_6_231_1_chet + " ; " +
aud_ch_7_231_1_chet + " ; " +

aud_pt_1_231_1_chet + " ; " +
aud_pt_2_231_1_chet + " ; " +
aud_pt_3_231_1_chet + " ; " +
aud_pt_4_231_1_chet + " ; " +
aud_pt_5_231_1_chet + " ; " +
aud_pt_6_231_1_chet + " ; " +
aud_pt_7_231_1_chet + " ; " +

prepod_pon_1_231_1_chet + " ; " +
prepod_pon_2_231_1_chet + " ; " +
prepod_pon_3_231_1_chet + " ; " +
prepod_pon_4_231_1_chet + " ; " +
prepod_pon_5_231_1_chet + " ; " +
prepod_pon_6_231_1_chet + " ; " +
prepod_pon_7_231_1_chet + " ; " +

prepod_vt_1_231_1_chet + " ; " +
prepod_vt_2_231_1_chet + " ; " +
prepod_vt_3_231_1_chet + " ; " +
prepod_vt_4_231_1_chet + " ; " +
prepod_vt_5_231_1_chet + " ; " +
prepod_vt_6_231_1_chet + " ; " +
prepod_vt_7_231_1_chet + " ; " +

prepod_sr_1_231_1_chet + " ; " +
prepod_sr_2_231_1_chet + " ; " +
prepod_sr_3_231_1_chet + " ; " +
prepod_sr_4_231_1_chet + " ; " +
prepod_sr_5_231_1_chet + " ; " +
prepod_sr_6_231_1_chet + " ; " +
prepod_sr_7_231_1_chet + " ; " +

prepod_ch_1_231_1_chet + " ; " +
prepod_ch_2_231_1_chet + " ; " +
prepod_ch_3_231_1_chet + " ; " +
prepod_ch_4_231_1_chet + " ; " +
prepod_ch_5_231_1_chet + " ; " +
prepod_ch_6_231_1_chet + " ; " +
prepod_ch_7_231_1_chet + " ; " +

prepod_pt_1_231_1_chet + " ; " +
prepod_pt_2_231_1_chet + " ; " +
prepod_pt_3_231_1_chet + " ; " +
prepod_pt_4_231_1_chet + " ; " +
prepod_pt_5_231_1_chet + " ; " +
prepod_pt_6_231_1_chet + " ; " +
prepod_pt_7_231_1_chet + " ; " +

predmet_pon_1_231_2_chet + " ; " +
predmet_pon_2_231_2_chet + " ; " +
predmet_pon_3_231_2_chet + " ; " +
predmet_pon_4_231_2_chet + " ; " +
predmet_pon_5_231_2_chet + " ; " +
predmet_pon_6_231_2_chet + " ; " +
predmet_pon_7_231_2_chet + " ; " + 

predmet_vt_1_231_2_chet + " ; " +
predmet_vt_2_231_2_chet  +" ; " +
predmet_vt_3_231_2_chet + " ; " +
predmet_vt_4_231_2_chet + " ; " +
predmet_vt_5_231_2_chet + " ; " +
predmet_vt_6_231_2_chet + " ; " +
predmet_vt_7_231_2_chet + " ; " +

predmet_sr_1_231_2_chet + " ; " +
predmet_sr_2_231_2_chet + " ; " +
predmet_sr_3_231_2_chet + " ; " +
predmet_sr_4_231_2_chet + " ; " +
predmet_sr_5_231_2_chet + " ; " +
predmet_sr_6_231_2_chet + " ; " +
predmet_sr_7_231_2_chet  +" ; " +

predmet_ch_1_231_2_chet + " ; " +
predmet_ch_2_231_2_chet + " ; " +
predmet_ch_3_231_2_chet + " ; " +
predmet_ch_4_231_2_chet + " ; " +
predmet_ch_5_231_2_chet + " ; " +
predmet_ch_6_231_2_chet + " ; " +
predmet_ch_7_231_2_chet + " ; " +

predmet_pt_1_231_2_chet + " ; " +
predmet_pt_2_231_2_chet + " ; " +
predmet_pt_3_231_2_chet + " ; " +
predmet_pt_4_231_2_chet + " ; " +
predmet_pt_5_231_2_chet + " ; " +
predmet_pt_6_231_2_chet + " ; " +
predmet_pt_7_231_2_chet + " ; " +

aud_pon_1_231_2_chet + " ; " +
aud_pon_2_231_2_chet + " ; " +
aud_pon_3_231_2_chet +" ; " +
aud_pon_4_231_2_chet + " ; " +
aud_pon_5_231_2_chet + " ; " +
aud_pon_6_231_2_chet + " ; " +
aud_pon_7_231_2_chet + " ; " +

aud_vt_1_231_2_chet + " ; " +
aud_vt_2_231_2_chet + " ; " +
aud_vt_3_231_2_chet + " ; " +
aud_vt_4_231_2_chet + " ; " +
aud_vt_5_231_2_chet + " ; " +
aud_vt_6_231_2_chet + " ; " +
aud_vt_7_231_2_chet + " ; " +

aud_sr_1_231_2_chet + " ; " +
aud_sr_2_231_2_chet + " ; " +
aud_sr_3_231_2_chet + " ; " +
aud_sr_4_231_2_chet + " ; " +
aud_sr_5_231_2_chet + " ; " +
aud_sr_6_231_2_chet + " ; " +
aud_sr_7_231_2_chet + " ; " +

aud_ch_1_231_2_chet + " ; " +
aud_ch_2_231_2_chet + " ; " +
aud_ch_3_231_2_chet + " ; " +
aud_ch_4_231_2_chet + " ; " +
aud_ch_5_231_2_chet + " ; " +
aud_ch_6_231_2_chet + " ; " +
aud_ch_7_231_2_chet + " ; " +

aud_pt_1_231_2_chet +" ; " +
aud_pt_2_231_2_chet + " ; " +
aud_pt_3_231_2_chet + " ; " +
aud_pt_4_231_2_chet + " ; " +
aud_pt_5_231_2_chet + " ; " +
aud_pt_6_231_2_chet + " ; " +
aud_pt_7_231_2_chet + " ; " +

prepod_pon_1_231_2_chet + " ; " +
prepod_pon_2_231_2_chet + " ; " +
prepod_pon_3_231_2_chet + " ; " +
prepod_pon_4_231_2_chet + " ; " +
prepod_pon_5_231_2_chet + " ; " +
prepod_pon_6_231_2_chet + " ; " +
prepod_pon_7_231_2_chet + " ; " +

prepod_vt_1_231_2_chet + " ; " +
prepod_vt_2_231_2_chet + " ; " +
prepod_vt_3_231_2_chet + " ; " +
prepod_vt_4_231_2_chet + " ; " +
prepod_vt_5_231_2_chet + " ; " +
prepod_vt_6_231_2_chet + " ; " +
prepod_vt_7_231_2_chet + " ; " +

prepod_sr_1_231_2_chet + " ; " +
prepod_sr_2_231_2_chet + " ; " +
prepod_sr_3_231_2_chet + " ; " +
prepod_sr_4_231_2_chet +" ; " +
prepod_sr_5_231_2_chet + " ; " +
prepod_sr_6_231_2_chet + " ; " +
prepod_sr_7_231_2_chet + " ; " +

prepod_ch_1_231_2_chet + " ; " +
prepod_ch_2_231_2_chet + " ; " +
prepod_ch_3_231_2_chet + " ; " +
prepod_ch_4_231_2_chet + " ; " +
prepod_ch_5_231_2_chet + " ; " +
prepod_ch_6_231_2_chet + " ; " +
prepod_ch_7_231_2_chet + " ; " +

prepod_pt_1_231_2_chet + " ; " +
prepod_pt_2_231_2_chet + " ; " +
prepod_pt_3_231_2_chet + " ; " +
prepod_pt_4_231_2_chet + " ; " +
prepod_pt_5_231_2_chet + " ; " +
prepod_pt_6_231_2_chet + " ; " +
prepod_pt_7_231_2_chet + " ; " +

predmet_pon_1_232_1_chet + " ; " +
predmet_pon_2_232_1_chet + " ; " +
predmet_pon_3_232_1_chet + " ; " +
predmet_pon_4_232_1_chet + " ; " +
predmet_pon_5_232_1_chet + " ; " +
predmet_pon_6_232_1_chet + " ; " +
predmet_pon_7_232_1_chet + " ; " +

predmet_vt_1_232_1_chet + " ; " +
predmet_vt_2_232_1_chet + " ; " +
predmet_vt_3_232_1_chet + " ; " +
predmet_vt_4_232_1_chet + " ; " +
predmet_vt_5_232_1_chet + " ; " +
predmet_vt_6_232_1_chet + " ; " +
predmet_vt_7_232_1_chet + " ; " +

predmet_sr_1_232_1_chet + " ; " +
predmet_sr_2_232_1_chet + " ; " +
predmet_sr_3_232_1_chet + " ; " +
predmet_sr_4_232_1_chet + " ; " +
predmet_sr_5_232_1_chet + " ; " +
predmet_sr_6_232_1_chet + " ; " +
predmet_sr_7_232_1_chet  +" ; " +

predmet_ch_1_232_1_chet + " ; " +
predmet_ch_2_232_1_chet + " ; " +
predmet_ch_3_232_1_chet + " ; " +
predmet_ch_4_232_1_chet + " ; " +
predmet_ch_5_232_1_chet + " ; " +
predmet_ch_6_232_1_chet + " ; " +
predmet_ch_7_232_1_chet + " ; " +

predmet_pt_1_232_1_chet + " ; " +
predmet_pt_2_232_1_chet + " ; " +
predmet_pt_3_232_1_chet + " ; " +
predmet_pt_4_232_1_chet + " ; " +
predmet_pt_5_232_1_chet + " ; " +
predmet_pt_6_232_1_chet + " ; " +
predmet_pt_7_232_1_chet + " ; " +

aud_pon_1_232_1_chet + " ; " +
aud_pon_2_232_1_chet + " ; " +
aud_pon_3_232_1_chet + " ; " +
aud_pon_4_232_1_chet + " ; " +
aud_pon_5_232_1_chet + " ; " +
aud_pon_6_232_1_chet + " ; " +
aud_pon_7_232_1_chet + " ; " +

aud_vt_1_232_1_chet + " ; " +
aud_vt_2_232_1_chet + " ; " +
aud_vt_3_232_1_chet + " ; " +
aud_vt_4_232_1_chet + " ; " +
aud_vt_5_232_1_chet + " ; " +
aud_vt_6_232_1_chet + " ; " +
aud_vt_7_232_1_chet + " ; " +

aud_sr_1_232_1_chet + " ; " +
aud_sr_2_232_1_chet + " ; " +
aud_sr_3_232_1_chet + " ; " +
aud_sr_4_232_1_chet + " ; " +
aud_sr_5_232_1_chet + " ; " +
aud_sr_6_232_1_chet + " ; " +
aud_sr_7_232_1_chet + " ; " +

aud_ch_1_232_1_chet + " ; " +
aud_ch_2_232_1_chet + " ; " +
aud_ch_3_232_1_chet + " ; " +
aud_ch_4_232_1_chet + " ; " +
aud_ch_5_232_1_chet + " ; " +
aud_ch_6_232_1_chet + " ; " +
aud_ch_7_232_1_chet + " ; " +

aud_pt_1_232_1_chet + " ; " +
aud_pt_2_232_1_chet + " ; " +
aud_pt_3_232_1_chet + " ; " +
aud_pt_4_232_1_chet + " ; " +
aud_pt_5_232_1_chet + " ; " +
aud_pt_6_232_1_chet + " ; " +
aud_pt_7_232_1_chet + " ; " +

prepod_pon_1_232_1_chet + " ; " +
prepod_pon_2_232_1_chet + " ; " +
prepod_pon_3_232_1_chet + " ; " +
prepod_pon_4_232_1_chet + " ; " +
prepod_pon_5_232_1_chet + " ; " +
prepod_pon_6_232_1_chet + " ; " +
prepod_pon_7_232_1_chet + " ; " +

prepod_vt_1_232_1_chet + " ; " +
prepod_vt_2_232_1_chet + " ; " +
prepod_vt_3_232_1_chet + " ; " +
prepod_vt_4_232_1_chet + " ; " +
prepod_vt_5_232_1_chet + " ; " +
prepod_vt_6_232_1_chet + " ; " +
prepod_vt_7_232_1_chet + " ; " +

prepod_sr_1_232_1_chet + " ; " +
prepod_sr_2_232_1_chet + " ; " +
prepod_sr_3_232_1_chet + " ; " +
prepod_sr_4_232_1_chet + " ; " +
prepod_sr_5_232_1_chet + " ; " +
prepod_sr_6_232_1_chet + " ; " +
prepod_sr_7_232_1_chet + " ; " +

prepod_ch_1_232_1_chet + " ; " +
prepod_ch_2_232_1_chet + " ; " +
prepod_ch_3_232_1_chet + " ; " +
prepod_ch_4_232_1_chet + " ; " +
prepod_ch_5_232_1_chet + " ; " +
prepod_ch_6_232_1_chet + " ; " +
prepod_ch_7_232_1_chet + " ; " +

prepod_pt_1_232_1_chet + " ; " +
prepod_pt_2_232_1_chet + " ; " +
prepod_pt_3_232_1_chet + " ; " +
prepod_pt_4_232_1_chet + " ; " +
prepod_pt_5_232_1_chet + " ; " +
prepod_pt_6_232_1_chet + " ; " +
prepod_pt_7_232_1_chet + " ; " +

predmet_pon_1_232_2_chet + " ; " +
predmet_pon_2_232_2_chet + " ; " +
predmet_pon_3_232_2_chet + " ; " +
predmet_pon_4_232_2_chet + " ; " +
predmet_pon_5_232_2_chet + " ; " +
predmet_pon_6_232_2_chet + " ; " +
predmet_pon_7_232_2_chet + " ; " +

predmet_vt_1_232_2_chet + " ; " +
predmet_vt_2_232_2_chet + " ; " +
predmet_vt_3_232_2_chet + " ; " +
predmet_vt_4_232_2_chet + " ; " +
predmet_vt_5_232_2_chet + " ; " +
predmet_vt_6_232_2_chet + " ; " +
predmet_vt_7_232_2_chet + " ; " +

predmet_sr_1_232_2_chet + " ; " +
predmet_sr_2_232_2_chet + " ; " +
predmet_sr_3_232_2_chet + " ; " +
predmet_sr_4_232_2_chet + " ; " +
predmet_sr_5_232_2_chet + " ; " +
predmet_sr_6_232_2_chet + " ; " +
predmet_sr_7_232_2_chet + " ; " +

predmet_ch_1_232_2_chet + " ; " +
predmet_ch_2_232_2_chet + " ; " +
predmet_ch_3_232_2_chet + " ; " +
predmet_ch_4_232_2_chet + " ; " +
predmet_ch_5_232_2_chet + " ; " +
predmet_ch_6_232_2_chet + " ; " +
predmet_ch_7_232_2_chet + " ; " +

predmet_pt_1_232_2_chet + " ; " +
predmet_pt_2_232_2_chet + " ; " +
predmet_pt_3_232_2_chet + " ; " +
predmet_pt_4_232_2_chet + " ; " +
predmet_pt_5_232_2_chet + " ; " +
predmet_pt_6_232_2_chet + " ; " +
predmet_pt_7_232_2_chet + " ; " +

aud_pon_1_232_2_chet + " ; " +
aud_pon_2_232_2_chet + " ; " +
aud_pon_3_232_2_chet + " ; " +
aud_pon_4_232_2_chet + " ; " +
aud_pon_5_232_2_chet + " ; " +
aud_pon_6_232_2_chet + " ; " +
aud_pon_7_232_2_chet + " ; " +

aud_vt_1_232_2_chet + " ; " +
aud_vt_2_232_2_chet + " ; " +
aud_vt_3_232_2_chet + " ; " +
aud_vt_4_232_2_chet + " ; " +
aud_vt_5_232_2_chet + " ; " +
aud_vt_6_232_2_chet + " ; " +
aud_vt_7_232_2_chet + " ; " +

aud_sr_1_232_2_chet + " ; " +
aud_sr_2_232_2_chet + " ; " +
aud_sr_3_232_2_chet + " ; " +
aud_sr_4_232_2_chet + " ; " +
aud_sr_5_232_2_chet + " ; " +
aud_sr_6_232_2_chet + " ; " +
aud_sr_7_232_2_chet + " ; " +

aud_ch_1_232_2_chet + " ; " +
aud_ch_2_232_2_chet + " ; " +
aud_ch_3_232_2_chet + " ; " +
aud_ch_4_232_2_chet + " ; " +
aud_ch_5_232_2_chet + " ; " + 
aud_ch_6_232_2_chet + " ; " +
aud_ch_7_232_2_chet + " ; " +

aud_pt_1_232_2_chet + " ; " +
aud_pt_2_232_2_chet + " ; " +
aud_pt_3_232_2_chet + " ; " +
aud_pt_4_232_2_chet + " ; " +
aud_pt_5_232_2_chet + " ; " +
aud_pt_6_232_2_chet + " ; " +
aud_pt_7_232_2_chet + " ; " +

prepod_pon_1_232_2_chet + " ; " +
prepod_pon_2_232_2_chet + " ; " +
prepod_pon_3_232_2_chet + " ; " +
prepod_pon_4_232_2_chet + " ; " +
prepod_pon_5_232_2_chet + " ; " +
prepod_pon_6_232_2_chet + " ; " +
prepod_pon_7_232_2_chet + " ; " +

prepod_vt_1_232_2_chet + " ; " +
prepod_vt_2_232_2_chet + " ; " +
prepod_vt_3_232_2_chet + " ; " +
prepod_vt_4_232_2_chet + " ; " +
prepod_vt_5_232_2_chet + " ; " +
prepod_vt_6_232_2_chet + " ; " +
prepod_vt_7_232_2_chet + " ; " +

prepod_sr_1_232_2_chet + " ; " +
prepod_sr_2_232_2_chet + " ; " +
prepod_sr_3_232_2_chet + " ; " +
prepod_sr_4_232_2_chet + " ; " +
prepod_sr_5_232_2_chet + " ; " +
prepod_sr_6_232_2_chet + " ; " +
prepod_sr_7_232_2_chet + " ; " +

prepod_ch_1_232_2_chet + " ; " +
prepod_ch_2_232_2_chet + " ; " +
prepod_ch_3_232_2_chet + " ; " +
prepod_ch_4_232_2_chet + " ; " +
prepod_ch_5_232_2_chet + " ; " +
prepod_ch_6_232_2_chet + " ; " +
prepod_ch_7_232_2_chet + " ; " +

prepod_pt_1_232_2_chet + " ; " +
prepod_pt_2_232_2_chet + " ; " +
prepod_pt_3_232_2_chet + " ; " +
prepod_pt_4_232_2_chet + " ; " +
prepod_pt_5_232_2_chet + " ; " +
prepod_pt_6_232_2_chet + " ; " +
prepod_pt_7_232_2_chet 
    
  , "text/plain");








        
    

}

int main() {    
    
    //setlocale(LC_ALL, "ru_RU.utf8");
    
    Server svr;                  // Создаём сервер (пока-что не запущен)
    svr.Get("/getperemen", handler); // Обработчик отвечающий на GET запрос к /sum
    std::cout << "serv listen...";
    svr.listen("0.0.0.0", 8080); // Запуск сервера на порту 8080
     

    
    
    
   




         
}
