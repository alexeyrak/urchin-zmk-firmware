#pragma once

#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/unicode.h>

// Lowercase Cyrillic
#define UC_CYR_A &unicode 0x0430 // а
#define UC_CYR_B &unicode 0x0431 // б
#define UC_CYR_V &unicode 0x0432 // в
#define UC_CYR_G &unicode 0x0433 // г
#define UC_CYR_D &unicode 0x0434 // д
#define UC_CYR_E &unicode 0x0435 // е
#define UC_CYR_YO &unicode 0x0451 // ё (if needed, not in provided list)
#define UC_CYR_ZH &unicode 0x0436 // ж
#define UC_CYR_Z &unicode 0x0437 // з
#define UC_CYR_I &unicode 0x0438 // и
#define UC_CYR_SHORT_I &unicode 0x0439 // й
#define UC_CYR_K &unicode 0x043A // к
#define UC_CYR_L &unicode 0x043B // л
#define UC_CYR_M &unicode 0x043C // м
#define UC_CYR_N &unicode 0x043D // н
#define UC_CYR_O &unicode 0x043E // о
#define UC_CYR_P &unicode 0x043F // п
#define UC_CYR_R &unicode 0x0440 // р
#define UC_CYR_S &unicode 0x0441 // с
#define UC_CYR_T &unicode 0x0442 // т
#define UC_CYR_U &unicode 0x0443 // у
#define UC_CYR_F &unicode 0x0444 // ф
#define UC_CYR_H &unicode 0x0445 // х
#define UC_CYR_TS &unicode 0x0446 // ц
#define UC_CYR_CH &unicode 0x0447 // ч
#define UC_CYR_SH &unicode 0x0448 // ш
#define UC_CYR_SHCH &unicode 0x0449 // щ
#define UC_CYR_HARD_SIGN &unicode 0x044A // ъ
#define UC_CYR_Y &unicode 0x044B // ы
#define UC_CYR_SOFT_SIGN &unicode 0x044C // ь
#define UC_CYR_E_REV &unicode 0x044D // э
#define UC_CYR_YU &unicode 0x044E // ю
#define UC_CYR_YA &unicode 0x044F // я

// Ukrainian specific lowercase (from provided list)
#define UC_CYR_GHE_UPTURN &unicode 0x0491 // ґ
#define UC_CYR_YI &unicode 0x0457 // ї
#define UC_CYR_IE &unicode 0x0454 // є
#define UC_CYR_I_DOT &unicode 0x0456 // і

// Uppercase Cyrillic
#define UC_CYR_A_CAPS &unicode 0x0410 // А
#define UC_CYR_B_CAPS &unicode 0x0411 // Б
#define UC_CYR_V_CAPS &unicode 0x0412 // В
#define UC_CYR_G_CAPS &unicode 0x0413 // Г
#define UC_CYR_D_CAPS &unicode 0x0414 // Д
#define UC_CYR_E_CAPS &unicode 0x0415 // Е
#define UC_CYR_YO_CAPS &unicode 0x0401 // Ё (if needed)
#define UC_CYR_ZH_CAPS &unicode 0x0416 // Ж
#define UC_CYR_Z_CAPS &unicode 0x0417 // З
#define UC_CYR_I_CAPS &unicode 0x0418 // И
#define UC_CYR_SHORT_I_CAPS &unicode 0x0419 // Й
#define UC_CYR_K_CAPS &unicode 0x041A // К
#define UC_CYR_L_CAPS &unicode 0x041B // Л
#define UC_CYR_M_CAPS &unicode 0x041C // М
#define UC_CYR_N_CAPS &unicode 0x041D // Н
#define UC_CYR_O_CAPS &unicode 0x041E // О
#define UC_CYR_P_CAPS &unicode 0x041F // П
#define UC_CYR_R_CAPS &unicode 0x0420 // Р
#define UC_CYR_S_CAPS &unicode 0x0421 // С
#define UC_CYR_T_CAPS &unicode 0x0422 // Т
#define UC_CYR_U_CAPS &unicode 0x0423 // У
#define UC_CYR_F_CAPS &unicode 0x0424 // Ф
#define UC_CYR_H_CAPS &unicode 0x0425 // Х
#define UC_CYR_TS_CAPS &unicode 0x0426 // Ц
#define UC_CYR_CH_CAPS &unicode 0x0427 // Ч
#define UC_CYR_SH_CAPS &unicode 0x0428 // Ш
#define UC_CYR_SHCH_CAPS &unicode 0x0429 // Щ
#define UC_CYR_HARD_SIGN_CAPS &unicode 0x042A // Ъ
#define UC_CYR_Y_CAPS &unicode 0x042B // Ы
#define UC_CYR_SOFT_SIGN_CAPS &unicode 0x042C // Ь
#define UC_CYR_E_REV_CAPS &unicode 0x042D // Э
#define UC_CYR_YU_CAPS &unicode 0x042E // Ю
#define UC_CYR_YA_CAPS &unicode 0x042F // Я

// Ukrainian specific uppercase (from provided list)
#define UC_CYR_GHE_UPTURN_CAPS &unicode 0x0490 // Ґ
#define UC_CYR_YI_CAPS &unicode 0x0407 // Ї
#define UC_CYR_IE_CAPS &unicode 0x0404 // Є
#define UC_CYR_I_DOT_CAPS &unicode 0x0406 // І
