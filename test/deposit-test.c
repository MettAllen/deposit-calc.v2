#include <ctest.h>
#include <../src/deposit.h>

CTEST(input_check, test_input)
{
    int result = Check(1234827, 231);
    
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(calc_test, calc)
{
    int result = Dohod(123400,140);
    
    const int expected = 133272;
    ASSERT_EQUAL(expected, result);
}

CTEST(calc_less0_days, calc)
{
    int result = Dohod(22222, -5);

    const int expected = 0;

    ASSERT_EQUAL(expected, result);
}

CTEST(calc_more365_days, calc)
{
    int result = Dohod(22222, 366);

    const int expected = 0;

    ASSERT_EQUAL(expected, result);
}
/////////////////////////////////
CTEST(calc_31_day_less_100000_rub, calc)
{
    int result = Dohod(50000, 31);
    const int exp = 51000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_31_day_more_100000_rub, calc)
{
    int result = Dohod(150000, 31);
    const int exp = 154500;

    ASSERT_EQUAL(exp, result);
}
/////////////////////////////////
CTEST(calc_120_day_less_100000_rub, calc)
{
    int result = Dohod(50000, 31);
    const int exp = 51000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_120_day_more_100000_rub, calc)
{
    int result = Dohod(150000, 31);
    const int exp = 154500;

    ASSERT_EQUAL(exp, result);
}
/////////////////////////////////
CTEST(calc_121_day_less_100000_rub, calc)
{
    int result = Dohod(50000, 121);
    const int exp = 53000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_121_day_more_100000_rub, calc)
{
    int result = Dohod(150000, 121);
    const int exp = 162000;

    ASSERT_EQUAL(exp, result);
}
/////////////////////////////////
CTEST(calc_240_day_less_100000_rub, calc)
{
    int result = Dohod(50000, 121);
    const int exp = 53000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_240_day_more_100000_rub, calc)
{
    int result = Dohod(150000, 121);
    const int exp = 162000;

    ASSERT_EQUAL(exp, result);
}
/////////////////////////////////
CTEST(calc_241_day_less_100000_rub, calc)
{
    int result = Dohod(50000, 241);
    const int exp = 56000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_241_day_more_100000_rub, calc)
{
    int result = Dohod(150000, 241);
    const int exp = 172500;

    ASSERT_EQUAL(exp, result);
}
/////////////////////////////////

CTEST(calc_365_day_less_100000_rub, calc)
{
    int result = Dohod(50000, 241);
    const int exp = 56000;

    ASSERT_EQUAL(exp, result);
}

CTEST(calc_365_day_more_100000_rub, calc)
{
    int result = Dohod(150000, 241);
    const int exp = 172500;

    ASSERT_EQUAL(exp, result);
}
