#include <ctest.h>
#include <../src/deposit.h>

CTEST(correct_test, correct_sum) // корректность ввода числовых значений
{
    int result = not_correct_number("626png");
    
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_correct, check_correctness)
{
    int result = correct_number("156825");
    
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(input_validation, test_input)
{
    int result = input_validation(269857, 231);
    
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(calc_first_test, calc)
{
    double result = calc_result(123650,145);
    
    const double expected = 133542;
    ASSERT_EQUAL(expected, result);
}

///////////////////////////

CTEST(day<_0_calc, calc) // корректность ввода значения времени
{
    double result = calc_result(265685, -5);

    const double expected = 0;

    ASSERT_EQUAL(expected, result);
}

CTEST(day>_365_calc, calc)
{
    double result = calc_result(256854, 366);

    const double expected = 0;

    ASSERT_EQUAL(expected, result);
}

///////////////////////////////////////

CTEST(day=31_calc<100000_rub, calc)  // Проверка вычисления доходности влкадов 
{
    double result = calc_result(30000, 31);
    const double exp = 30600;

    ASSERT_EQUAL(exp, result);
}

CTEST(day=31_calc>100000_rub, calc)
{
    double result = calc_result(135000, 31);
    const double exp = 137700;

    ASSERT_EQUAL(exp, result);
}

CTEST(day=120_calc<100000_rub, calc)
{
    double result = calc_result(3000, 31);
    const double exp = 30600;

    ASSERT_EQUAL(exp, result);
}

CTEST(day=120_calc>100000_rub, calc)
{
    double result = calc_result(135000, 31);
    const double exp = 137700;

    ASSERT_EQUAL(exp, result);
}

CTEST(day=121_calc<100000_rub, calc)
{
    double result = calc_result(30000, 121);
    const double exp = 31800;

    ASSERT_EQUAL(exp, result);
}

CTEST(day=121_calc>100000_rub, calc)
{
    double result = calc_result(135000, 121);
    const double exp = 145800;

    ASSERT_EQUAL(exp, result);
}

CTEST(day=240_calc<100000_rub, calc)
{
    double result = calc_result(30000, 121);
    const double exp = 31800;

   ASSERT_EQUAL(exp, result);
}

CTEST(day=240_calc>100000_rub, calc)
{
    double result = calc_result(130000, 121);
    const double exp = 145800;

    ASSERT_EQUAL(exp, result);
}

CTEST(day=241_calc<100000_rub, calc)
{
    double result = calc_result(30000, 241);
    const double exp = 33600;

    ASSERT_EQUAL(exp, result);
}

CTEST(day=241_calc>100000_rub, calc)
{
    double result = calc_result(135000, 241);
    const double exp = 151200;

    ASSERT_EQUAL(exp, result);
}

CTEST(day=365_calc<100000_rub, calc)
{
    double result = calc_result(30000, 241);
    const double exp = 33600;

    ASSERT_EQUAL(exp, result);
}

CTEST(day=365_calc>100000_rub, calc)
{
    double result = calc_result(135000, 241);
    const double exp = 151200;

    ASSERT_EQUAL(exp, result);
}
