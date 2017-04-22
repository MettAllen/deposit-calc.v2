#include <ctest.h>
#include <../src/deposit.h>

CTEST(chek_validation, test_input)
{
    int result = Chek(269857, 231);
    
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(calc_test, calc)
{
    int result = Dohod(123650,145);
    
    const int expected = 133542;
    ASSERT_EQUAL(expected, result);
}

///////////////////////////

CTEST(day_less_0_calc, calc) // корректность ввода значения времени
{
    int result = Dohod(265685, -5);

    const int expected = 0;

    ASSERT_EQUAL(expected, result);
}

CTEST(day_more_365_calc, calc)
{
    int result = Dohod(256854, 366);

    const int expected = 0;

    ASSERT_EQUAL(expected, result);
}

///////////////////////////////////////

CTEST(day_31_calc_less_100000_rub, calc)  // Проверка вычисления доходности влкадов 
{
    int result = Dohod(30000, 31);
    const int exp = 30600;

    ASSERT_EQUAL(exp, result);
}

CTEST(day_31_calc_more_100000_rub, calc)
{
    int result = Dohod(135000, 31);
    const int exp = 137700;

    ASSERT_EQUAL(exp, result);
}

CTEST(day_120_calc_less_100000_rub, calc)
{
    int result = Dohod(3000, 31);
    const int exp = 30600;

    ASSERT_EQUAL(exp, result);
}

CTEST(day_120_calc_more_100000_rub, calc)
{
    int result = Dohod(135000, 31);
    const int exp = 137700;

    ASSERT_EQUAL(exp, result);
}

CTEST(day_121_calc_less_100000_rub, calc)
{
    int result = Dohod(30000, 121);
    const int exp = 31800;

    ASSERT_EQUAL(exp, result);
}

CTEST(day_121_calc_more_100000_rub, calc)
{
    int result = Dohod(135000, 121);
    const int exp = 145800;

    ASSERT_EQUAL(exp, result);
}

CTEST(day_240_calc_less_100000_rub, calc)
{
    int result = Dohod(30000, 121);
    const int exp = 31800;

   ASSERT_EQUAL(exp, result);
}

CTEST(day_240_calc_more_100000_rub, calc)
{
    int result = Dohod(130000, 121);
    const int exp = 145800;

    ASSERT_EQUAL(exp, result);
}

CTEST(day_241_calc_less_100000_rub, calc)
{
    int result = Dohod(30000, 241);
    const int exp = 33600;

    ASSERT_EQUAL(exp, result);
}

CTEST(day_241_calc_more_100000_rub, calc)
{
    int result = Dohod(135000, 241);
    const int exp = 151200;

    ASSERT_EQUAL(exp, result);
}

CTEST(day_365_calc_less_100000_rub, calc)
{
    int result = Dohod(30000, 241);
    const int exp = 33600;

    ASSERT_EQUAL(exp, result);
}

CTEST(day_365_calc_more_100000_rub, calc)
{
    int result = Dohod(135000, 241);
    const int exp = 151200;

    ASSERT_EQUAL(exp, result);
}
